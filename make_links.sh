#!/usr/bin/env bash
# make_links.sh – from $JLAB_INSTALL_DIR/, create symlinks in run_replay_here/
# pointing to files in git-repo/sbs_devel/SBS-replay/replay/

set -euo pipefail

#---------------------------------------------------------------------------
# Check that JLAB_INSTALL_DIR is set
#---------------------------------------------------------------------------
if [[ -z "${JLAB_INSTALL_DIR:-}" ]]; then
    echo "ERROR: JLAB_INSTALL_DIR is not set. Please source your setup script first."
    exit 1
fi

#---------------------------------------------------------------------------
# Define directories
#---------------------------------------------------------------------------
linkdir="${JLAB_INSTALL_DIR}/run_replay_here"
replaydir="${JLAB_INSTALL_DIR}/git-repo/sbs_devel/SBS-replay/replay"

#---------------------------------------------------------------------------
# Check if first link already exists — if so, do nothing
#---------------------------------------------------------------------------
first_link="${linkdir}/replay_beam.odef"
if [[ -e "$first_link" ]]; then
    #echo "ℹ️  Symlink '$first_link' already exists. Skipping link creation."
    exit 0
fi

#---------------------------------------------------------------------------
# Ensure the link target directory exists
#---------------------------------------------------------------------------
if [[ ! -d "$linkdir" ]]; then
    echo "ERROR: '$linkdir' does not exist."
    exit 1
fi

#---------------------------------------------------------------------------
# List of .odef files to link
#---------------------------------------------------------------------------
odef_files=(
  replay_beam.odef
  replay_ECal.odef
  replay_CDet.odef
  replay_hcal.odef
  replay_FTGEM_gep.odef
  replay_FPPGEM_gep.odef
  replay_helicity.odef
  replay_gepheep.odef
  replay_sbs.odef
)

#---------------------------------------------------------------------------
# Create symlinks (absolute paths)
#---------------------------------------------------------------------------
for file in "${odef_files[@]}"; do
    ln -sf "${replaydir}/${file}" "${linkdir}/${file}"
done

echo "✅ Symlinks created in ${linkdir}"
