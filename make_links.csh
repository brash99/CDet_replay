#!/bin/tcsh
# make_links.csh – from $JLAB_INSTALL_DIR/, create symlinks in run_replay_here/
# pointing to files in git-repo/sbs_devel/SBS-replay/replay/

#---------------------------------------------------------------------------
# Check that JLAB_INSTALL_DIR is set
#---------------------------------------------------------------------------
if ( ! $?JLAB_INSTALL_DIR ) then
    echo "ERROR: JLAB_INSTALL_DIR is not set. Please source your setup script first."
    exit 1
endif

#---------------------------------------------------------------------------
# Define directories
#---------------------------------------------------------------------------
set linkdir = "${JLAB_INSTALL_DIR}/run_replay_here"
set replaydir = "${JLAB_INSTALL_DIR}/git-repo/sbs_devel/SBS-replay/replay"

#---------------------------------------------------------------------------
# Check if first link already exists — if so, do nothing
#---------------------------------------------------------------------------
set first_link = "${linkdir}/replay_beam.odef"
if ( -e "$first_link" ) then
    #echo "ℹ️  Symlink '$first_link' already exists. Skipping link creation."
    exit 0
endif

#---------------------------------------------------------------------------
# Ensure the link target directory exists
#---------------------------------------------------------------------------
if ( ! -d "$linkdir" ) then
    echo "ERROR: '$linkdir' does not exist."
    exit 1
endif

#---------------------------------------------------------------------------
# Create symlinks (absolute paths)
#---------------------------------------------------------------------------
ln -sf "${replaydir}/replay_beam.odef"        "${linkdir}/replay_beam.odef"
ln -sf "${replaydir}/replay_ECal.odef"        "${linkdir}/replay_ECal.odef"
ln -sf "${replaydir}/replay_CDet.odef"        "${linkdir}/replay_CDet.odef"
ln -sf "${replaydir}/replay_hcal.odef"        "${linkdir}/replay_hcal.odef"
ln -sf "${replaydir}/replay_FTGEM_gep.odef"   "${linkdir}/replay_FTGEM_gep.odef"
ln -sf "${replaydir}/replay_FPPGEM_gep.odef"  "${linkdir}/replay_FPPGEM_gep.odef"
ln -sf "${replaydir}/replay_helicity.odef"    "${linkdir}/replay_helicity.odef"
ln -sf "${replaydir}/replay_gepheep.odef"     "${linkdir}/replay_gepheep.odef"
ln -sf "${replaydir}/replay_sbs.odef"         "${linkdir}/replay_sbs.odef"

echo "✅ Symlinks created in $linkdir"
