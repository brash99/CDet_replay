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

if (! $?CDET_OUTPUT_BASE) then
    setenv CDET_OUTPUT_BASE "${JLAB_INSTALL_DIR}"
endif

#------------------------------------------------------------
# Export paths based on JLAB_INSTALL_DIR
#------------------------------------------------------------
setenv SBS_REPLAY "${JLAB_INSTALL_DIR}/git-repo/sbs_devel/SBS-replay"
setenv DB_DIR "${SBS_REPLAY}/DB"
setenv DATA_DIR "${JLAB_INSTALL_DIR}/sbs/data"
setenv OUT_DIR "${CDET_OUTPUT_BASE}/sbs/Rootfiles/FTROI_step5"
setenv LOG_DIR "${CDET_OUTPUT_BASE}/sbs/logs/FTROI_step5"
setenv ANALYSED_DIR "${CDET_OUTPUT_BASE}/sbs/Rootfiles/cdetFiles/cdet_histfiles"
setenv SBS "${JLAB_INSTALL_DIR}/git-repo/sbs_devel/install"

echo "JLAB installation directory: $JLAB_INSTALL_DIR"
echo "SBS-replay directory:        $SBS_REPLAY"
echo "Database directory:          $DB_DIR"
echo "Raw-data directory:          $DATA_DIR"
echo "ROOT output directory:       $OUT_DIR"
echo "Analyzer log directory:      $LOG_DIR"
echo "SBS-offline installation:    $SBS"
echo "Analyzer executable:         `which analyzer`"
