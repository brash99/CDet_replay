# Install script for directory: /work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libraries" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE FILE FILES
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/build/libsbs_rdict.pcm"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/build/libsbs.rootmap"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsbs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsbs.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsbs.so"
         RPATH "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/install/lib64:/u/group/halla/apps/ROOT/6.30-04/el9/RelWithDebInfo/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/build/libsbs.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsbs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsbs.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsbs.so"
         OLD_RPATH "/u/group/halla/apps/ROOT/6.30-04/el9/RelWithDebInfo/lib::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/install/lib64:/u/group/halla/apps/ROOT/6.30-04/el9/RelWithDebInfo/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libsbs.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/build/sbsenv.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/build/sbsenv.csh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/MPDModule.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/MPDModuleVMEv4.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSBigBite.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEMTrackerBase.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEMSpectrometerTracker.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEMModule.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEMPolarimeterTracker.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSBBShower.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSBBTotalShower.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCDet.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCDet_Hit.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScintHit.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScintPMT.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSTimingHodoscope.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScintBar.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSTdcHit.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSAdcHit.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScintPartialHit.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCherenkovDetector.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCherenkov_ClusterList.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGRINCH.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScintPlane.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSEArm.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEPEArm.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSECal.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSHCal.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSDecodeF1TDCModule.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCalorimeter.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGenericDetector.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSData.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSElement.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCalorimeterCluster.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimDataDecoder.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimDecoder.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimADC.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimTDC.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSHCalLEDModule.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSManager.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimFile.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimEvent.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSRPBeamSideHodo.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSRPFarSideHodo.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCHAnalyzer.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSTimingHodoscopePMT.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSTimingHodoscopeBar.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSTimingHodoscopeCluster.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSBPM.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSRaster.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSRasteredBeam.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/LHRSScalerEvtHandler.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScalerEvtHandler.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScalerHelicity.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScalerHelicityReader.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/gmn_tree_digitized.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/genrp_tree_digitized.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/gep_tree_digitized.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/VETROC.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/VETROCcdet.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/VTPModule.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSVTP.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEPRegionOfInterestModule.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEPHeepCoinModule.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/DebugDef.h"
    "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/SBS-offline/Helper.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/build/sbsDict.cxx")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc" TYPE FILE FILES "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/build/rootlogon.C")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/install/run_replay_here/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/install/run_replay_here" TYPE DIRECTORY FILES "")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/install/run_replay_here/.rootrc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/install/run_replay_here" TYPE FILE FILES "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/build/.rootrc")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/work/halla/sbs/btspaude/CDet_replay/git-repo/sbs_devel/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
