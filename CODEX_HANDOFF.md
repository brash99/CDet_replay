# CDet Codex session handoff

Updated: 2026-09-27

Read this file first when resuming work in a new Codex session. Then read
`git-repo/sbs_devel/SBS-replay/scripts/cdet/CDet_STEP5_ROI_INTEGRATION.md`.

## Current objective

We are implementing and validating CDet information in the GEp front-tracker
region-of-interest calculation. CDet pulse formation and detector-local
pair/single-layer candidate construction are already implemented in
`SBSCDet`. Step 5 currently exports CDet/ECal ray hypotheses and their
target-z associations from `SBSGEPRegionOfInterestModule` for diagnosis. It
does **not yet use those hypotheses to constrain GEM tracking**.

The immediate task is to replay Runs 5711 and 6077 with the full GEp replay,
including GEM tracking and FTROI, and then regenerate/compare the target-z
diagnostics.

## Repositories and current state

### SBS-replay

- Path: `git-repo/sbs_devel/SBS-replay`
- Branch: `tdccalib`
- HEAD when this file was written: `1a0b36ea updates`
- Modified but not committed:
  `scripts/cdet/CDet_STEP5_ROI_INTEGRATION.md`
- The modification documents the new CDet+GEM farm submission path and the
  distinction from the CDet-only path. Preserve it.

### SBS-offline

- Path: `git-repo/sbs_devel/SBS-offline`
- Branch: `cdet-ecal-hit-selection`
- HEAD when this file was written: `817ca7e updates`
- Working tree was clean.

The latest implementation includes topology-aware FTROI y compatibility:

- the same `+0.10 m` CDet y alignment used by `SBSCDet`;
- ordinary half-bar compatibility for single-layer and same-side pairs;
- seam-aware compatibility for opposite-side pairs;
- exported hypothesis y topology and seam-compatibility decisions.

Relevant exported variables include:

- `FTROI.cdet.hyp.y_topology`
- `FTROI.cdet.vertex.ycompatible`
- `FTROI.cdet.vertex.yseam_compatible`

### jlab-HPC

- Path: `git-repo/sbs_devel/jlab-HPC`
- Branch: `cdet`
- HEAD when this file was written: `25240e7 updates`
- Working tree was clean.

Commit `25240e7` added:

- `submit-cdet-gem-jobs.sh`
- `run-cdet-gem-replay.sh`

and updated the existing submit/runner scripts so that the original
`submit-cdet-jobs.sh` remains CDet-only by default, while the new parallel
launcher selects `replay_gep.C` and explicitly calls
`replay_gep(..., dogems=1, ...)`.

## Critical replay distinction

`submit-cdet-jobs.sh` ultimately invokes `replay_CDet.C`. Although that macro
has a `dogems` formal argument, it does not instantiate GEM detectors or the
FTROI module. Files made by that path are not Step 5 GEM-validation files.

Use:

```bash
./submit-cdet-gem-jobs.sh 5711 100000 0 5 0
./submit-cdet-gem-jobs.sh 6077 100000 0 5 0
```

after setting the desired `OUT_DIR` and synchronizing all three repositories
on the farm.

Important legacy behavior: `100000 0 5` creates six segment jobs per run,
each processing up to 100,000 physics events. It is not one 100,000-event job
spanning all six segments. Decide explicitly whether that is the intended
sample before submission.

Correct GEM-enabled output names begin with `gep5_replayed_...`. CDet-only
outputs begin with `cdet_...`.

## Existing local validation files

The following valid 10,000-event files were present locally:

```text
/Users/brash/CDet_replay/sbs/Rootfiles/FTROI_step5/gep5_replayed_5711_stream0_2_seg0_5_firstevent1_nevent10000.root
/Users/brash/CDet_replay/sbs/Rootfiles/FTROI_step5/gep5_replayed_6077_stream0_2_seg0_5_firstevent1_nevent10000.root
```

