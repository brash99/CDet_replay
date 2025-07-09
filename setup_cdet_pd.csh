#!/bin/tcsh

echo  "\n"
echo " Welcome to CDET analysis framework! " 
echo  "\n"

#module purge
#module load analyzer/1.7.12-sbs6


setenv SBS_REPLAY /work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-replay
setenv DB_DIR /work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-replay/DB
setenv DATA_DIR /work/halla/sbs/btspaude/sbs/data
#setenv DATA_DIR /cache/halla/sbs/GEnRP/raw
setenv OUT_DIR /work/halla/sbs/btspaude/sbs/Rootfiles

