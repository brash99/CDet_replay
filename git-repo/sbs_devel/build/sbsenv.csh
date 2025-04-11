#!/bin/csh

#script to set up the environment for SBS-offline
setenv SBS /adaqfs/home/a-onl/brash/CDet_replay/git-repo/sbs_devel/install
#setenv SBS_REPLAY /adaqfs/home/a-onl/sbs/CDET_replay/git-repo/sbs_devel/SBS-replay

if( ! ${?PATH} ) then
    setenv PATH /adaqfs/home/a-onl/brash/CDet_replay/git-repo/sbs_devel/install/bin
else
    setenv PATH /adaqfs/home/a-onl/brash/CDet_replay/git-repo/sbs_devel/install/bin:${PATH}
endif

set OS=`uname -s`


if( "$OS" == "Darwin" ) then # Mac OS: set DYLD_LIBRARY_PATH to library directory:
    if(! ${?DYLD_LIBRARY_PATH}) then
	setenv DYLD_LIBRARY_PATH /adaqfs/home/a-onl/brash/CDet_replay/git-repo/sbs_devel/install/lib64
    else
	setenv DYLD_LIBRARY_PATH /adaqfs/home/a-onl/brash/CDet_replay/git-repo/sbs_devel/install/lib64:${DYLD_LIBRARY_PATH}
    endif
endif

# set LD_LIBRARY_PATH regardless of OS:
if( ! ${?LD_LIBRARY_PATH}) then
    setenv LD_LIBRARY_PATH /adaqfs/home/a-onl/brash/CDet_replay/git-repo/sbs_devel/install/lib64
else
    setenv LD_LIBRARY_PATH /adaqfs/home/a-onl/brash/CDet_replay/git-repo/sbs_devel/install/lib64:${LD_LIBRARY_PATH}
endif


