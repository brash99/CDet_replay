#!/bin/csh

#script to set up the environment for SBS-offline
setenv SBS /Users/brash/CDet_replay/git-repo/sbs_devel/install
#setenv SBS_REPLAY /Users/brash/CDet_replay/git-repo/sbs_devel/SBS-replay

if( ! ${?PATH} ) then
    setenv PATH /Users/brash/CDet_replay/git-repo/sbs_devel/install/bin
else
    setenv PATH /Users/brash/CDet_replay/git-repo/sbs_devel/install/bin:${PATH}
endif

set OS=`uname -s`


if( "$OS" == "Darwin" ) then # Mac OS: set DYLD_LIBRARY_PATH to library directory:
    if(! ${?DYLD_LIBRARY_PATH}) then
	setenv DYLD_LIBRARY_PATH /Users/brash/CDet_replay/git-repo/sbs_devel/install/lib
    else
	setenv DYLD_LIBRARY_PATH /Users/brash/CDet_replay/git-repo/sbs_devel/install/lib:${DYLD_LIBRARY_PATH}
    endif
endif

# set LD_LIBRARY_PATH regardless of OS:
if( ! ${?LD_LIBRARY_PATH}) then
    setenv LD_LIBRARY_PATH /Users/brash/CDet_replay/git-repo/sbs_devel/install/lib
else
    setenv LD_LIBRARY_PATH /Users/brash/CDet_replay/git-repo/sbs_devel/install/lib:${LD_LIBRARY_PATH}
endif


