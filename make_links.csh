#!/bin/tcsh
# make_links.csh – from CDet_replay/, create symlinks in run_replay_here/
# pointing to files in git-repo/sbs_devel/SBS-replay/replay/

# Hardcoded location where links will be created
set linkdir = "git-repo/sbs_devel/install/run_replay_here"

# Full path of the first link to check
set first_link = "$linkdir/replay_beam.odef"

# Early exit if the first symlink already exists
if ( -e "$first_link" ) then
    #echo "ℹ️  Symlink '$first_link' already exists. Skipping link creation."
    exit 0
endif

# Ensure the target directory exists
if ( ! -d "$linkdir" ) then
    echo "ERROR: '$linkdir' does not exist."
    exit 1
endif

# Create symlinks relative to the link directory
ln -sf ../../../../git-repo/sbs_devel/SBS-replay/replay/replay_beam.odef         "$linkdir/replay_beam.odef"
ln -sf ../../../../git-repo/sbs_devel/SBS-replay/replay/replay_ECal.odef         "$linkdir/replay_ECal.odef"
ln -sf ../../../../git-repo/sbs_devel/SBS-replay/replay/replay_CDet.odef         "$linkdir/replay_CDet.odef"
ln -sf ../../../../git-repo/sbs_devel/SBS-replay/replay/replay_hcal.odef         "$linkdir/replay_hcal.odef"
ln -sf ../../../../git-repo/sbs_devel/SBS-replay/replay/replay_FTGEM_gep.odef    "$linkdir/replay_FTGEM_gep.odef"
ln -sf ../../../../git-repo/sbs_devel/SBS-replay/replay/replay_FPPGEM_gep.odef   "$linkdir/replay_FPPGEM_gep.odef"
ln -sf ../../../../git-repo/sbs_devel/SBS-replay/replay/replay_helicity.odef     "$linkdir/replay_helicity.odef"
ln -sf ../../../../git-repo/sbs_devel/SBS-replay/replay/replay_gepheep.odef      "$linkdir/replay_gepheep.odef"
ln -sf ../../../../git-repo/sbs_devel/SBS-replay/replay/replay_sbs.odef          "$linkdir/replay_sbs.odef"

echo "Symlinks created in $linkdir"
