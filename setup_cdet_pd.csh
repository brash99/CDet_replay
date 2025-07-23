#!/bin/tcsh

echo  "\n"
echo " Welcome to CDET analysis framework! " 
echo  "\n"

source make_links.csh

#module purge
#module load analyzer/1.7.12-sbs6

setenv SBS_REPLAY /work/hallc/gep/brash/CDet_replay/git-repo/sbs/SBS-replay
setenv DB_DIR /work/hallc/gep/brash/CDet_replay/git-repo/sbs_devel/SBS-replay/DB
setenv DATA_DIR /cache/mss/hallc/gep/GEp/raw/
setenv ANALYSED_DIR /work/hallc/gep/brash/sbs/Rootfiles/cdetFiles/cdet_histfiles
setenv OUT_DIR /work/hallc/gep/brash/sbs/Rootfiles



