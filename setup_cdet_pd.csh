#!/bin/tcsh

echo  "\n"
echo " Welcome to CDET analysis framework! " 
echo  "\n"

#module purge
#module load analyzer/1.7.12-sbs6


setenv SBS_REPLAY /work/hallc/gep/brash/CDet_replay/git-repo/sbs_devel/SBS-replay
setenv DB_DIR /work/hallc/gep/brash/CDet_replay/git-repo/sbs_devel/SBS-replay/DB
setenv DATA_DIR /work/hallc/gep/brash/sbs/data
#setenv DATA_DIR /cache/hallc/gep/GEnRP/raw
setenv OUT_DIR /work/hallc/gep/brash/sbs/Rootfiles
setenv ANALYSED_DIR /work/hallc/gep/brash/sbs/Rootfiles/cdetFiles/cdet_histfiles

