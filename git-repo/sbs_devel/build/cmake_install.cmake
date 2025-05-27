# Install script for directory: /Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/brash/CDet_replay/git-repo/sbs_devel/install")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libraries" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/Users/brash/CDet_replay/git-repo/sbs_devel/build/libsbs_rdict.pcm"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/build/libsbs.rootmap"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/brash/CDet_replay/git-repo/sbs_devel/build/libsbs.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsbs.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsbs.dylib")
    execute_process(COMMAND /Users/brash/anaconda3/bin/install_name_tool
      -add_rpath "/Users/brash/CDet_replay/git-repo/sbs_devel/install/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsbs.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libsbs.dylib")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/Users/brash/CDet_replay/git-repo/sbs_devel/build/sbsenv.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/Users/brash/CDet_replay/git-repo/sbs_devel/build/sbsenv.csh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/MPDModule.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/MPDModuleVMEv4.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSBigBite.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEMTrackerBase.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEMSpectrometerTracker.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEMModule.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEMPolarimeterTracker.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSBBShower.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSBBTotalShower.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCDet.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCDet_Hit.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScintHit.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScintPMT.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSTimingHodoscope.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScintBar.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSTdcHit.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSAdcHit.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScintPartialHit.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCherenkovDetector.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCherenkov_ClusterList.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGRINCH.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScintPlane.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSEArm.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEPEArm.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSECal.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSHCal.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSDecodeF1TDCModule.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCalorimeter.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGenericDetector.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSData.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSElement.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCalorimeterCluster.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimDataDecoder.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimDecoder.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimADC.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimTDC.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSHCalLEDModule.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSManager.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimFile.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSSimEvent.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSRPBeamSideHodo.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSRPFarSideHodo.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSCHAnalyzer.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSTimingHodoscopePMT.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSTimingHodoscopeBar.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSTimingHodoscopeCluster.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSBPM.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSRaster.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSRasteredBeam.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/LHRSScalerEvtHandler.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScalerEvtHandler.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScalerHelicity.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSScalerHelicityReader.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/gmn_tree_digitized.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/genrp_tree_digitized.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/gep_tree_digitized.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/VETROC.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/VETROCcdet.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/VTPModule.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSVTP.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEPRegionOfInterestModule.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/SBSGEPHeepCoinModule.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/DebugDef.h"
    "/Users/brash/CDet_replay/git-repo/sbs_devel/SBS-offline/Helper.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/Users/brash/CDet_replay/git-repo/sbs_devel/build/sbsDict.cxx")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc" TYPE FILE FILES "/Users/brash/CDet_replay/git-repo/sbs_devel/build/rootlogon.C")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/brash/CDet_replay/git-repo/sbs_devel/install/run_replay_here/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/Users/brash/CDet_replay/git-repo/sbs_devel/install/run_replay_here" TYPE DIRECTORY FILES "")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/brash/CDet_replay/git-repo/sbs_devel/install/run_replay_here/.rootrc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/Users/brash/CDet_replay/git-repo/sbs_devel/install/run_replay_here" TYPE FILE FILES "/Users/brash/CDet_replay/git-repo/sbs_devel/build/.rootrc")
endif()

if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
  file(WRITE "/Users/brash/CDet_replay/git-repo/sbs_devel/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