Before analyzing any newly copied farm file, verify that the job has exited,
the ROOT file closed normally, the `T` tree exists, and its entry count is as
expected. A prior Run 6077 file was copied while still open and ROOT could
recover only `Run_Data`, not `T`.

To verify the Step 5 content, confirm that both a GEM branch and an FTROI
branch exist, for example:

```cpp
T->GetBranch("sbs.gemFT.track.ntrack")
T->GetBranch("FTROI.cdet.nhyp")
```

The farm log should also contain GEM database initialization messages.

## Diagnostic macro and plots

The target-z diagnostic macro is:

```text
scripts/cdet/Plot_CDet_FTROI_TargetZDiagnostics.C
```

The documentation contains the exact ROOT invocation and interpretation of
the twelve panels. Recent plot fixes include:

- target-z bins exactly match the 24 exported scan points;
- Panel 4 starts its y-axis at zero;
- Panel 8 shows the global Hall electron scattering angle with the database
  `earm.theta = 27 degrees` reference;
- Panels 11 and 12 show transport out-of-plane and in-plane angles;
- the misleading dashed zero-reference lines were removed from Panels 11 and
  12 because the plotted quantities are sample means, not residuals expected
  to average to zero.

## Established physics/coordinate decisions

- No-CDet-candidate events must retain the existing ECal/HCal-only fallback.
- CDet and ECal share the same rigid detector/transport coordinate frame.
- Use ECal plus both CDet layers for pair hypotheses; use ECal plus the
  available CDet layer for exclusive single-layer hypotheses.
- CDet y is not independently precise. Use half-bar-scale uncertainty, so it
  has essentially negligible fit weight relative to the assumed ECal
  uncertainty.
- Temporarily use the ECal group's stated 6 mm x and y uncertainties.
- Use the measured CDet x-resolution estimate from the ECal-trajectory
  residual distribution in the Run 5710 candidate-branch comparison.
- CDet hypotheses currently supplement the target-z scan; they do not replace
  it.

Transport axes used by the ROI code are:

- `+z`: central ECal ray;
- `+x`: vertically downward/out-of-plane;
- `+y`: horizontal/in-plane.

For a Hall target point `(0,0,z_target)`, its transport coordinates are:

```text
x_target = 0
y_target = -z_target * sin(theta_earm)
z_target_local = z_target * cos(theta_earm)
```

## Important unfinished correction

The production constrained-ray calculation still needs the full Hall-to-
transport transformation of the scanned target point. In particular, the
current code still uses global target z numerically as local detector z, and
the y fit assumes target y is zero. Do not silently implement this before
reviewing the current code and the Step 5 document, but it is the next known
physics correction after validating the topology-aware y changes.

## Farm environment

The normal farm workflow is:

```text
ssh ifarm
gocdet
```

`gocdet` sources `setup_cdet_pd.csh`. The active SBS installation should be:

```text
/work/hallc/gep/brash/CDet_replay/git-repo/sbs_devel/install
```

The obsolete `/home/brash/local/sbs-offline/bin/sbsenv.csh` source lines were
commented out in both `.cshrc` and `.login`. The old installation was not
deleted because it may still be useful for the older g4sbs/libsbsdig setup.

## Recommended first actions in the next session

1. Read this file and `CDet_STEP5_ROI_INTEGRATION.md`.
2. Inspect all three repository statuses before editing.
3. Decide whether the desired farm sample is 100,000 total events per run or
   100,000 events per segment; the current launcher implements the latter.
4. Submit or inspect the GEM-enabled Run 5711 and 6077 jobs.
5. Verify completed ROOT files contain `T`, GEM branches, and FTROI branches.
6. Copy the verified files locally and regenerate the target-z diagnostics.
7. Quantify the revised ordinary/seam-aware y-compatibility fractions.
8. Only then address the pending target-coordinate transformation.

Do not commit, tag, push, delete, or overwrite files unless the user asks.
