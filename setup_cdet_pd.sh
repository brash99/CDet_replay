#!/bin/bash

echo -e "\n"
echo " Welcome to CDET analysis framework! " 
echo -e "\n"

# Optional module setup
#module purge
#module load analyzer/1.7.12-sbs6

#------------------------------------------------------------
# Set base directory for CDET software if not already defined
#------------------------------------------------------------
if [ -z "$JLAB_INSTALL_DIR" ]; then
    export JLAB_INSTALL_DIR="$(pwd)"
    echo "JLAB_INSTALL_DIR not set — using default: $JLAB_INSTALL_DIR"
else
    echo "Using JLAB_INSTALL_DIR: $JLAB_INSTALL_DIR"
fi

#------------------------------------------------------------
# Export paths based on JLAB_INSTALL_DIR
#------------------------------------------------------------
export SBS_REPLAY="${JLAB_INSTALL_DIR}/git-repo/sbs_devel/SBS-replay"
export DB_DIR="${SBS_REPLAY}/DB"
export DATA_DIR="${JLAB_INSTALL_DIR}/sbs/data"
export OUT_DIR="${JLAB_INSTALL_DIR}/sbs/Rootfiles"
export ANALYSED_DIR="${JLAB_INSTALL_DIR}/sbs/Rootfiles/cdetFiles/cdet_histfiles"
