#!/bin/sh

#script to set up the environment for SBS-offline
export SBS=/Users/brash/CDet_replay/git-repo/sbs_devel/install
export SBSOFFLINE=/Users/brash/CDet_replay/git-repo/sbs_devel/install
#export SBS_REPLAY=/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-replay

if test "x$PATH" = "x" ; then
    export PATH=/Users/brash/CDet_replay/git-repo/sbs_devel/install/bin
else
    export PATH=/Users/brash/CDet_replay/git-repo/sbs_devel/install/bin:$PATH
fi

OS=`uname -s`


if [ "$OS" = "Darwin" ]
then # Mac OS: set DYLD_LIBRARY_PATH to library directory:
    if test "x$DYLD_LIBRARY_PATH" = "x"; then
	export DYLD_LIBRARY_PATH=/Users/brash/CDet_replay/git-repo/sbs_devel/install/lib
    else
	export DYLD_LIBRARY_PATH=/Users/brash/CDet_replay/git-repo/sbs_devel/install/lib:$DYLD_LIBRARY_PATH
    fi
fi

# set LD_LIBRARY_PATH regardless of OS:
if test "x$LD_LIBRARY_PATH" = "x"; then
    export LD_LIBRARY_PATH=/Users/brash/CDet_replay/git-repo/sbs_devel/install/lib
else
    export LD_LIBRARY_PATH=/Users/brash/CDet_replay/git-repo/sbs_devel/install/lib:$LD_LIBRARY_PATH
fi


