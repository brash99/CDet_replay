#!/bin/tcsh

echo ""
echo " Welcome to CDET analysis framework! "
echo ""

source make_links.csh

# Optional module setup (uncomment if needed)
#module purge
#module load analyzer/1.7.12-sbs6

#------------------------------------------------------------
# Set base directory for CDET software if not already defined
#------------------------------------------------------------
if (! $?JLAB_INSTALL_DIR) then
    setenv JLAB_INSTALL_DIR "`pwd`"
    echo "JLAB_INSTALL_DIR not set — using default: $JLAB_INSTALL_DIR"
else
    echo "Using JLAB_INSTALL_DIR: $JLAB_INSTALL_DIR"
endif

#------------------------------------------------------------
# Export paths based on JLAB_INSTALL_DIR
#------------------------------------------------------------
setenv SBS_REPLAY "${JLAB_INSTALL_DIR}/git-repo/sbs_devel/SBS-replay"
setenv DB_DIR "${SBS_REPLAY}/DB"
setenv DATA_DIR "${JLAB_INSTALL_DIR}/sbs/data"
setenv OUT_DIR "${JLAB_INSTALL_DIR}/sbs/Rootfiles"
setenv ANALYSED_DIR "${JLAB_INSTALL_DIR}/sbs/Rootfiles/cdetFiles/cdet_histfiles"
