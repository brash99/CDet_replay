// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME sbsDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "MPDModule.h"
#include "MPDModuleVMEv4.h"
#include "SBSBigBite.h"
#include "SBSGEMTrackerBase.h"
#include "SBSGEMSpectrometerTracker.h"
#include "SBSGEMModule.h"
#include "SBSGEMPolarimeterTracker.h"
#include "SBSBBShower.h"
#include "SBSBBTotalShower.h"
#include "SBSCDet.h"
#include "SBSCDet_Hit.h"
#include "SBSScintHit.h"
#include "SBSScintPMT.h"
#include "SBSTimingHodoscope.h"
#include "SBSScintBar.h"
#include "SBSTdcHit.h"
#include "SBSAdcHit.h"
#include "SBSScintPartialHit.h"
#include "SBSCherenkovDetector.h"
#include "SBSCherenkov_ClusterList.h"
#include "SBSGRINCH.h"
#include "SBSScintPlane.h"
#include "SBSEArm.h"
#include "SBSGEPEArm.h"
#include "SBSECal.h"
#include "SBSHCal.h"
#include "SBSDecodeF1TDCModule.h"
#include "SBSCalorimeter.h"
#include "SBSGenericDetector.h"
#include "SBSData.h"
#include "SBSElement.h"
#include "SBSCalorimeterCluster.h"
#include "SBSSimDataDecoder.h"
#include "SBSSimDecoder.h"
#include "SBSSimADC.h"
#include "SBSSimTDC.h"
#include "SBSHCalLEDModule.h"
#include "SBSManager.h"
#include "SBSSimFile.h"
#include "SBSSimEvent.h"
#include "SBSRPBeamSideHodo.h"
#include "SBSRPFarSideHodo.h"
#include "SBSCHAnalyzer.h"
#include "SBSTimingHodoscopePMT.h"
#include "SBSTimingHodoscopeBar.h"
#include "SBSTimingHodoscopeCluster.h"
#include "SBSBPM.h"
#include "SBSRaster.h"
#include "SBSRasteredBeam.h"
#include "LHRSScalerEvtHandler.h"
#include "SBSScalerEvtHandler.h"
#include "SBSScalerHelicity.h"
#include "SBSScalerHelicityReader.h"
#include "gmn_tree_digitized.h"
#include "genrp_tree_digitized.h"
#include "gep_tree_digitized.h"
#include "VETROC.h"
#include "VETROCcdet.h"
#include "VTPModule.h"
#include "SBSVTP.h"
#include "SBSGEPRegionOfInterestModule.h"
#include "DebugDef.h"
#include "Helper.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace Decoder {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *Decoder_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("Decoder", 0 /*version*/, "Decoder.h", 6,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &Decoder_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *Decoder_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace SBSData {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *SBSData_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("SBSData", 0 /*version*/, "SBSData.h", 7,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &SBSData_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *SBSData_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_DecodercLcLMPDModule(void *p = nullptr);
   static void *newArray_DecodercLcLMPDModule(Long_t size, void *p);
   static void delete_DecodercLcLMPDModule(void *p);
   static void deleteArray_DecodercLcLMPDModule(void *p);
   static void destruct_DecodercLcLMPDModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::MPDModule*)
   {
      ::Decoder::MPDModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::MPDModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::MPDModule", ::Decoder::MPDModule::Class_Version(), "MPDModule.h", 35,
                  typeid(::Decoder::MPDModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::MPDModule::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::MPDModule) );
      instance.SetNew(&new_DecodercLcLMPDModule);
      instance.SetNewArray(&newArray_DecodercLcLMPDModule);
      instance.SetDelete(&delete_DecodercLcLMPDModule);
      instance.SetDeleteArray(&deleteArray_DecodercLcLMPDModule);
      instance.SetDestructor(&destruct_DecodercLcLMPDModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::MPDModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::MPDModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::MPDModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecodercLcLMPDModuleVMEv4(void *p = nullptr);
   static void *newArray_DecodercLcLMPDModuleVMEv4(Long_t size, void *p);
   static void delete_DecodercLcLMPDModuleVMEv4(void *p);
   static void deleteArray_DecodercLcLMPDModuleVMEv4(void *p);
   static void destruct_DecodercLcLMPDModuleVMEv4(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::MPDModuleVMEv4*)
   {
      ::Decoder::MPDModuleVMEv4 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::MPDModuleVMEv4 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::MPDModuleVMEv4", ::Decoder::MPDModuleVMEv4::Class_Version(), "MPDModuleVMEv4.h", 35,
                  typeid(::Decoder::MPDModuleVMEv4), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::MPDModuleVMEv4::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::MPDModuleVMEv4) );
      instance.SetNew(&new_DecodercLcLMPDModuleVMEv4);
      instance.SetNewArray(&newArray_DecodercLcLMPDModuleVMEv4);
      instance.SetDelete(&delete_DecodercLcLMPDModuleVMEv4);
      instance.SetDeleteArray(&deleteArray_DecodercLcLMPDModuleVMEv4);
      instance.SetDestructor(&destruct_DecodercLcLMPDModuleVMEv4);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::MPDModuleVMEv4*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::MPDModuleVMEv4*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::MPDModuleVMEv4*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSBigBite(void *p);
   static void deleteArray_SBSBigBite(void *p);
   static void destruct_SBSBigBite(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSBigBite*)
   {
      ::SBSBigBite *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSBigBite >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSBigBite", ::SBSBigBite::Class_Version(), "SBSBigBite.h", 10,
                  typeid(::SBSBigBite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSBigBite::Dictionary, isa_proxy, 4,
                  sizeof(::SBSBigBite) );
      instance.SetDelete(&delete_SBSBigBite);
      instance.SetDeleteArray(&deleteArray_SBSBigBite);
      instance.SetDestructor(&destruct_SBSBigBite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSBigBite*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSBigBite*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSBigBite*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSGEMSpectrometerTracker(void *p);
   static void deleteArray_SBSGEMSpectrometerTracker(void *p);
   static void destruct_SBSGEMSpectrometerTracker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSGEMSpectrometerTracker*)
   {
      ::SBSGEMSpectrometerTracker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSGEMSpectrometerTracker >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSGEMSpectrometerTracker", ::SBSGEMSpectrometerTracker::Class_Version(), "SBSGEMSpectrometerTracker.h", 16,
                  typeid(::SBSGEMSpectrometerTracker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSGEMSpectrometerTracker::Dictionary, isa_proxy, 4,
                  sizeof(::SBSGEMSpectrometerTracker) );
      instance.SetDelete(&delete_SBSGEMSpectrometerTracker);
      instance.SetDeleteArray(&deleteArray_SBSGEMSpectrometerTracker);
      instance.SetDestructor(&destruct_SBSGEMSpectrometerTracker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSGEMSpectrometerTracker*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSGEMSpectrometerTracker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSGEMSpectrometerTracker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSGEMModule(void *p);
   static void deleteArray_SBSGEMModule(void *p);
   static void destruct_SBSGEMModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSGEMModule*)
   {
      ::SBSGEMModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSGEMModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSGEMModule", ::SBSGEMModule::Class_Version(), "SBSGEMModule.h", 147,
                  typeid(::SBSGEMModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSGEMModule::Dictionary, isa_proxy, 4,
                  sizeof(::SBSGEMModule) );
      instance.SetDelete(&delete_SBSGEMModule);
      instance.SetDeleteArray(&deleteArray_SBSGEMModule);
      instance.SetDestructor(&destruct_SBSGEMModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSGEMModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSGEMModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSGEMModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSGEMPolarimeterTracker(void *p);
   static void deleteArray_SBSGEMPolarimeterTracker(void *p);
   static void destruct_SBSGEMPolarimeterTracker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSGEMPolarimeterTracker*)
   {
      ::SBSGEMPolarimeterTracker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSGEMPolarimeterTracker >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSGEMPolarimeterTracker", ::SBSGEMPolarimeterTracker::Class_Version(), "SBSGEMPolarimeterTracker.h", 16,
                  typeid(::SBSGEMPolarimeterTracker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSGEMPolarimeterTracker::Dictionary, isa_proxy, 4,
                  sizeof(::SBSGEMPolarimeterTracker) );
      instance.SetDelete(&delete_SBSGEMPolarimeterTracker);
      instance.SetDeleteArray(&deleteArray_SBSGEMPolarimeterTracker);
      instance.SetDestructor(&destruct_SBSGEMPolarimeterTracker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSGEMPolarimeterTracker*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSGEMPolarimeterTracker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSGEMPolarimeterTracker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *SBSDatacLcLADC_Dictionary();
   static void SBSDatacLcLADC_TClassManip(TClass*);
   static void *new_SBSDatacLcLADC(void *p = nullptr);
   static void *newArray_SBSDatacLcLADC(Long_t size, void *p);
   static void delete_SBSDatacLcLADC(void *p);
   static void deleteArray_SBSDatacLcLADC(void *p);
   static void destruct_SBSDatacLcLADC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSData::ADC*)
   {
      ::SBSData::ADC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SBSData::ADC));
      static ::ROOT::TGenericClassInfo 
         instance("SBSData::ADC", "SBSData.h", 88,
                  typeid(::SBSData::ADC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SBSDatacLcLADC_Dictionary, isa_proxy, 4,
                  sizeof(::SBSData::ADC) );
      instance.SetNew(&new_SBSDatacLcLADC);
      instance.SetNewArray(&newArray_SBSDatacLcLADC);
      instance.SetDelete(&delete_SBSDatacLcLADC);
      instance.SetDeleteArray(&deleteArray_SBSDatacLcLADC);
      instance.SetDestructor(&destruct_SBSDatacLcLADC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSData::ADC*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSData::ADC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSData::ADC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SBSDatacLcLADC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::SBSData::ADC*>(nullptr))->GetClass();
      SBSDatacLcLADC_TClassManip(theClass);
   return theClass;
   }

   static void SBSDatacLcLADC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *SBSDatacLcLTDC_Dictionary();
   static void SBSDatacLcLTDC_TClassManip(TClass*);
   static void *new_SBSDatacLcLTDC(void *p = nullptr);
   static void *newArray_SBSDatacLcLTDC(Long_t size, void *p);
   static void delete_SBSDatacLcLTDC(void *p);
   static void deleteArray_SBSDatacLcLTDC(void *p);
   static void destruct_SBSDatacLcLTDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSData::TDC*)
   {
      ::SBSData::TDC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SBSData::TDC));
      static ::ROOT::TGenericClassInfo 
         instance("SBSData::TDC", "SBSData.h", 151,
                  typeid(::SBSData::TDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SBSDatacLcLTDC_Dictionary, isa_proxy, 4,
                  sizeof(::SBSData::TDC) );
      instance.SetNew(&new_SBSDatacLcLTDC);
      instance.SetNewArray(&newArray_SBSDatacLcLTDC);
      instance.SetDelete(&delete_SBSDatacLcLTDC);
      instance.SetDeleteArray(&deleteArray_SBSDatacLcLTDC);
      instance.SetDestructor(&destruct_SBSDatacLcLTDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSData::TDC*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSData::TDC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSData::TDC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SBSDatacLcLTDC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::SBSData::TDC*>(nullptr))->GetClass();
      SBSDatacLcLTDC_TClassManip(theClass);
   return theClass;
   }

   static void SBSDatacLcLTDC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *SBSDatacLcLWaveform_Dictionary();
   static void SBSDatacLcLWaveform_TClassManip(TClass*);
   static void *new_SBSDatacLcLWaveform(void *p = nullptr);
   static void *newArray_SBSDatacLcLWaveform(Long_t size, void *p);
   static void delete_SBSDatacLcLWaveform(void *p);
   static void deleteArray_SBSDatacLcLWaveform(void *p);
   static void destruct_SBSDatacLcLWaveform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSData::Waveform*)
   {
      ::SBSData::Waveform *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SBSData::Waveform));
      static ::ROOT::TGenericClassInfo 
         instance("SBSData::Waveform", "SBSData.h", 198,
                  typeid(::SBSData::Waveform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SBSDatacLcLWaveform_Dictionary, isa_proxy, 4,
                  sizeof(::SBSData::Waveform) );
      instance.SetNew(&new_SBSDatacLcLWaveform);
      instance.SetNewArray(&newArray_SBSDatacLcLWaveform);
      instance.SetDelete(&delete_SBSDatacLcLWaveform);
      instance.SetDeleteArray(&deleteArray_SBSDatacLcLWaveform);
      instance.SetDestructor(&destruct_SBSDatacLcLWaveform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSData::Waveform*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSData::Waveform*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSData::Waveform*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SBSDatacLcLWaveform_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::SBSData::Waveform*>(nullptr))->GetClass();
      SBSDatacLcLWaveform_TClassManip(theClass);
   return theClass;
   }

   static void SBSDatacLcLWaveform_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSElement(void *p = nullptr);
   static void *newArray_SBSElement(Long_t size, void *p);
   static void delete_SBSElement(void *p);
   static void deleteArray_SBSElement(void *p);
   static void destruct_SBSElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSElement*)
   {
      ::SBSElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSElement", ::SBSElement::Class_Version(), "SBSElement.h", 16,
                  typeid(::SBSElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSElement::Dictionary, isa_proxy, 4,
                  sizeof(::SBSElement) );
      instance.SetNew(&new_SBSElement);
      instance.SetNewArray(&newArray_SBSElement);
      instance.SetDelete(&delete_SBSElement);
      instance.SetDeleteArray(&deleteArray_SBSElement);
      instance.SetDestructor(&destruct_SBSElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSGenericDetector(void *p);
   static void deleteArray_SBSGenericDetector(void *p);
   static void destruct_SBSGenericDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSGenericDetector*)
   {
      ::SBSGenericDetector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSGenericDetector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSGenericDetector", ::SBSGenericDetector::Class_Version(), "SBSGenericDetector.h", 127,
                  typeid(::SBSGenericDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSGenericDetector::Dictionary, isa_proxy, 4,
                  sizeof(::SBSGenericDetector) );
      instance.SetDelete(&delete_SBSGenericDetector);
      instance.SetDeleteArray(&deleteArray_SBSGenericDetector);
      instance.SetDestructor(&destruct_SBSGenericDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSGenericDetector*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSGenericDetector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSGenericDetector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSCalorimeterCluster(void *p = nullptr);
   static void *newArray_SBSCalorimeterCluster(Long_t size, void *p);
   static void delete_SBSCalorimeterCluster(void *p);
   static void deleteArray_SBSCalorimeterCluster(void *p);
   static void destruct_SBSCalorimeterCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSCalorimeterCluster*)
   {
      ::SBSCalorimeterCluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSCalorimeterCluster >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSCalorimeterCluster", ::SBSCalorimeterCluster::Class_Version(), "SBSCalorimeterCluster.h", 13,
                  typeid(::SBSCalorimeterCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSCalorimeterCluster::Dictionary, isa_proxy, 4,
                  sizeof(::SBSCalorimeterCluster) );
      instance.SetNew(&new_SBSCalorimeterCluster);
      instance.SetNewArray(&newArray_SBSCalorimeterCluster);
      instance.SetDelete(&delete_SBSCalorimeterCluster);
      instance.SetDeleteArray(&deleteArray_SBSCalorimeterCluster);
      instance.SetDestructor(&destruct_SBSCalorimeterCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSCalorimeterCluster*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSCalorimeterCluster*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSCalorimeterCluster*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSCalorimeter(void *p);
   static void deleteArray_SBSCalorimeter(void *p);
   static void destruct_SBSCalorimeter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSCalorimeter*)
   {
      ::SBSCalorimeter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSCalorimeter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSCalorimeter", ::SBSCalorimeter::Class_Version(), "SBSCalorimeter.h", 94,
                  typeid(::SBSCalorimeter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSCalorimeter::Dictionary, isa_proxy, 4,
                  sizeof(::SBSCalorimeter) );
      instance.SetDelete(&delete_SBSCalorimeter);
      instance.SetDeleteArray(&deleteArray_SBSCalorimeter);
      instance.SetDestructor(&destruct_SBSCalorimeter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSCalorimeter*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSCalorimeter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSCalorimeter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSBBShower(void *p);
   static void deleteArray_SBSBBShower(void *p);
   static void destruct_SBSBBShower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSBBShower*)
   {
      ::SBSBBShower *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSBBShower >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSBBShower", ::SBSBBShower::Class_Version(), "SBSBBShower.h", 14,
                  typeid(::SBSBBShower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSBBShower::Dictionary, isa_proxy, 4,
                  sizeof(::SBSBBShower) );
      instance.SetDelete(&delete_SBSBBShower);
      instance.SetDeleteArray(&deleteArray_SBSBBShower);
      instance.SetDestructor(&destruct_SBSBBShower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSBBShower*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSBBShower*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSBBShower*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSBBTotalShower(void *p);
   static void deleteArray_SBSBBTotalShower(void *p);
   static void destruct_SBSBBTotalShower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSBBTotalShower*)
   {
      ::SBSBBTotalShower *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSBBTotalShower >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSBBTotalShower", ::SBSBBTotalShower::Class_Version(), "SBSBBTotalShower.h", 35,
                  typeid(::SBSBBTotalShower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSBBTotalShower::Dictionary, isa_proxy, 4,
                  sizeof(::SBSBBTotalShower) );
      instance.SetDelete(&delete_SBSBBTotalShower);
      instance.SetDeleteArray(&deleteArray_SBSBBTotalShower);
      instance.SetDestructor(&destruct_SBSBBTotalShower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSBBTotalShower*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSBBTotalShower*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSBBTotalShower*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSCDet_Hit(void *p = nullptr);
   static void *newArray_SBSCDet_Hit(Long_t size, void *p);
   static void delete_SBSCDet_Hit(void *p);
   static void deleteArray_SBSCDet_Hit(void *p);
   static void destruct_SBSCDet_Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSCDet_Hit*)
   {
      ::SBSCDet_Hit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSCDet_Hit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSCDet_Hit", ::SBSCDet_Hit::Class_Version(), "SBSCDet_Hit.h", 24,
                  typeid(::SBSCDet_Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSCDet_Hit::Dictionary, isa_proxy, 4,
                  sizeof(::SBSCDet_Hit) );
      instance.SetNew(&new_SBSCDet_Hit);
      instance.SetNewArray(&newArray_SBSCDet_Hit);
      instance.SetDelete(&delete_SBSCDet_Hit);
      instance.SetDeleteArray(&deleteArray_SBSCDet_Hit);
      instance.SetDestructor(&destruct_SBSCDet_Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSCDet_Hit*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSCDet_Hit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSCDet_Hit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSCDet(void *p);
   static void deleteArray_SBSCDet(void *p);
   static void destruct_SBSCDet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSCDet*)
   {
      ::SBSCDet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSCDet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSCDet", ::SBSCDet::Class_Version(), "SBSCDet.h", 22,
                  typeid(::SBSCDet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSCDet::Dictionary, isa_proxy, 4,
                  sizeof(::SBSCDet) );
      instance.SetDelete(&delete_SBSCDet);
      instance.SetDeleteArray(&deleteArray_SBSCDet);
      instance.SetDestructor(&destruct_SBSCDet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSCDet*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSCDet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSCDet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSScintPMT(void *p = nullptr);
   static void *newArray_SBSScintPMT(Long_t size, void *p);
   static void delete_SBSScintPMT(void *p);
   static void deleteArray_SBSScintPMT(void *p);
   static void destruct_SBSScintPMT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSScintPMT*)
   {
      ::SBSScintPMT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSScintPMT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSScintPMT", ::SBSScintPMT::Class_Version(), "SBSScintPMT.h", 21,
                  typeid(::SBSScintPMT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSScintPMT::Dictionary, isa_proxy, 4,
                  sizeof(::SBSScintPMT) );
      instance.SetNew(&new_SBSScintPMT);
      instance.SetNewArray(&newArray_SBSScintPMT);
      instance.SetDelete(&delete_SBSScintPMT);
      instance.SetDeleteArray(&deleteArray_SBSScintPMT);
      instance.SetDestructor(&destruct_SBSScintPMT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSScintPMT*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSScintPMT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSScintPMT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSScintBar(void *p = nullptr);
   static void *newArray_SBSScintBar(Long_t size, void *p);
   static void delete_SBSScintBar(void *p);
   static void deleteArray_SBSScintBar(void *p);
   static void destruct_SBSScintBar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSScintBar*)
   {
      ::SBSScintBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSScintBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSScintBar", ::SBSScintBar::Class_Version(), "SBSScintBar.h", 19,
                  typeid(::SBSScintBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSScintBar::Dictionary, isa_proxy, 4,
                  sizeof(::SBSScintBar) );
      instance.SetNew(&new_SBSScintBar);
      instance.SetNewArray(&newArray_SBSScintBar);
      instance.SetDelete(&delete_SBSScintBar);
      instance.SetDeleteArray(&deleteArray_SBSScintBar);
      instance.SetDestructor(&destruct_SBSScintBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSScintBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSScintBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSScintBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSScintHit(void *p = nullptr);
   static void *newArray_SBSScintHit(Long_t size, void *p);
   static void delete_SBSScintHit(void *p);
   static void deleteArray_SBSScintHit(void *p);
   static void destruct_SBSScintHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSScintHit*)
   {
      ::SBSScintHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSScintHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSScintHit", ::SBSScintHit::Class_Version(), "SBSScintHit.h", 15,
                  typeid(::SBSScintHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSScintHit::Dictionary, isa_proxy, 4,
                  sizeof(::SBSScintHit) );
      instance.SetNew(&new_SBSScintHit);
      instance.SetNewArray(&newArray_SBSScintHit);
      instance.SetDelete(&delete_SBSScintHit);
      instance.SetDeleteArray(&deleteArray_SBSScintHit);
      instance.SetDestructor(&destruct_SBSScintHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSScintHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSScintHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSScintHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSTimingHodoscopePMT(void *p);
   static void deleteArray_SBSTimingHodoscopePMT(void *p);
   static void destruct_SBSTimingHodoscopePMT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSTimingHodoscopePMT*)
   {
      ::SBSTimingHodoscopePMT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSTimingHodoscopePMT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSTimingHodoscopePMT", ::SBSTimingHodoscopePMT::Class_Version(), "SBSTimingHodoscopePMT.h", 18,
                  typeid(::SBSTimingHodoscopePMT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSTimingHodoscopePMT::Dictionary, isa_proxy, 4,
                  sizeof(::SBSTimingHodoscopePMT) );
      instance.SetDelete(&delete_SBSTimingHodoscopePMT);
      instance.SetDeleteArray(&deleteArray_SBSTimingHodoscopePMT);
      instance.SetDestructor(&destruct_SBSTimingHodoscopePMT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSTimingHodoscopePMT*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSTimingHodoscopePMT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSTimingHodoscopePMT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSTimingHodoscopeBar(void *p);
   static void deleteArray_SBSTimingHodoscopeBar(void *p);
   static void destruct_SBSTimingHodoscopeBar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSTimingHodoscopeBar*)
   {
      ::SBSTimingHodoscopeBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSTimingHodoscopeBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSTimingHodoscopeBar", ::SBSTimingHodoscopeBar::Class_Version(), "SBSTimingHodoscopeBar.h", 25,
                  typeid(::SBSTimingHodoscopeBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSTimingHodoscopeBar::Dictionary, isa_proxy, 4,
                  sizeof(::SBSTimingHodoscopeBar) );
      instance.SetDelete(&delete_SBSTimingHodoscopeBar);
      instance.SetDeleteArray(&deleteArray_SBSTimingHodoscopeBar);
      instance.SetDestructor(&destruct_SBSTimingHodoscopeBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSTimingHodoscopeBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSTimingHodoscopeBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSTimingHodoscopeBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSTimingHodoscopeCluster(void *p = nullptr);
   static void *newArray_SBSTimingHodoscopeCluster(Long_t size, void *p);
   static void delete_SBSTimingHodoscopeCluster(void *p);
   static void deleteArray_SBSTimingHodoscopeCluster(void *p);
   static void destruct_SBSTimingHodoscopeCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSTimingHodoscopeCluster*)
   {
      ::SBSTimingHodoscopeCluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSTimingHodoscopeCluster >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSTimingHodoscopeCluster", ::SBSTimingHodoscopeCluster::Class_Version(), "SBSTimingHodoscopeCluster.h", 13,
                  typeid(::SBSTimingHodoscopeCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSTimingHodoscopeCluster::Dictionary, isa_proxy, 4,
                  sizeof(::SBSTimingHodoscopeCluster) );
      instance.SetNew(&new_SBSTimingHodoscopeCluster);
      instance.SetNewArray(&newArray_SBSTimingHodoscopeCluster);
      instance.SetDelete(&delete_SBSTimingHodoscopeCluster);
      instance.SetDeleteArray(&deleteArray_SBSTimingHodoscopeCluster);
      instance.SetDestructor(&destruct_SBSTimingHodoscopeCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSTimingHodoscopeCluster*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSTimingHodoscopeCluster*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSTimingHodoscopeCluster*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSTimingHodoscope(void *p);
   static void deleteArray_SBSTimingHodoscope(void *p);
   static void destruct_SBSTimingHodoscope(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSTimingHodoscope*)
   {
      ::SBSTimingHodoscope *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSTimingHodoscope >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSTimingHodoscope", ::SBSTimingHodoscope::Class_Version(), "SBSTimingHodoscope.h", 37,
                  typeid(::SBSTimingHodoscope), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSTimingHodoscope::Dictionary, isa_proxy, 4,
                  sizeof(::SBSTimingHodoscope) );
      instance.SetDelete(&delete_SBSTimingHodoscope);
      instance.SetDeleteArray(&deleteArray_SBSTimingHodoscope);
      instance.SetDestructor(&destruct_SBSTimingHodoscope);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSTimingHodoscope*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSTimingHodoscope*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSTimingHodoscope*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSTdcHit(void *p = nullptr);
   static void *newArray_SBSTdcHit(Long_t size, void *p);
   static void delete_SBSTdcHit(void *p);
   static void deleteArray_SBSTdcHit(void *p);
   static void destruct_SBSTdcHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSTdcHit*)
   {
      ::SBSTdcHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSTdcHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSTdcHit", ::SBSTdcHit::Class_Version(), "SBSTdcHit.h", 15,
                  typeid(::SBSTdcHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSTdcHit::Dictionary, isa_proxy, 4,
                  sizeof(::SBSTdcHit) );
      instance.SetNew(&new_SBSTdcHit);
      instance.SetNewArray(&newArray_SBSTdcHit);
      instance.SetDelete(&delete_SBSTdcHit);
      instance.SetDeleteArray(&deleteArray_SBSTdcHit);
      instance.SetDestructor(&destruct_SBSTdcHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSTdcHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSTdcHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSTdcHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSAdcHit(void *p = nullptr);
   static void *newArray_SBSAdcHit(Long_t size, void *p);
   static void delete_SBSAdcHit(void *p);
   static void deleteArray_SBSAdcHit(void *p);
   static void destruct_SBSAdcHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSAdcHit*)
   {
      ::SBSAdcHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSAdcHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSAdcHit", ::SBSAdcHit::Class_Version(), "SBSAdcHit.h", 14,
                  typeid(::SBSAdcHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSAdcHit::Dictionary, isa_proxy, 4,
                  sizeof(::SBSAdcHit) );
      instance.SetNew(&new_SBSAdcHit);
      instance.SetNewArray(&newArray_SBSAdcHit);
      instance.SetDelete(&delete_SBSAdcHit);
      instance.SetDeleteArray(&deleteArray_SBSAdcHit);
      instance.SetDestructor(&destruct_SBSAdcHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSAdcHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSAdcHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSAdcHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSScintPartialHit(void *p = nullptr);
   static void *newArray_SBSScintPartialHit(Long_t size, void *p);
   static void delete_SBSScintPartialHit(void *p);
   static void deleteArray_SBSScintPartialHit(void *p);
   static void destruct_SBSScintPartialHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSScintPartialHit*)
   {
      ::SBSScintPartialHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSScintPartialHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSScintPartialHit", ::SBSScintPartialHit::Class_Version(), "SBSScintPartialHit.h", 15,
                  typeid(::SBSScintPartialHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSScintPartialHit::Dictionary, isa_proxy, 4,
                  sizeof(::SBSScintPartialHit) );
      instance.SetNew(&new_SBSScintPartialHit);
      instance.SetNewArray(&newArray_SBSScintPartialHit);
      instance.SetDelete(&delete_SBSScintPartialHit);
      instance.SetDeleteArray(&deleteArray_SBSScintPartialHit);
      instance.SetDestructor(&destruct_SBSScintPartialHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSScintPartialHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSScintPartialHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSScintPartialHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSCherenkov_Hit(void *p = nullptr);
   static void *newArray_SBSCherenkov_Hit(Long_t size, void *p);
   static void delete_SBSCherenkov_Hit(void *p);
   static void deleteArray_SBSCherenkov_Hit(void *p);
   static void destruct_SBSCherenkov_Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSCherenkov_Hit*)
   {
      ::SBSCherenkov_Hit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSCherenkov_Hit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSCherenkov_Hit", ::SBSCherenkov_Hit::Class_Version(), "SBSCherenkov_ClusterList.h", 24,
                  typeid(::SBSCherenkov_Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSCherenkov_Hit::Dictionary, isa_proxy, 4,
                  sizeof(::SBSCherenkov_Hit) );
      instance.SetNew(&new_SBSCherenkov_Hit);
      instance.SetNewArray(&newArray_SBSCherenkov_Hit);
      instance.SetDelete(&delete_SBSCherenkov_Hit);
      instance.SetDeleteArray(&deleteArray_SBSCherenkov_Hit);
      instance.SetDestructor(&destruct_SBSCherenkov_Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSCherenkov_Hit*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSCherenkov_Hit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSCherenkov_Hit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSCherenkov_Cluster(void *p = nullptr);
   static void *newArray_SBSCherenkov_Cluster(Long_t size, void *p);
   static void delete_SBSCherenkov_Cluster(void *p);
   static void deleteArray_SBSCherenkov_Cluster(void *p);
   static void destruct_SBSCherenkov_Cluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSCherenkov_Cluster*)
   {
      ::SBSCherenkov_Cluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSCherenkov_Cluster >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSCherenkov_Cluster", ::SBSCherenkov_Cluster::Class_Version(), "SBSCherenkov_ClusterList.h", 106,
                  typeid(::SBSCherenkov_Cluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSCherenkov_Cluster::Dictionary, isa_proxy, 4,
                  sizeof(::SBSCherenkov_Cluster) );
      instance.SetNew(&new_SBSCherenkov_Cluster);
      instance.SetNewArray(&newArray_SBSCherenkov_Cluster);
      instance.SetDelete(&delete_SBSCherenkov_Cluster);
      instance.SetDeleteArray(&deleteArray_SBSCherenkov_Cluster);
      instance.SetDestructor(&destruct_SBSCherenkov_Cluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSCherenkov_Cluster*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSCherenkov_Cluster*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSCherenkov_Cluster*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSCherenkovDetector(void *p);
   static void deleteArray_SBSCherenkovDetector(void *p);
   static void destruct_SBSCherenkovDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSCherenkovDetector*)
   {
      ::SBSCherenkovDetector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSCherenkovDetector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSCherenkovDetector", ::SBSCherenkovDetector::Class_Version(), "SBSCherenkovDetector.h", 23,
                  typeid(::SBSCherenkovDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSCherenkovDetector::Dictionary, isa_proxy, 4,
                  sizeof(::SBSCherenkovDetector) );
      instance.SetDelete(&delete_SBSCherenkovDetector);
      instance.SetDeleteArray(&deleteArray_SBSCherenkovDetector);
      instance.SetDestructor(&destruct_SBSCherenkovDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSCherenkovDetector*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSCherenkovDetector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSCherenkovDetector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSGRINCH(void *p);
   static void deleteArray_SBSGRINCH(void *p);
   static void destruct_SBSGRINCH(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSGRINCH*)
   {
      ::SBSGRINCH *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSGRINCH >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSGRINCH", ::SBSGRINCH::Class_Version(), "SBSGRINCH.h", 24,
                  typeid(::SBSGRINCH), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSGRINCH::Dictionary, isa_proxy, 4,
                  sizeof(::SBSGRINCH) );
      instance.SetDelete(&delete_SBSGRINCH);
      instance.SetDeleteArray(&deleteArray_SBSGRINCH);
      instance.SetDestructor(&destruct_SBSGRINCH);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSGRINCH*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSGRINCH*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSGRINCH*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSScintPlane(void *p = nullptr);
   static void *newArray_SBSScintPlane(Long_t size, void *p);
   static void delete_SBSScintPlane(void *p);
   static void deleteArray_SBSScintPlane(void *p);
   static void destruct_SBSScintPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSScintPlane*)
   {
      ::SBSScintPlane *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSScintPlane >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSScintPlane", ::SBSScintPlane::Class_Version(), "SBSScintPlane.h", 74,
                  typeid(::SBSScintPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSScintPlane::Dictionary, isa_proxy, 4,
                  sizeof(::SBSScintPlane) );
      instance.SetNew(&new_SBSScintPlane);
      instance.SetNewArray(&newArray_SBSScintPlane);
      instance.SetDelete(&delete_SBSScintPlane);
      instance.SetDeleteArray(&deleteArray_SBSScintPlane);
      instance.SetDestructor(&destruct_SBSScintPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSScintPlane*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSScintPlane*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSScintPlane*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSEArm(void *p);
   static void deleteArray_SBSEArm(void *p);
   static void destruct_SBSEArm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSEArm*)
   {
      ::SBSEArm *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSEArm >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSEArm", ::SBSEArm::Class_Version(), "SBSEArm.h", 11,
                  typeid(::SBSEArm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSEArm::Dictionary, isa_proxy, 4,
                  sizeof(::SBSEArm) );
      instance.SetDelete(&delete_SBSEArm);
      instance.SetDeleteArray(&deleteArray_SBSEArm);
      instance.SetDestructor(&destruct_SBSEArm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSEArm*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSEArm*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSEArm*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSGEPEArm(void *p);
   static void deleteArray_SBSGEPEArm(void *p);
   static void destruct_SBSGEPEArm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSGEPEArm*)
   {
      ::SBSGEPEArm *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSGEPEArm >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSGEPEArm", ::SBSGEPEArm::Class_Version(), "SBSGEPEArm.h", 9,
                  typeid(::SBSGEPEArm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSGEPEArm::Dictionary, isa_proxy, 4,
                  sizeof(::SBSGEPEArm) );
      instance.SetDelete(&delete_SBSGEPEArm);
      instance.SetDeleteArray(&deleteArray_SBSGEPEArm);
      instance.SetDestructor(&destruct_SBSGEPEArm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSGEPEArm*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSGEPEArm*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSGEPEArm*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSECal(void *p);
   static void deleteArray_SBSECal(void *p);
   static void destruct_SBSECal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSECal*)
   {
      ::SBSECal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSECal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSECal", ::SBSECal::Class_Version(), "SBSECal.h", 14,
                  typeid(::SBSECal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSECal::Dictionary, isa_proxy, 4,
                  sizeof(::SBSECal) );
      instance.SetDelete(&delete_SBSECal);
      instance.SetDeleteArray(&deleteArray_SBSECal);
      instance.SetDestructor(&destruct_SBSECal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSECal*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSECal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSECal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSHCal(void *p);
   static void deleteArray_SBSHCal(void *p);
   static void destruct_SBSHCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSHCal*)
   {
      ::SBSHCal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSHCal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSHCal", ::SBSHCal::Class_Version(), "SBSHCal.h", 14,
                  typeid(::SBSHCal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSHCal::Dictionary, isa_proxy, 4,
                  sizeof(::SBSHCal) );
      instance.SetDelete(&delete_SBSHCal);
      instance.SetDeleteArray(&deleteArray_SBSHCal);
      instance.SetDestructor(&destruct_SBSHCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSHCal*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSHCal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSHCal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecodercLcLSBSDecodeF1TDCModule(void *p);
   static void deleteArray_DecodercLcLSBSDecodeF1TDCModule(void *p);
   static void destruct_DecodercLcLSBSDecodeF1TDCModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::SBSDecodeF1TDCModule*)
   {
      ::Decoder::SBSDecodeF1TDCModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::SBSDecodeF1TDCModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::SBSDecodeF1TDCModule", ::Decoder::SBSDecodeF1TDCModule::Class_Version(), "SBSDecodeF1TDCModule.h", 15,
                  typeid(::Decoder::SBSDecodeF1TDCModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::SBSDecodeF1TDCModule::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::SBSDecodeF1TDCModule) );
      instance.SetDelete(&delete_DecodercLcLSBSDecodeF1TDCModule);
      instance.SetDeleteArray(&deleteArray_DecodercLcLSBSDecodeF1TDCModule);
      instance.SetDestructor(&destruct_DecodercLcLSBSDecodeF1TDCModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::SBSDecodeF1TDCModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::SBSDecodeF1TDCModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::SBSDecodeF1TDCModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecodercLcLSBSDecodeF1TDCLowResModule(void *p = nullptr);
   static void *newArray_DecodercLcLSBSDecodeF1TDCLowResModule(Long_t size, void *p);
   static void delete_DecodercLcLSBSDecodeF1TDCLowResModule(void *p);
   static void deleteArray_DecodercLcLSBSDecodeF1TDCLowResModule(void *p);
   static void destruct_DecodercLcLSBSDecodeF1TDCLowResModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::SBSDecodeF1TDCLowResModule*)
   {
      ::Decoder::SBSDecodeF1TDCLowResModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::SBSDecodeF1TDCLowResModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::SBSDecodeF1TDCLowResModule", ::Decoder::SBSDecodeF1TDCLowResModule::Class_Version(), "SBSDecodeF1TDCModule.h", 73,
                  typeid(::Decoder::SBSDecodeF1TDCLowResModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::SBSDecodeF1TDCLowResModule::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::SBSDecodeF1TDCLowResModule) );
      instance.SetNew(&new_DecodercLcLSBSDecodeF1TDCLowResModule);
      instance.SetNewArray(&newArray_DecodercLcLSBSDecodeF1TDCLowResModule);
      instance.SetDelete(&delete_DecodercLcLSBSDecodeF1TDCLowResModule);
      instance.SetDeleteArray(&deleteArray_DecodercLcLSBSDecodeF1TDCLowResModule);
      instance.SetDestructor(&destruct_DecodercLcLSBSDecodeF1TDCLowResModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::SBSDecodeF1TDCLowResModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::SBSDecodeF1TDCLowResModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::SBSDecodeF1TDCLowResModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecodercLcLSBSDecodeF1TDCHighResModule(void *p = nullptr);
   static void *newArray_DecodercLcLSBSDecodeF1TDCHighResModule(Long_t size, void *p);
   static void delete_DecodercLcLSBSDecodeF1TDCHighResModule(void *p);
   static void deleteArray_DecodercLcLSBSDecodeF1TDCHighResModule(void *p);
   static void destruct_DecodercLcLSBSDecodeF1TDCHighResModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::SBSDecodeF1TDCHighResModule*)
   {
      ::Decoder::SBSDecodeF1TDCHighResModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::SBSDecodeF1TDCHighResModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::SBSDecodeF1TDCHighResModule", ::Decoder::SBSDecodeF1TDCHighResModule::Class_Version(), "SBSDecodeF1TDCModule.h", 85,
                  typeid(::Decoder::SBSDecodeF1TDCHighResModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::SBSDecodeF1TDCHighResModule::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::SBSDecodeF1TDCHighResModule) );
      instance.SetNew(&new_DecodercLcLSBSDecodeF1TDCHighResModule);
      instance.SetNewArray(&newArray_DecodercLcLSBSDecodeF1TDCHighResModule);
      instance.SetDelete(&delete_DecodercLcLSBSDecodeF1TDCHighResModule);
      instance.SetDeleteArray(&deleteArray_DecodercLcLSBSDecodeF1TDCHighResModule);
      instance.SetDestructor(&destruct_DecodercLcLSBSDecodeF1TDCHighResModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::SBSDecodeF1TDCHighResModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::SBSDecodeF1TDCHighResModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::SBSDecodeF1TDCHighResModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *SBSSimDataDecoder_Dictionary();
   static void SBSSimDataDecoder_TClassManip(TClass*);
   static void delete_SBSSimDataDecoder(void *p);
   static void deleteArray_SBSSimDataDecoder(void *p);
   static void destruct_SBSSimDataDecoder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSSimDataDecoder*)
   {
      ::SBSSimDataDecoder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SBSSimDataDecoder));
      static ::ROOT::TGenericClassInfo 
         instance("SBSSimDataDecoder", "SBSSimDataDecoder.h", 62,
                  typeid(::SBSSimDataDecoder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SBSSimDataDecoder_Dictionary, isa_proxy, 4,
                  sizeof(::SBSSimDataDecoder) );
      instance.SetDelete(&delete_SBSSimDataDecoder);
      instance.SetDeleteArray(&deleteArray_SBSSimDataDecoder);
      instance.SetDestructor(&destruct_SBSSimDataDecoder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSSimDataDecoder*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSSimDataDecoder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSSimDataDecoder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SBSSimDataDecoder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::SBSSimDataDecoder*>(nullptr))->GetClass();
      SBSSimDataDecoder_TClassManip(theClass);
   return theClass;
   }

   static void SBSSimDataDecoder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *gmn_tree_digitized_Dictionary();
   static void gmn_tree_digitized_TClassManip(TClass*);
   static void *new_gmn_tree_digitized(void *p = nullptr);
   static void *newArray_gmn_tree_digitized(Long_t size, void *p);
   static void delete_gmn_tree_digitized(void *p);
   static void deleteArray_gmn_tree_digitized(void *p);
   static void destruct_gmn_tree_digitized(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gmn_tree_digitized*)
   {
      ::gmn_tree_digitized *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::gmn_tree_digitized));
      static ::ROOT::TGenericClassInfo 
         instance("gmn_tree_digitized", "gmn_tree_digitized.h", 19,
                  typeid(::gmn_tree_digitized), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gmn_tree_digitized_Dictionary, isa_proxy, 4,
                  sizeof(::gmn_tree_digitized) );
      instance.SetNew(&new_gmn_tree_digitized);
      instance.SetNewArray(&newArray_gmn_tree_digitized);
      instance.SetDelete(&delete_gmn_tree_digitized);
      instance.SetDeleteArray(&deleteArray_gmn_tree_digitized);
      instance.SetDestructor(&destruct_gmn_tree_digitized);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gmn_tree_digitized*)
   {
      return GenerateInitInstanceLocal(static_cast<::gmn_tree_digitized*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::gmn_tree_digitized*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gmn_tree_digitized_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::gmn_tree_digitized*>(nullptr))->GetClass();
      gmn_tree_digitized_TClassManip(theClass);
   return theClass;
   }

   static void gmn_tree_digitized_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *gep_tree_digitized_Dictionary();
   static void gep_tree_digitized_TClassManip(TClass*);
   static void *new_gep_tree_digitized(void *p = nullptr);
   static void *newArray_gep_tree_digitized(Long_t size, void *p);
   static void delete_gep_tree_digitized(void *p);
   static void deleteArray_gep_tree_digitized(void *p);
   static void destruct_gep_tree_digitized(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gep_tree_digitized*)
   {
      ::gep_tree_digitized *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::gep_tree_digitized));
      static ::ROOT::TGenericClassInfo 
         instance("gep_tree_digitized", "gep_tree_digitized.h", 18,
                  typeid(::gep_tree_digitized), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &gep_tree_digitized_Dictionary, isa_proxy, 4,
                  sizeof(::gep_tree_digitized) );
      instance.SetNew(&new_gep_tree_digitized);
      instance.SetNewArray(&newArray_gep_tree_digitized);
      instance.SetDelete(&delete_gep_tree_digitized);
      instance.SetDeleteArray(&deleteArray_gep_tree_digitized);
      instance.SetDestructor(&destruct_gep_tree_digitized);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gep_tree_digitized*)
   {
      return GenerateInitInstanceLocal(static_cast<::gep_tree_digitized*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::gep_tree_digitized*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *gep_tree_digitized_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::gep_tree_digitized*>(nullptr))->GetClass();
      gep_tree_digitized_TClassManip(theClass);
   return theClass;
   }

   static void gep_tree_digitized_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *genrp_tree_digitized_Dictionary();
   static void genrp_tree_digitized_TClassManip(TClass*);
   static void *new_genrp_tree_digitized(void *p = nullptr);
   static void *newArray_genrp_tree_digitized(Long_t size, void *p);
   static void delete_genrp_tree_digitized(void *p);
   static void deleteArray_genrp_tree_digitized(void *p);
   static void destruct_genrp_tree_digitized(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genrp_tree_digitized*)
   {
      ::genrp_tree_digitized *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genrp_tree_digitized));
      static ::ROOT::TGenericClassInfo 
         instance("genrp_tree_digitized", "genrp_tree_digitized.h", 18,
                  typeid(::genrp_tree_digitized), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &genrp_tree_digitized_Dictionary, isa_proxy, 4,
                  sizeof(::genrp_tree_digitized) );
      instance.SetNew(&new_genrp_tree_digitized);
      instance.SetNewArray(&newArray_genrp_tree_digitized);
      instance.SetDelete(&delete_genrp_tree_digitized);
      instance.SetDeleteArray(&deleteArray_genrp_tree_digitized);
      instance.SetDestructor(&destruct_genrp_tree_digitized);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genrp_tree_digitized*)
   {
      return GenerateInitInstanceLocal(static_cast<::genrp_tree_digitized*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::genrp_tree_digitized*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *genrp_tree_digitized_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::genrp_tree_digitized*>(nullptr))->GetClass();
      genrp_tree_digitized_TClassManip(theClass);
   return theClass;
   }

   static void genrp_tree_digitized_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSSimEvent(void *p);
   static void deleteArray_SBSSimEvent(void *p);
   static void destruct_SBSSimEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSSimEvent*)
   {
      ::SBSSimEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSSimEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSSimEvent", ::SBSSimEvent::Class_Version(), "SBSSimEvent.h", 15,
                  typeid(::SBSSimEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSSimEvent::Dictionary, isa_proxy, 4,
                  sizeof(::SBSSimEvent) );
      instance.SetDelete(&delete_SBSSimEvent);
      instance.SetDeleteArray(&deleteArray_SBSSimEvent);
      instance.SetDestructor(&destruct_SBSSimEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSSimEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSSimEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSSimEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSSimFile(void *p = nullptr);
   static void *newArray_SBSSimFile(Long_t size, void *p);
   static void delete_SBSSimFile(void *p);
   static void deleteArray_SBSSimFile(void *p);
   static void destruct_SBSSimFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSSimFile*)
   {
      ::SBSSimFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSSimFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSSimFile", ::SBSSimFile::Class_Version(), "SBSSimFile.h", 28,
                  typeid(::SBSSimFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSSimFile::Dictionary, isa_proxy, 4,
                  sizeof(::SBSSimFile) );
      instance.SetNew(&new_SBSSimFile);
      instance.SetNewArray(&newArray_SBSSimFile);
      instance.SetDelete(&delete_SBSSimFile);
      instance.SetDeleteArray(&deleteArray_SBSSimFile);
      instance.SetDestructor(&destruct_SBSSimFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSSimFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSSimFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSSimFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSSimDecoder(void *p = nullptr);
   static void *newArray_SBSSimDecoder(Long_t size, void *p);
   static void delete_SBSSimDecoder(void *p);
   static void deleteArray_SBSSimDecoder(void *p);
   static void destruct_SBSSimDecoder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSSimDecoder*)
   {
      ::SBSSimDecoder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSSimDecoder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSSimDecoder", ::SBSSimDecoder::Class_Version(), "SBSSimDecoder.h", 28,
                  typeid(::SBSSimDecoder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSSimDecoder::Dictionary, isa_proxy, 4,
                  sizeof(::SBSSimDecoder) );
      instance.SetNew(&new_SBSSimDecoder);
      instance.SetNewArray(&newArray_SBSSimDecoder);
      instance.SetDelete(&delete_SBSSimDecoder);
      instance.SetDeleteArray(&deleteArray_SBSSimDecoder);
      instance.SetDestructor(&destruct_SBSSimDecoder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSSimDecoder*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSSimDecoder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSSimDecoder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecodercLcLSBSSimADC(void *p = nullptr);
   static void *newArray_DecodercLcLSBSSimADC(Long_t size, void *p);
   static void delete_DecodercLcLSBSSimADC(void *p);
   static void deleteArray_DecodercLcLSBSSimADC(void *p);
   static void destruct_DecodercLcLSBSSimADC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::SBSSimADC*)
   {
      ::Decoder::SBSSimADC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::SBSSimADC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::SBSSimADC", ::Decoder::SBSSimADC::Class_Version(), "SBSSimADC.h", 20,
                  typeid(::Decoder::SBSSimADC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::SBSSimADC::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::SBSSimADC) );
      instance.SetNew(&new_DecodercLcLSBSSimADC);
      instance.SetNewArray(&newArray_DecodercLcLSBSSimADC);
      instance.SetDelete(&delete_DecodercLcLSBSSimADC);
      instance.SetDeleteArray(&deleteArray_DecodercLcLSBSSimADC);
      instance.SetDestructor(&destruct_DecodercLcLSBSSimADC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::SBSSimADC*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::SBSSimADC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::SBSSimADC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecodercLcLSBSSimTDC(void *p = nullptr);
   static void *newArray_DecodercLcLSBSSimTDC(Long_t size, void *p);
   static void delete_DecodercLcLSBSSimTDC(void *p);
   static void deleteArray_DecodercLcLSBSSimTDC(void *p);
   static void destruct_DecodercLcLSBSSimTDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::SBSSimTDC*)
   {
      ::Decoder::SBSSimTDC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::SBSSimTDC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::SBSSimTDC", ::Decoder::SBSSimTDC::Class_Version(), "SBSSimTDC.h", 19,
                  typeid(::Decoder::SBSSimTDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::SBSSimTDC::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::SBSSimTDC) );
      instance.SetNew(&new_DecodercLcLSBSSimTDC);
      instance.SetNewArray(&newArray_DecodercLcLSBSSimTDC);
      instance.SetDelete(&delete_DecodercLcLSBSSimTDC);
      instance.SetDeleteArray(&deleteArray_DecodercLcLSBSSimTDC);
      instance.SetDestructor(&destruct_DecodercLcLSBSSimTDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::SBSSimTDC*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::SBSSimTDC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::SBSSimTDC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecodercLcLHCalLED(void *p = nullptr);
   static void *newArray_DecodercLcLHCalLED(Long_t size, void *p);
   static void delete_DecodercLcLHCalLED(void *p);
   static void deleteArray_DecodercLcLHCalLED(void *p);
   static void destruct_DecodercLcLHCalLED(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::HCalLED*)
   {
      ::Decoder::HCalLED *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::HCalLED >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::HCalLED", ::Decoder::HCalLED::Class_Version(), "SBSHCalLEDModule.h", 35,
                  typeid(::Decoder::HCalLED), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::HCalLED::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::HCalLED) );
      instance.SetNew(&new_DecodercLcLHCalLED);
      instance.SetNewArray(&newArray_DecodercLcLHCalLED);
      instance.SetDelete(&delete_DecodercLcLHCalLED);
      instance.SetDeleteArray(&deleteArray_DecodercLcLHCalLED);
      instance.SetDestructor(&destruct_DecodercLcLHCalLED);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::HCalLED*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::HCalLED*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::HCalLED*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSManager(void *p = nullptr);
   static void *newArray_SBSManager(Long_t size, void *p);
   static void delete_SBSManager(void *p);
   static void deleteArray_SBSManager(void *p);
   static void destruct_SBSManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSManager*)
   {
      ::SBSManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSManager", ::SBSManager::Class_Version(), "SBSManager.h", 12,
                  typeid(::SBSManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSManager::Dictionary, isa_proxy, 4,
                  sizeof(::SBSManager) );
      instance.SetNew(&new_SBSManager);
      instance.SetNewArray(&newArray_SBSManager);
      instance.SetDelete(&delete_SBSManager);
      instance.SetDeleteArray(&deleteArray_SBSManager);
      instance.SetDestructor(&destruct_SBSManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSRPBeamSideHodo(void *p);
   static void deleteArray_SBSRPBeamSideHodo(void *p);
   static void destruct_SBSRPBeamSideHodo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSRPBeamSideHodo*)
   {
      ::SBSRPBeamSideHodo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSRPBeamSideHodo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSRPBeamSideHodo", ::SBSRPBeamSideHodo::Class_Version(), "SBSRPBeamSideHodo.h", 14,
                  typeid(::SBSRPBeamSideHodo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSRPBeamSideHodo::Dictionary, isa_proxy, 4,
                  sizeof(::SBSRPBeamSideHodo) );
      instance.SetDelete(&delete_SBSRPBeamSideHodo);
      instance.SetDeleteArray(&deleteArray_SBSRPBeamSideHodo);
      instance.SetDestructor(&destruct_SBSRPBeamSideHodo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSRPBeamSideHodo*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSRPBeamSideHodo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSRPBeamSideHodo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSRPFarSideHodo(void *p);
   static void deleteArray_SBSRPFarSideHodo(void *p);
   static void destruct_SBSRPFarSideHodo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSRPFarSideHodo*)
   {
      ::SBSRPFarSideHodo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSRPFarSideHodo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSRPFarSideHodo", ::SBSRPFarSideHodo::Class_Version(), "SBSRPFarSideHodo.h", 14,
                  typeid(::SBSRPFarSideHodo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSRPFarSideHodo::Dictionary, isa_proxy, 4,
                  sizeof(::SBSRPFarSideHodo) );
      instance.SetDelete(&delete_SBSRPFarSideHodo);
      instance.SetDeleteArray(&deleteArray_SBSRPFarSideHodo);
      instance.SetDestructor(&destruct_SBSRPFarSideHodo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSRPFarSideHodo*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSRPFarSideHodo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSRPFarSideHodo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSCHAnalyzer(void *p);
   static void deleteArray_SBSCHAnalyzer(void *p);
   static void destruct_SBSCHAnalyzer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSCHAnalyzer*)
   {
      ::SBSCHAnalyzer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSCHAnalyzer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSCHAnalyzer", ::SBSCHAnalyzer::Class_Version(), "SBSCHAnalyzer.h", 14,
                  typeid(::SBSCHAnalyzer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSCHAnalyzer::Dictionary, isa_proxy, 4,
                  sizeof(::SBSCHAnalyzer) );
      instance.SetDelete(&delete_SBSCHAnalyzer);
      instance.SetDeleteArray(&deleteArray_SBSCHAnalyzer);
      instance.SetDestructor(&destruct_SBSCHAnalyzer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSCHAnalyzer*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSCHAnalyzer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSCHAnalyzer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSBPM(void *p);
   static void deleteArray_SBSBPM(void *p);
   static void destruct_SBSBPM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSBPM*)
   {
      ::SBSBPM *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSBPM >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSBPM", ::SBSBPM::Class_Version(), "SBSBPM.h", 30,
                  typeid(::SBSBPM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSBPM::Dictionary, isa_proxy, 4,
                  sizeof(::SBSBPM) );
      instance.SetDelete(&delete_SBSBPM);
      instance.SetDeleteArray(&deleteArray_SBSBPM);
      instance.SetDestructor(&destruct_SBSBPM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSBPM*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSBPM*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSBPM*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSRaster(void *p);
   static void deleteArray_SBSRaster(void *p);
   static void destruct_SBSRaster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSRaster*)
   {
      ::SBSRaster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSRaster >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSRaster", ::SBSRaster::Class_Version(), "SBSRaster.h", 29,
                  typeid(::SBSRaster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSRaster::Dictionary, isa_proxy, 4,
                  sizeof(::SBSRaster) );
      instance.SetDelete(&delete_SBSRaster);
      instance.SetDeleteArray(&deleteArray_SBSRaster);
      instance.SetDestructor(&destruct_SBSRaster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSRaster*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSRaster*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSRaster*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSRasteredBeam(void *p);
   static void deleteArray_SBSRasteredBeam(void *p);
   static void destruct_SBSRasteredBeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSRasteredBeam*)
   {
      ::SBSRasteredBeam *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSRasteredBeam >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSRasteredBeam", ::SBSRasteredBeam::Class_Version(), "SBSRasteredBeam.h", 24,
                  typeid(::SBSRasteredBeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSRasteredBeam::Dictionary, isa_proxy, 4,
                  sizeof(::SBSRasteredBeam) );
      instance.SetDelete(&delete_SBSRasteredBeam);
      instance.SetDeleteArray(&deleteArray_SBSRasteredBeam);
      instance.SetDestructor(&destruct_SBSRasteredBeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSRasteredBeam*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSRasteredBeam*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSRasteredBeam*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LHRSScalerEvtHandler(void *p);
   static void deleteArray_LHRSScalerEvtHandler(void *p);
   static void destruct_LHRSScalerEvtHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LHRSScalerEvtHandler*)
   {
      ::LHRSScalerEvtHandler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LHRSScalerEvtHandler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("LHRSScalerEvtHandler", ::LHRSScalerEvtHandler::Class_Version(), "LHRSScalerEvtHandler.h", 33,
                  typeid(::LHRSScalerEvtHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LHRSScalerEvtHandler::Dictionary, isa_proxy, 4,
                  sizeof(::LHRSScalerEvtHandler) );
      instance.SetDelete(&delete_LHRSScalerEvtHandler);
      instance.SetDeleteArray(&deleteArray_LHRSScalerEvtHandler);
      instance.SetDestructor(&destruct_LHRSScalerEvtHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LHRSScalerEvtHandler*)
   {
      return GenerateInitInstanceLocal(static_cast<::LHRSScalerEvtHandler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::LHRSScalerEvtHandler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSScalerEvtHandler(void *p);
   static void deleteArray_SBSScalerEvtHandler(void *p);
   static void destruct_SBSScalerEvtHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSScalerEvtHandler*)
   {
      ::SBSScalerEvtHandler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSScalerEvtHandler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSScalerEvtHandler", ::SBSScalerEvtHandler::Class_Version(), "SBSScalerEvtHandler.h", 35,
                  typeid(::SBSScalerEvtHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSScalerEvtHandler::Dictionary, isa_proxy, 4,
                  sizeof(::SBSScalerEvtHandler) );
      instance.SetDelete(&delete_SBSScalerEvtHandler);
      instance.SetDeleteArray(&deleteArray_SBSScalerEvtHandler);
      instance.SetDestructor(&destruct_SBSScalerEvtHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSScalerEvtHandler*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSScalerEvtHandler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSScalerEvtHandler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSScalerHelicityReader(void *p = nullptr);
   static void *newArray_SBSScalerHelicityReader(Long_t size, void *p);
   static void delete_SBSScalerHelicityReader(void *p);
   static void deleteArray_SBSScalerHelicityReader(void *p);
   static void destruct_SBSScalerHelicityReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSScalerHelicityReader*)
   {
      ::SBSScalerHelicityReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSScalerHelicityReader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSScalerHelicityReader", ::SBSScalerHelicityReader::Class_Version(), "SBSScalerHelicityReader.h", 18,
                  typeid(::SBSScalerHelicityReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSScalerHelicityReader::Dictionary, isa_proxy, 4,
                  sizeof(::SBSScalerHelicityReader) );
      instance.SetNew(&new_SBSScalerHelicityReader);
      instance.SetNewArray(&newArray_SBSScalerHelicityReader);
      instance.SetDelete(&delete_SBSScalerHelicityReader);
      instance.SetDeleteArray(&deleteArray_SBSScalerHelicityReader);
      instance.SetDestructor(&destruct_SBSScalerHelicityReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSScalerHelicityReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSScalerHelicityReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSScalerHelicityReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SBSScalerHelicity(void *p = nullptr);
   static void *newArray_SBSScalerHelicity(Long_t size, void *p);
   static void delete_SBSScalerHelicity(void *p);
   static void deleteArray_SBSScalerHelicity(void *p);
   static void destruct_SBSScalerHelicity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSScalerHelicity*)
   {
      ::SBSScalerHelicity *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSScalerHelicity >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSScalerHelicity", ::SBSScalerHelicity::Class_Version(), "SBSScalerHelicity.h", 24,
                  typeid(::SBSScalerHelicity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSScalerHelicity::Dictionary, isa_proxy, 4,
                  sizeof(::SBSScalerHelicity) );
      instance.SetNew(&new_SBSScalerHelicity);
      instance.SetNewArray(&newArray_SBSScalerHelicity);
      instance.SetDelete(&delete_SBSScalerHelicity);
      instance.SetDeleteArray(&deleteArray_SBSScalerHelicity);
      instance.SetDestructor(&destruct_SBSScalerHelicity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSScalerHelicity*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSScalerHelicity*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSScalerHelicity*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecodercLcLVETROCModule(void *p = nullptr);
   static void *newArray_DecodercLcLVETROCModule(Long_t size, void *p);
   static void delete_DecodercLcLVETROCModule(void *p);
   static void deleteArray_DecodercLcLVETROCModule(void *p);
   static void destruct_DecodercLcLVETROCModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::VETROCModule*)
   {
      ::Decoder::VETROCModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::VETROCModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::VETROCModule", ::Decoder::VETROCModule::Class_Version(), "VETROC.h", 17,
                  typeid(::Decoder::VETROCModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::VETROCModule::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::VETROCModule) );
      instance.SetNew(&new_DecodercLcLVETROCModule);
      instance.SetNewArray(&newArray_DecodercLcLVETROCModule);
      instance.SetDelete(&delete_DecodercLcLVETROCModule);
      instance.SetDeleteArray(&deleteArray_DecodercLcLVETROCModule);
      instance.SetDestructor(&destruct_DecodercLcLVETROCModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::VETROCModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::VETROCModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::VETROCModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecodercLcLVETROCcdetModule(void *p = nullptr);
   static void *newArray_DecodercLcLVETROCcdetModule(Long_t size, void *p);
   static void delete_DecodercLcLVETROCcdetModule(void *p);
   static void deleteArray_DecodercLcLVETROCcdetModule(void *p);
   static void destruct_DecodercLcLVETROCcdetModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::VETROCcdetModule*)
   {
      ::Decoder::VETROCcdetModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::VETROCcdetModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::VETROCcdetModule", ::Decoder::VETROCcdetModule::Class_Version(), "VETROCcdet.h", 17,
                  typeid(::Decoder::VETROCcdetModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::VETROCcdetModule::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::VETROCcdetModule) );
      instance.SetNew(&new_DecodercLcLVETROCcdetModule);
      instance.SetNewArray(&newArray_DecodercLcLVETROCcdetModule);
      instance.SetDelete(&delete_DecodercLcLVETROCcdetModule);
      instance.SetDeleteArray(&deleteArray_DecodercLcLVETROCcdetModule);
      instance.SetDestructor(&destruct_DecodercLcLVETROCcdetModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::VETROCcdetModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::VETROCcdetModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::VETROCcdetModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecodercLcLVTPModule(void *p = nullptr);
   static void *newArray_DecodercLcLVTPModule(Long_t size, void *p);
   static void delete_DecodercLcLVTPModule(void *p);
   static void deleteArray_DecodercLcLVTPModule(void *p);
   static void destruct_DecodercLcLVTPModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::VTPModule*)
   {
      ::Decoder::VTPModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::VTPModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::VTPModule", ::Decoder::VTPModule::Class_Version(), "VTPModule.h", 18,
                  typeid(::Decoder::VTPModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::VTPModule::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::VTPModule) );
      instance.SetNew(&new_DecodercLcLVTPModule);
      instance.SetNewArray(&newArray_DecodercLcLVTPModule);
      instance.SetDelete(&delete_DecodercLcLVTPModule);
      instance.SetDeleteArray(&deleteArray_DecodercLcLVTPModule);
      instance.SetDestructor(&destruct_DecodercLcLVTPModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::VTPModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::VTPModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::VTPModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSVTP(void *p);
   static void deleteArray_SBSVTP(void *p);
   static void destruct_SBSVTP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSVTP*)
   {
      ::SBSVTP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSVTP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSVTP", ::SBSVTP::Class_Version(), "SBSVTP.h", 23,
                  typeid(::SBSVTP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSVTP::Dictionary, isa_proxy, 4,
                  sizeof(::SBSVTP) );
      instance.SetDelete(&delete_SBSVTP);
      instance.SetDeleteArray(&deleteArray_SBSVTP);
      instance.SetDestructor(&destruct_SBSVTP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSVTP*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSVTP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSVTP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_SBSGEPRegionOfInterestModule(void *p);
   static void deleteArray_SBSGEPRegionOfInterestModule(void *p);
   static void destruct_SBSGEPRegionOfInterestModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SBSGEPRegionOfInterestModule*)
   {
      ::SBSGEPRegionOfInterestModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SBSGEPRegionOfInterestModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SBSGEPRegionOfInterestModule", ::SBSGEPRegionOfInterestModule::Class_Version(), "SBSGEPRegionOfInterestModule.h", 25,
                  typeid(::SBSGEPRegionOfInterestModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SBSGEPRegionOfInterestModule::Dictionary, isa_proxy, 4,
                  sizeof(::SBSGEPRegionOfInterestModule) );
      instance.SetDelete(&delete_SBSGEPRegionOfInterestModule);
      instance.SetDeleteArray(&deleteArray_SBSGEPRegionOfInterestModule);
      instance.SetDestructor(&destruct_SBSGEPRegionOfInterestModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SBSGEPRegionOfInterestModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::SBSGEPRegionOfInterestModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SBSGEPRegionOfInterestModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr MPDModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MPDModule::Class_Name()
{
   return "Decoder::MPDModule";
}

//______________________________________________________________________________
const char *MPDModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MPDModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MPDModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MPDModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModule*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr MPDModuleVMEv4::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MPDModuleVMEv4::Class_Name()
{
   return "Decoder::MPDModuleVMEv4";
}

//______________________________________________________________________________
const char *MPDModuleVMEv4::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModuleVMEv4*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MPDModuleVMEv4::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModuleVMEv4*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MPDModuleVMEv4::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModuleVMEv4*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MPDModuleVMEv4::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModuleVMEv4*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
//______________________________________________________________________________
atomic_TClass_ptr SBSBigBite::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSBigBite::Class_Name()
{
   return "SBSBigBite";
}

//______________________________________________________________________________
const char *SBSBigBite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSBigBite*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSBigBite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSBigBite*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSBigBite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSBigBite*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSBigBite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSBigBite*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSGEMSpectrometerTracker::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSGEMSpectrometerTracker::Class_Name()
{
   return "SBSGEMSpectrometerTracker";
}

//______________________________________________________________________________
const char *SBSGEMSpectrometerTracker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMSpectrometerTracker*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSGEMSpectrometerTracker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMSpectrometerTracker*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSGEMSpectrometerTracker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMSpectrometerTracker*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSGEMSpectrometerTracker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMSpectrometerTracker*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSGEMModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSGEMModule::Class_Name()
{
   return "SBSGEMModule";
}

//______________________________________________________________________________
const char *SBSGEMModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSGEMModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSGEMModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSGEMModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMModule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSGEMPolarimeterTracker::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSGEMPolarimeterTracker::Class_Name()
{
   return "SBSGEMPolarimeterTracker";
}

//______________________________________________________________________________
const char *SBSGEMPolarimeterTracker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMPolarimeterTracker*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSGEMPolarimeterTracker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMPolarimeterTracker*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSGEMPolarimeterTracker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMPolarimeterTracker*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSGEMPolarimeterTracker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGEMPolarimeterTracker*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSElement::Class_Name()
{
   return "SBSElement";
}

//______________________________________________________________________________
const char *SBSElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSGenericDetector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSGenericDetector::Class_Name()
{
   return "SBSGenericDetector";
}

//______________________________________________________________________________
const char *SBSGenericDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGenericDetector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSGenericDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGenericDetector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSGenericDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGenericDetector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSGenericDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGenericDetector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSCalorimeterCluster::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSCalorimeterCluster::Class_Name()
{
   return "SBSCalorimeterCluster";
}

//______________________________________________________________________________
const char *SBSCalorimeterCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCalorimeterCluster*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSCalorimeterCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCalorimeterCluster*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSCalorimeterCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCalorimeterCluster*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSCalorimeterCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCalorimeterCluster*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSCalorimeter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSCalorimeter::Class_Name()
{
   return "SBSCalorimeter";
}

//______________________________________________________________________________
const char *SBSCalorimeter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCalorimeter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSCalorimeter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCalorimeter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSCalorimeter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCalorimeter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSCalorimeter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCalorimeter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSBBShower::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSBBShower::Class_Name()
{
   return "SBSBBShower";
}

//______________________________________________________________________________
const char *SBSBBShower::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSBBShower*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSBBShower::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSBBShower*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSBBShower::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSBBShower*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSBBShower::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSBBShower*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSBBTotalShower::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSBBTotalShower::Class_Name()
{
   return "SBSBBTotalShower";
}

//______________________________________________________________________________
const char *SBSBBTotalShower::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSBBTotalShower*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSBBTotalShower::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSBBTotalShower*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSBBTotalShower::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSBBTotalShower*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSBBTotalShower::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSBBTotalShower*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSCDet_Hit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSCDet_Hit::Class_Name()
{
   return "SBSCDet_Hit";
}

//______________________________________________________________________________
const char *SBSCDet_Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCDet_Hit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSCDet_Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCDet_Hit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSCDet_Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCDet_Hit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSCDet_Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCDet_Hit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSCDet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSCDet::Class_Name()
{
   return "SBSCDet";
}

//______________________________________________________________________________
const char *SBSCDet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCDet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSCDet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCDet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSCDet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCDet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSCDet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCDet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSScintPMT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSScintPMT::Class_Name()
{
   return "SBSScintPMT";
}

//______________________________________________________________________________
const char *SBSScintPMT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPMT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSScintPMT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPMT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSScintPMT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPMT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSScintPMT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPMT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSScintBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSScintBar::Class_Name()
{
   return "SBSScintBar";
}

//______________________________________________________________________________
const char *SBSScintBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScintBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSScintBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScintBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSScintBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScintBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSScintBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScintBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSScintHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSScintHit::Class_Name()
{
   return "SBSScintHit";
}

//______________________________________________________________________________
const char *SBSScintHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScintHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSScintHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScintHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSScintHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScintHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSScintHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScintHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSTimingHodoscopePMT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSTimingHodoscopePMT::Class_Name()
{
   return "SBSTimingHodoscopePMT";
}

//______________________________________________________________________________
const char *SBSTimingHodoscopePMT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopePMT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSTimingHodoscopePMT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopePMT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSTimingHodoscopePMT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopePMT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSTimingHodoscopePMT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopePMT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSTimingHodoscopeBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSTimingHodoscopeBar::Class_Name()
{
   return "SBSTimingHodoscopeBar";
}

//______________________________________________________________________________
const char *SBSTimingHodoscopeBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopeBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSTimingHodoscopeBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopeBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSTimingHodoscopeBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopeBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSTimingHodoscopeBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopeBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSTimingHodoscopeCluster::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSTimingHodoscopeCluster::Class_Name()
{
   return "SBSTimingHodoscopeCluster";
}

//______________________________________________________________________________
const char *SBSTimingHodoscopeCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopeCluster*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSTimingHodoscopeCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopeCluster*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSTimingHodoscopeCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopeCluster*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSTimingHodoscopeCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscopeCluster*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSTimingHodoscope::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSTimingHodoscope::Class_Name()
{
   return "SBSTimingHodoscope";
}

//______________________________________________________________________________
const char *SBSTimingHodoscope::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscope*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSTimingHodoscope::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscope*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSTimingHodoscope::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscope*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSTimingHodoscope::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSTimingHodoscope*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSTdcHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSTdcHit::Class_Name()
{
   return "SBSTdcHit";
}

//______________________________________________________________________________
const char *SBSTdcHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSTdcHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSTdcHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSTdcHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSTdcHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSTdcHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSTdcHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSTdcHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSAdcHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSAdcHit::Class_Name()
{
   return "SBSAdcHit";
}

//______________________________________________________________________________
const char *SBSAdcHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSAdcHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSAdcHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSAdcHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSAdcHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSAdcHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSAdcHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSAdcHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSScintPartialHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSScintPartialHit::Class_Name()
{
   return "SBSScintPartialHit";
}

//______________________________________________________________________________
const char *SBSScintPartialHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPartialHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSScintPartialHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPartialHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSScintPartialHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPartialHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSScintPartialHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPartialHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSCherenkov_Hit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSCherenkov_Hit::Class_Name()
{
   return "SBSCherenkov_Hit";
}

//______________________________________________________________________________
const char *SBSCherenkov_Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkov_Hit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSCherenkov_Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkov_Hit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSCherenkov_Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkov_Hit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSCherenkov_Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkov_Hit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSCherenkov_Cluster::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSCherenkov_Cluster::Class_Name()
{
   return "SBSCherenkov_Cluster";
}

//______________________________________________________________________________
const char *SBSCherenkov_Cluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkov_Cluster*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSCherenkov_Cluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkov_Cluster*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSCherenkov_Cluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkov_Cluster*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSCherenkov_Cluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkov_Cluster*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSCherenkovDetector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSCherenkovDetector::Class_Name()
{
   return "SBSCherenkovDetector";
}

//______________________________________________________________________________
const char *SBSCherenkovDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkovDetector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSCherenkovDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkovDetector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSCherenkovDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkovDetector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSCherenkovDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCherenkovDetector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSGRINCH::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSGRINCH::Class_Name()
{
   return "SBSGRINCH";
}

//______________________________________________________________________________
const char *SBSGRINCH::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGRINCH*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSGRINCH::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGRINCH*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSGRINCH::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGRINCH*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSGRINCH::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGRINCH*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSScintPlane::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSScintPlane::Class_Name()
{
   return "SBSScintPlane";
}

//______________________________________________________________________________
const char *SBSScintPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPlane*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSScintPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPlane*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSScintPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPlane*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSScintPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScintPlane*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSEArm::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSEArm::Class_Name()
{
   return "SBSEArm";
}

//______________________________________________________________________________
const char *SBSEArm::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSEArm*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSEArm::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSEArm*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSEArm::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSEArm*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSEArm::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSEArm*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSGEPEArm::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSGEPEArm::Class_Name()
{
   return "SBSGEPEArm";
}

//______________________________________________________________________________
const char *SBSGEPEArm::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGEPEArm*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSGEPEArm::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGEPEArm*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSGEPEArm::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGEPEArm*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSGEPEArm::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGEPEArm*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSECal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSECal::Class_Name()
{
   return "SBSECal";
}

//______________________________________________________________________________
const char *SBSECal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSECal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSECal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSECal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSECal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSECal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSECal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSECal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSHCal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSHCal::Class_Name()
{
   return "SBSHCal";
}

//______________________________________________________________________________
const char *SBSHCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSHCal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSHCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSHCal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSHCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSHCal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSHCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSHCal*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr SBSDecodeF1TDCModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSDecodeF1TDCModule::Class_Name()
{
   return "Decoder::SBSDecodeF1TDCModule";
}

//______________________________________________________________________________
const char *SBSDecodeF1TDCModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSDecodeF1TDCModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSDecodeF1TDCModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSDecodeF1TDCModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCModule*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr SBSDecodeF1TDCLowResModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSDecodeF1TDCLowResModule::Class_Name()
{
   return "Decoder::SBSDecodeF1TDCLowResModule";
}

//______________________________________________________________________________
const char *SBSDecodeF1TDCLowResModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCLowResModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSDecodeF1TDCLowResModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCLowResModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSDecodeF1TDCLowResModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCLowResModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSDecodeF1TDCLowResModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCLowResModule*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr SBSDecodeF1TDCHighResModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSDecodeF1TDCHighResModule::Class_Name()
{
   return "Decoder::SBSDecodeF1TDCHighResModule";
}

//______________________________________________________________________________
const char *SBSDecodeF1TDCHighResModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCHighResModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSDecodeF1TDCHighResModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCHighResModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSDecodeF1TDCHighResModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCHighResModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSDecodeF1TDCHighResModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSDecodeF1TDCHighResModule*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
//______________________________________________________________________________
atomic_TClass_ptr SBSSimEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSSimEvent::Class_Name()
{
   return "SBSSimEvent";
}

//______________________________________________________________________________
const char *SBSSimEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSSimEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSSimEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSSimEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSSimEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSSimEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSSimEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSSimEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSSimFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSSimFile::Class_Name()
{
   return "SBSSimFile";
}

//______________________________________________________________________________
const char *SBSSimFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSSimFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSSimFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSSimFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSSimFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSSimFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSSimFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSSimFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSSimDecoder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSSimDecoder::Class_Name()
{
   return "SBSSimDecoder";
}

//______________________________________________________________________________
const char *SBSSimDecoder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSSimDecoder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSSimDecoder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSSimDecoder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSSimDecoder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSSimDecoder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSSimDecoder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSSimDecoder*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr SBSSimADC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSSimADC::Class_Name()
{
   return "Decoder::SBSSimADC";
}

//______________________________________________________________________________
const char *SBSSimADC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSSimADC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSSimADC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSSimADC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSSimADC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSSimADC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSSimADC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSSimADC*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr SBSSimTDC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSSimTDC::Class_Name()
{
   return "Decoder::SBSSimTDC";
}

//______________________________________________________________________________
const char *SBSSimTDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSSimTDC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSSimTDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSSimTDC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSSimTDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSSimTDC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSSimTDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::SBSSimTDC*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr HCalLED::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HCalLED::Class_Name()
{
   return "Decoder::HCalLED";
}

//______________________________________________________________________________
const char *HCalLED::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::HCalLED*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HCalLED::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::HCalLED*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HCalLED::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::HCalLED*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HCalLED::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::HCalLED*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
//______________________________________________________________________________
atomic_TClass_ptr SBSManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSManager::Class_Name()
{
   return "SBSManager";
}

//______________________________________________________________________________
const char *SBSManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSRPBeamSideHodo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSRPBeamSideHodo::Class_Name()
{
   return "SBSRPBeamSideHodo";
}

//______________________________________________________________________________
const char *SBSRPBeamSideHodo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSRPBeamSideHodo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSRPBeamSideHodo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSRPBeamSideHodo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSRPBeamSideHodo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSRPBeamSideHodo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSRPBeamSideHodo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSRPBeamSideHodo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSRPFarSideHodo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSRPFarSideHodo::Class_Name()
{
   return "SBSRPFarSideHodo";
}

//______________________________________________________________________________
const char *SBSRPFarSideHodo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSRPFarSideHodo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSRPFarSideHodo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSRPFarSideHodo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSRPFarSideHodo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSRPFarSideHodo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSRPFarSideHodo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSRPFarSideHodo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSCHAnalyzer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSCHAnalyzer::Class_Name()
{
   return "SBSCHAnalyzer";
}

//______________________________________________________________________________
const char *SBSCHAnalyzer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCHAnalyzer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSCHAnalyzer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSCHAnalyzer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSCHAnalyzer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCHAnalyzer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSCHAnalyzer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSCHAnalyzer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSBPM::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSBPM::Class_Name()
{
   return "SBSBPM";
}

//______________________________________________________________________________
const char *SBSBPM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSBPM*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSBPM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSBPM*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSBPM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSBPM*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSBPM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSBPM*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSRaster::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSRaster::Class_Name()
{
   return "SBSRaster";
}

//______________________________________________________________________________
const char *SBSRaster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSRaster*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSRaster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSRaster*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSRaster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSRaster*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSRaster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSRaster*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSRasteredBeam::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSRasteredBeam::Class_Name()
{
   return "SBSRasteredBeam";
}

//______________________________________________________________________________
const char *SBSRasteredBeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSRasteredBeam*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSRasteredBeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSRasteredBeam*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSRasteredBeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSRasteredBeam*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSRasteredBeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSRasteredBeam*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LHRSScalerEvtHandler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *LHRSScalerEvtHandler::Class_Name()
{
   return "LHRSScalerEvtHandler";
}

//______________________________________________________________________________
const char *LHRSScalerEvtHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LHRSScalerEvtHandler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int LHRSScalerEvtHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LHRSScalerEvtHandler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LHRSScalerEvtHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LHRSScalerEvtHandler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LHRSScalerEvtHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LHRSScalerEvtHandler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSScalerEvtHandler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSScalerEvtHandler::Class_Name()
{
   return "SBSScalerEvtHandler";
}

//______________________________________________________________________________
const char *SBSScalerEvtHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerEvtHandler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSScalerEvtHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerEvtHandler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSScalerEvtHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerEvtHandler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSScalerEvtHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerEvtHandler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSScalerHelicityReader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSScalerHelicityReader::Class_Name()
{
   return "SBSScalerHelicityReader";
}

//______________________________________________________________________________
const char *SBSScalerHelicityReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerHelicityReader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSScalerHelicityReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerHelicityReader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSScalerHelicityReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerHelicityReader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSScalerHelicityReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerHelicityReader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSScalerHelicity::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSScalerHelicity::Class_Name()
{
   return "SBSScalerHelicity";
}

//______________________________________________________________________________
const char *SBSScalerHelicity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerHelicity*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSScalerHelicity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerHelicity*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSScalerHelicity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerHelicity*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSScalerHelicity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSScalerHelicity*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr VETROCModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *VETROCModule::Class_Name()
{
   return "Decoder::VETROCModule";
}

//______________________________________________________________________________
const char *VETROCModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VETROCModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int VETROCModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VETROCModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VETROCModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VETROCModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VETROCModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VETROCModule*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr VETROCcdetModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *VETROCcdetModule::Class_Name()
{
   return "Decoder::VETROCcdetModule";
}

//______________________________________________________________________________
const char *VETROCcdetModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VETROCcdetModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int VETROCcdetModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VETROCcdetModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VETROCcdetModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VETROCcdetModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VETROCcdetModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VETROCcdetModule*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr VTPModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *VTPModule::Class_Name()
{
   return "Decoder::VTPModule";
}

//______________________________________________________________________________
const char *VTPModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VTPModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int VTPModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VTPModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VTPModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VTPModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VTPModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::VTPModule*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
//______________________________________________________________________________
atomic_TClass_ptr SBSVTP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSVTP::Class_Name()
{
   return "SBSVTP";
}

//______________________________________________________________________________
const char *SBSVTP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSVTP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSVTP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSVTP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSVTP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSVTP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSVTP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSVTP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SBSGEPRegionOfInterestModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SBSGEPRegionOfInterestModule::Class_Name()
{
   return "SBSGEPRegionOfInterestModule";
}

//______________________________________________________________________________
const char *SBSGEPRegionOfInterestModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGEPRegionOfInterestModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SBSGEPRegionOfInterestModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SBSGEPRegionOfInterestModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SBSGEPRegionOfInterestModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGEPRegionOfInterestModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SBSGEPRegionOfInterestModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SBSGEPRegionOfInterestModule*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace Decoder {
//______________________________________________________________________________
void MPDModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::MPDModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::MPDModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::MPDModule::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLMPDModule(void *p) {
      return  p ? new(p) ::Decoder::MPDModule : new ::Decoder::MPDModule;
   }
   static void *newArray_DecodercLcLMPDModule(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::MPDModule[nElements] : new ::Decoder::MPDModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLMPDModule(void *p) {
      delete (static_cast<::Decoder::MPDModule*>(p));
   }
   static void deleteArray_DecodercLcLMPDModule(void *p) {
      delete [] (static_cast<::Decoder::MPDModule*>(p));
   }
   static void destruct_DecodercLcLMPDModule(void *p) {
      typedef ::Decoder::MPDModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::MPDModule

namespace Decoder {
//______________________________________________________________________________
void MPDModuleVMEv4::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::MPDModuleVMEv4.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::MPDModuleVMEv4::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::MPDModuleVMEv4::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLMPDModuleVMEv4(void *p) {
      return  p ? new(p) ::Decoder::MPDModuleVMEv4 : new ::Decoder::MPDModuleVMEv4;
   }
   static void *newArray_DecodercLcLMPDModuleVMEv4(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::MPDModuleVMEv4[nElements] : new ::Decoder::MPDModuleVMEv4[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLMPDModuleVMEv4(void *p) {
      delete (static_cast<::Decoder::MPDModuleVMEv4*>(p));
   }
   static void deleteArray_DecodercLcLMPDModuleVMEv4(void *p) {
      delete [] (static_cast<::Decoder::MPDModuleVMEv4*>(p));
   }
   static void destruct_DecodercLcLMPDModuleVMEv4(void *p) {
      typedef ::Decoder::MPDModuleVMEv4 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::MPDModuleVMEv4

//______________________________________________________________________________
void SBSBigBite::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSBigBite.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSBigBite::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSBigBite::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSBigBite(void *p) {
      delete (static_cast<::SBSBigBite*>(p));
   }
   static void deleteArray_SBSBigBite(void *p) {
      delete [] (static_cast<::SBSBigBite*>(p));
   }
   static void destruct_SBSBigBite(void *p) {
      typedef ::SBSBigBite current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSBigBite

//______________________________________________________________________________
void SBSGEMSpectrometerTracker::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSGEMSpectrometerTracker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSGEMSpectrometerTracker::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSGEMSpectrometerTracker::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSGEMSpectrometerTracker(void *p) {
      delete (static_cast<::SBSGEMSpectrometerTracker*>(p));
   }
   static void deleteArray_SBSGEMSpectrometerTracker(void *p) {
      delete [] (static_cast<::SBSGEMSpectrometerTracker*>(p));
   }
   static void destruct_SBSGEMSpectrometerTracker(void *p) {
      typedef ::SBSGEMSpectrometerTracker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSGEMSpectrometerTracker

//______________________________________________________________________________
void SBSGEMModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSGEMModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSGEMModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSGEMModule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSGEMModule(void *p) {
      delete (static_cast<::SBSGEMModule*>(p));
   }
   static void deleteArray_SBSGEMModule(void *p) {
      delete [] (static_cast<::SBSGEMModule*>(p));
   }
   static void destruct_SBSGEMModule(void *p) {
      typedef ::SBSGEMModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSGEMModule

//______________________________________________________________________________
void SBSGEMPolarimeterTracker::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSGEMPolarimeterTracker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSGEMPolarimeterTracker::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSGEMPolarimeterTracker::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSGEMPolarimeterTracker(void *p) {
      delete (static_cast<::SBSGEMPolarimeterTracker*>(p));
   }
   static void deleteArray_SBSGEMPolarimeterTracker(void *p) {
      delete [] (static_cast<::SBSGEMPolarimeterTracker*>(p));
   }
   static void destruct_SBSGEMPolarimeterTracker(void *p) {
      typedef ::SBSGEMPolarimeterTracker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSGEMPolarimeterTracker

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSDatacLcLADC(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SBSData::ADC : new ::SBSData::ADC;
   }
   static void *newArray_SBSDatacLcLADC(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SBSData::ADC[nElements] : new ::SBSData::ADC[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSDatacLcLADC(void *p) {
      delete (static_cast<::SBSData::ADC*>(p));
   }
   static void deleteArray_SBSDatacLcLADC(void *p) {
      delete [] (static_cast<::SBSData::ADC*>(p));
   }
   static void destruct_SBSDatacLcLADC(void *p) {
      typedef ::SBSData::ADC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSData::ADC

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSDatacLcLTDC(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SBSData::TDC : new ::SBSData::TDC;
   }
   static void *newArray_SBSDatacLcLTDC(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SBSData::TDC[nElements] : new ::SBSData::TDC[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSDatacLcLTDC(void *p) {
      delete (static_cast<::SBSData::TDC*>(p));
   }
   static void deleteArray_SBSDatacLcLTDC(void *p) {
      delete [] (static_cast<::SBSData::TDC*>(p));
   }
   static void destruct_SBSDatacLcLTDC(void *p) {
      typedef ::SBSData::TDC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSData::TDC

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSDatacLcLWaveform(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SBSData::Waveform : new ::SBSData::Waveform;
   }
   static void *newArray_SBSDatacLcLWaveform(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::SBSData::Waveform[nElements] : new ::SBSData::Waveform[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSDatacLcLWaveform(void *p) {
      delete (static_cast<::SBSData::Waveform*>(p));
   }
   static void deleteArray_SBSDatacLcLWaveform(void *p) {
      delete [] (static_cast<::SBSData::Waveform*>(p));
   }
   static void destruct_SBSDatacLcLWaveform(void *p) {
      typedef ::SBSData::Waveform current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSData::Waveform

//______________________________________________________________________________
void SBSElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSElement(void *p) {
      return  p ? new(p) ::SBSElement : new ::SBSElement;
   }
   static void *newArray_SBSElement(Long_t nElements, void *p) {
      return p ? new(p) ::SBSElement[nElements] : new ::SBSElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSElement(void *p) {
      delete (static_cast<::SBSElement*>(p));
   }
   static void deleteArray_SBSElement(void *p) {
      delete [] (static_cast<::SBSElement*>(p));
   }
   static void destruct_SBSElement(void *p) {
      typedef ::SBSElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSElement

//______________________________________________________________________________
void SBSGenericDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSGenericDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSGenericDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSGenericDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSGenericDetector(void *p) {
      delete (static_cast<::SBSGenericDetector*>(p));
   }
   static void deleteArray_SBSGenericDetector(void *p) {
      delete [] (static_cast<::SBSGenericDetector*>(p));
   }
   static void destruct_SBSGenericDetector(void *p) {
      typedef ::SBSGenericDetector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSGenericDetector

//______________________________________________________________________________
void SBSCalorimeterCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSCalorimeterCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSCalorimeterCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSCalorimeterCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSCalorimeterCluster(void *p) {
      return  p ? new(p) ::SBSCalorimeterCluster : new ::SBSCalorimeterCluster;
   }
   static void *newArray_SBSCalorimeterCluster(Long_t nElements, void *p) {
      return p ? new(p) ::SBSCalorimeterCluster[nElements] : new ::SBSCalorimeterCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSCalorimeterCluster(void *p) {
      delete (static_cast<::SBSCalorimeterCluster*>(p));
   }
   static void deleteArray_SBSCalorimeterCluster(void *p) {
      delete [] (static_cast<::SBSCalorimeterCluster*>(p));
   }
   static void destruct_SBSCalorimeterCluster(void *p) {
      typedef ::SBSCalorimeterCluster current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSCalorimeterCluster

//______________________________________________________________________________
void SBSCalorimeter::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSCalorimeter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSCalorimeter::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSCalorimeter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSCalorimeter(void *p) {
      delete (static_cast<::SBSCalorimeter*>(p));
   }
   static void deleteArray_SBSCalorimeter(void *p) {
      delete [] (static_cast<::SBSCalorimeter*>(p));
   }
   static void destruct_SBSCalorimeter(void *p) {
      typedef ::SBSCalorimeter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSCalorimeter

//______________________________________________________________________________
void SBSBBShower::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSBBShower.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSBBShower::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSBBShower::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSBBShower(void *p) {
      delete (static_cast<::SBSBBShower*>(p));
   }
   static void deleteArray_SBSBBShower(void *p) {
      delete [] (static_cast<::SBSBBShower*>(p));
   }
   static void destruct_SBSBBShower(void *p) {
      typedef ::SBSBBShower current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSBBShower

//______________________________________________________________________________
void SBSBBTotalShower::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSBBTotalShower.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSBBTotalShower::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSBBTotalShower::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSBBTotalShower(void *p) {
      delete (static_cast<::SBSBBTotalShower*>(p));
   }
   static void deleteArray_SBSBBTotalShower(void *p) {
      delete [] (static_cast<::SBSBBTotalShower*>(p));
   }
   static void destruct_SBSBBTotalShower(void *p) {
      typedef ::SBSBBTotalShower current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSBBTotalShower

//______________________________________________________________________________
void SBSCDet_Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSCDet_Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSCDet_Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSCDet_Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSCDet_Hit(void *p) {
      return  p ? new(p) ::SBSCDet_Hit : new ::SBSCDet_Hit;
   }
   static void *newArray_SBSCDet_Hit(Long_t nElements, void *p) {
      return p ? new(p) ::SBSCDet_Hit[nElements] : new ::SBSCDet_Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSCDet_Hit(void *p) {
      delete (static_cast<::SBSCDet_Hit*>(p));
   }
   static void deleteArray_SBSCDet_Hit(void *p) {
      delete [] (static_cast<::SBSCDet_Hit*>(p));
   }
   static void destruct_SBSCDet_Hit(void *p) {
      typedef ::SBSCDet_Hit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSCDet_Hit

//______________________________________________________________________________
void SBSCDet::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSCDet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSCDet::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSCDet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSCDet(void *p) {
      delete (static_cast<::SBSCDet*>(p));
   }
   static void deleteArray_SBSCDet(void *p) {
      delete [] (static_cast<::SBSCDet*>(p));
   }
   static void destruct_SBSCDet(void *p) {
      typedef ::SBSCDet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSCDet

//______________________________________________________________________________
void SBSScintPMT::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSScintPMT.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSScintPMT::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSScintPMT::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSScintPMT(void *p) {
      return  p ? new(p) ::SBSScintPMT : new ::SBSScintPMT;
   }
   static void *newArray_SBSScintPMT(Long_t nElements, void *p) {
      return p ? new(p) ::SBSScintPMT[nElements] : new ::SBSScintPMT[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSScintPMT(void *p) {
      delete (static_cast<::SBSScintPMT*>(p));
   }
   static void deleteArray_SBSScintPMT(void *p) {
      delete [] (static_cast<::SBSScintPMT*>(p));
   }
   static void destruct_SBSScintPMT(void *p) {
      typedef ::SBSScintPMT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSScintPMT

//______________________________________________________________________________
void SBSScintBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSScintBar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSScintBar::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSScintBar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSScintBar(void *p) {
      return  p ? new(p) ::SBSScintBar : new ::SBSScintBar;
   }
   static void *newArray_SBSScintBar(Long_t nElements, void *p) {
      return p ? new(p) ::SBSScintBar[nElements] : new ::SBSScintBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSScintBar(void *p) {
      delete (static_cast<::SBSScintBar*>(p));
   }
   static void deleteArray_SBSScintBar(void *p) {
      delete [] (static_cast<::SBSScintBar*>(p));
   }
   static void destruct_SBSScintBar(void *p) {
      typedef ::SBSScintBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSScintBar

//______________________________________________________________________________
void SBSScintHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSScintHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSScintHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSScintHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSScintHit(void *p) {
      return  p ? new(p) ::SBSScintHit : new ::SBSScintHit;
   }
   static void *newArray_SBSScintHit(Long_t nElements, void *p) {
      return p ? new(p) ::SBSScintHit[nElements] : new ::SBSScintHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSScintHit(void *p) {
      delete (static_cast<::SBSScintHit*>(p));
   }
   static void deleteArray_SBSScintHit(void *p) {
      delete [] (static_cast<::SBSScintHit*>(p));
   }
   static void destruct_SBSScintHit(void *p) {
      typedef ::SBSScintHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSScintHit

//______________________________________________________________________________
void SBSTimingHodoscopePMT::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSTimingHodoscopePMT.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSTimingHodoscopePMT::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSTimingHodoscopePMT::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSTimingHodoscopePMT(void *p) {
      delete (static_cast<::SBSTimingHodoscopePMT*>(p));
   }
   static void deleteArray_SBSTimingHodoscopePMT(void *p) {
      delete [] (static_cast<::SBSTimingHodoscopePMT*>(p));
   }
   static void destruct_SBSTimingHodoscopePMT(void *p) {
      typedef ::SBSTimingHodoscopePMT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSTimingHodoscopePMT

//______________________________________________________________________________
void SBSTimingHodoscopeBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSTimingHodoscopeBar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSTimingHodoscopeBar::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSTimingHodoscopeBar::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSTimingHodoscopeBar(void *p) {
      delete (static_cast<::SBSTimingHodoscopeBar*>(p));
   }
   static void deleteArray_SBSTimingHodoscopeBar(void *p) {
      delete [] (static_cast<::SBSTimingHodoscopeBar*>(p));
   }
   static void destruct_SBSTimingHodoscopeBar(void *p) {
      typedef ::SBSTimingHodoscopeBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSTimingHodoscopeBar

//______________________________________________________________________________
void SBSTimingHodoscopeCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSTimingHodoscopeCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSTimingHodoscopeCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSTimingHodoscopeCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSTimingHodoscopeCluster(void *p) {
      return  p ? new(p) ::SBSTimingHodoscopeCluster : new ::SBSTimingHodoscopeCluster;
   }
   static void *newArray_SBSTimingHodoscopeCluster(Long_t nElements, void *p) {
      return p ? new(p) ::SBSTimingHodoscopeCluster[nElements] : new ::SBSTimingHodoscopeCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSTimingHodoscopeCluster(void *p) {
      delete (static_cast<::SBSTimingHodoscopeCluster*>(p));
   }
   static void deleteArray_SBSTimingHodoscopeCluster(void *p) {
      delete [] (static_cast<::SBSTimingHodoscopeCluster*>(p));
   }
   static void destruct_SBSTimingHodoscopeCluster(void *p) {
      typedef ::SBSTimingHodoscopeCluster current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSTimingHodoscopeCluster

//______________________________________________________________________________
void SBSTimingHodoscope::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSTimingHodoscope.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSTimingHodoscope::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSTimingHodoscope::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSTimingHodoscope(void *p) {
      delete (static_cast<::SBSTimingHodoscope*>(p));
   }
   static void deleteArray_SBSTimingHodoscope(void *p) {
      delete [] (static_cast<::SBSTimingHodoscope*>(p));
   }
   static void destruct_SBSTimingHodoscope(void *p) {
      typedef ::SBSTimingHodoscope current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSTimingHodoscope

//______________________________________________________________________________
void SBSTdcHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSTdcHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSTdcHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSTdcHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSTdcHit(void *p) {
      return  p ? new(p) ::SBSTdcHit : new ::SBSTdcHit;
   }
   static void *newArray_SBSTdcHit(Long_t nElements, void *p) {
      return p ? new(p) ::SBSTdcHit[nElements] : new ::SBSTdcHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSTdcHit(void *p) {
      delete (static_cast<::SBSTdcHit*>(p));
   }
   static void deleteArray_SBSTdcHit(void *p) {
      delete [] (static_cast<::SBSTdcHit*>(p));
   }
   static void destruct_SBSTdcHit(void *p) {
      typedef ::SBSTdcHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSTdcHit

//______________________________________________________________________________
void SBSAdcHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSAdcHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSAdcHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSAdcHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSAdcHit(void *p) {
      return  p ? new(p) ::SBSAdcHit : new ::SBSAdcHit;
   }
   static void *newArray_SBSAdcHit(Long_t nElements, void *p) {
      return p ? new(p) ::SBSAdcHit[nElements] : new ::SBSAdcHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSAdcHit(void *p) {
      delete (static_cast<::SBSAdcHit*>(p));
   }
   static void deleteArray_SBSAdcHit(void *p) {
      delete [] (static_cast<::SBSAdcHit*>(p));
   }
   static void destruct_SBSAdcHit(void *p) {
      typedef ::SBSAdcHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSAdcHit

//______________________________________________________________________________
void SBSScintPartialHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSScintPartialHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSScintPartialHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSScintPartialHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSScintPartialHit(void *p) {
      return  p ? new(p) ::SBSScintPartialHit : new ::SBSScintPartialHit;
   }
   static void *newArray_SBSScintPartialHit(Long_t nElements, void *p) {
      return p ? new(p) ::SBSScintPartialHit[nElements] : new ::SBSScintPartialHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSScintPartialHit(void *p) {
      delete (static_cast<::SBSScintPartialHit*>(p));
   }
   static void deleteArray_SBSScintPartialHit(void *p) {
      delete [] (static_cast<::SBSScintPartialHit*>(p));
   }
   static void destruct_SBSScintPartialHit(void *p) {
      typedef ::SBSScintPartialHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSScintPartialHit

//______________________________________________________________________________
void SBSCherenkov_Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSCherenkov_Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSCherenkov_Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSCherenkov_Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSCherenkov_Hit(void *p) {
      return  p ? new(p) ::SBSCherenkov_Hit : new ::SBSCherenkov_Hit;
   }
   static void *newArray_SBSCherenkov_Hit(Long_t nElements, void *p) {
      return p ? new(p) ::SBSCherenkov_Hit[nElements] : new ::SBSCherenkov_Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSCherenkov_Hit(void *p) {
      delete (static_cast<::SBSCherenkov_Hit*>(p));
   }
   static void deleteArray_SBSCherenkov_Hit(void *p) {
      delete [] (static_cast<::SBSCherenkov_Hit*>(p));
   }
   static void destruct_SBSCherenkov_Hit(void *p) {
      typedef ::SBSCherenkov_Hit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSCherenkov_Hit

//______________________________________________________________________________
void SBSCherenkov_Cluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSCherenkov_Cluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSCherenkov_Cluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSCherenkov_Cluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSCherenkov_Cluster(void *p) {
      return  p ? new(p) ::SBSCherenkov_Cluster : new ::SBSCherenkov_Cluster;
   }
   static void *newArray_SBSCherenkov_Cluster(Long_t nElements, void *p) {
      return p ? new(p) ::SBSCherenkov_Cluster[nElements] : new ::SBSCherenkov_Cluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSCherenkov_Cluster(void *p) {
      delete (static_cast<::SBSCherenkov_Cluster*>(p));
   }
   static void deleteArray_SBSCherenkov_Cluster(void *p) {
      delete [] (static_cast<::SBSCherenkov_Cluster*>(p));
   }
   static void destruct_SBSCherenkov_Cluster(void *p) {
      typedef ::SBSCherenkov_Cluster current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSCherenkov_Cluster

//______________________________________________________________________________
void SBSCherenkovDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSCherenkovDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSCherenkovDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSCherenkovDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSCherenkovDetector(void *p) {
      delete (static_cast<::SBSCherenkovDetector*>(p));
   }
   static void deleteArray_SBSCherenkovDetector(void *p) {
      delete [] (static_cast<::SBSCherenkovDetector*>(p));
   }
   static void destruct_SBSCherenkovDetector(void *p) {
      typedef ::SBSCherenkovDetector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSCherenkovDetector

//______________________________________________________________________________
void SBSGRINCH::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSGRINCH.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSGRINCH::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSGRINCH::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSGRINCH(void *p) {
      delete (static_cast<::SBSGRINCH*>(p));
   }
   static void deleteArray_SBSGRINCH(void *p) {
      delete [] (static_cast<::SBSGRINCH*>(p));
   }
   static void destruct_SBSGRINCH(void *p) {
      typedef ::SBSGRINCH current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSGRINCH

//______________________________________________________________________________
void SBSScintPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSScintPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSScintPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSScintPlane::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSScintPlane(void *p) {
      return  p ? new(p) ::SBSScintPlane : new ::SBSScintPlane;
   }
   static void *newArray_SBSScintPlane(Long_t nElements, void *p) {
      return p ? new(p) ::SBSScintPlane[nElements] : new ::SBSScintPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSScintPlane(void *p) {
      delete (static_cast<::SBSScintPlane*>(p));
   }
   static void deleteArray_SBSScintPlane(void *p) {
      delete [] (static_cast<::SBSScintPlane*>(p));
   }
   static void destruct_SBSScintPlane(void *p) {
      typedef ::SBSScintPlane current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSScintPlane

//______________________________________________________________________________
void SBSEArm::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSEArm.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSEArm::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSEArm::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSEArm(void *p) {
      delete (static_cast<::SBSEArm*>(p));
   }
   static void deleteArray_SBSEArm(void *p) {
      delete [] (static_cast<::SBSEArm*>(p));
   }
   static void destruct_SBSEArm(void *p) {
      typedef ::SBSEArm current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSEArm

//______________________________________________________________________________
void SBSGEPEArm::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSGEPEArm.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSGEPEArm::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSGEPEArm::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSGEPEArm(void *p) {
      delete (static_cast<::SBSGEPEArm*>(p));
   }
   static void deleteArray_SBSGEPEArm(void *p) {
      delete [] (static_cast<::SBSGEPEArm*>(p));
   }
   static void destruct_SBSGEPEArm(void *p) {
      typedef ::SBSGEPEArm current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSGEPEArm

//______________________________________________________________________________
void SBSECal::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSECal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSECal::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSECal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSECal(void *p) {
      delete (static_cast<::SBSECal*>(p));
   }
   static void deleteArray_SBSECal(void *p) {
      delete [] (static_cast<::SBSECal*>(p));
   }
   static void destruct_SBSECal(void *p) {
      typedef ::SBSECal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSECal

//______________________________________________________________________________
void SBSHCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSHCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSHCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSHCal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSHCal(void *p) {
      delete (static_cast<::SBSHCal*>(p));
   }
   static void deleteArray_SBSHCal(void *p) {
      delete [] (static_cast<::SBSHCal*>(p));
   }
   static void destruct_SBSHCal(void *p) {
      typedef ::SBSHCal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSHCal

namespace Decoder {
//______________________________________________________________________________
void SBSDecodeF1TDCModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::SBSDecodeF1TDCModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::SBSDecodeF1TDCModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::SBSDecodeF1TDCModule::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecodercLcLSBSDecodeF1TDCModule(void *p) {
      delete (static_cast<::Decoder::SBSDecodeF1TDCModule*>(p));
   }
   static void deleteArray_DecodercLcLSBSDecodeF1TDCModule(void *p) {
      delete [] (static_cast<::Decoder::SBSDecodeF1TDCModule*>(p));
   }
   static void destruct_DecodercLcLSBSDecodeF1TDCModule(void *p) {
      typedef ::Decoder::SBSDecodeF1TDCModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::SBSDecodeF1TDCModule

namespace Decoder {
//______________________________________________________________________________
void SBSDecodeF1TDCLowResModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::SBSDecodeF1TDCLowResModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::SBSDecodeF1TDCLowResModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::SBSDecodeF1TDCLowResModule::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLSBSDecodeF1TDCLowResModule(void *p) {
      return  p ? new(p) ::Decoder::SBSDecodeF1TDCLowResModule : new ::Decoder::SBSDecodeF1TDCLowResModule;
   }
   static void *newArray_DecodercLcLSBSDecodeF1TDCLowResModule(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::SBSDecodeF1TDCLowResModule[nElements] : new ::Decoder::SBSDecodeF1TDCLowResModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLSBSDecodeF1TDCLowResModule(void *p) {
      delete (static_cast<::Decoder::SBSDecodeF1TDCLowResModule*>(p));
   }
   static void deleteArray_DecodercLcLSBSDecodeF1TDCLowResModule(void *p) {
      delete [] (static_cast<::Decoder::SBSDecodeF1TDCLowResModule*>(p));
   }
   static void destruct_DecodercLcLSBSDecodeF1TDCLowResModule(void *p) {
      typedef ::Decoder::SBSDecodeF1TDCLowResModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::SBSDecodeF1TDCLowResModule

namespace Decoder {
//______________________________________________________________________________
void SBSDecodeF1TDCHighResModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::SBSDecodeF1TDCHighResModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::SBSDecodeF1TDCHighResModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::SBSDecodeF1TDCHighResModule::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLSBSDecodeF1TDCHighResModule(void *p) {
      return  p ? new(p) ::Decoder::SBSDecodeF1TDCHighResModule : new ::Decoder::SBSDecodeF1TDCHighResModule;
   }
   static void *newArray_DecodercLcLSBSDecodeF1TDCHighResModule(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::SBSDecodeF1TDCHighResModule[nElements] : new ::Decoder::SBSDecodeF1TDCHighResModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLSBSDecodeF1TDCHighResModule(void *p) {
      delete (static_cast<::Decoder::SBSDecodeF1TDCHighResModule*>(p));
   }
   static void deleteArray_DecodercLcLSBSDecodeF1TDCHighResModule(void *p) {
      delete [] (static_cast<::Decoder::SBSDecodeF1TDCHighResModule*>(p));
   }
   static void destruct_DecodercLcLSBSDecodeF1TDCHighResModule(void *p) {
      typedef ::Decoder::SBSDecodeF1TDCHighResModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::SBSDecodeF1TDCHighResModule

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSSimDataDecoder(void *p) {
      delete (static_cast<::SBSSimDataDecoder*>(p));
   }
   static void deleteArray_SBSSimDataDecoder(void *p) {
      delete [] (static_cast<::SBSSimDataDecoder*>(p));
   }
   static void destruct_SBSSimDataDecoder(void *p) {
      typedef ::SBSSimDataDecoder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSSimDataDecoder

namespace ROOT {
   // Wrappers around operator new
   static void *new_gmn_tree_digitized(void *p) {
      return  p ? new(p) ::gmn_tree_digitized : new ::gmn_tree_digitized;
   }
   static void *newArray_gmn_tree_digitized(Long_t nElements, void *p) {
      return p ? new(p) ::gmn_tree_digitized[nElements] : new ::gmn_tree_digitized[nElements];
   }
   // Wrapper around operator delete
   static void delete_gmn_tree_digitized(void *p) {
      delete (static_cast<::gmn_tree_digitized*>(p));
   }
   static void deleteArray_gmn_tree_digitized(void *p) {
      delete [] (static_cast<::gmn_tree_digitized*>(p));
   }
   static void destruct_gmn_tree_digitized(void *p) {
      typedef ::gmn_tree_digitized current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::gmn_tree_digitized

namespace ROOT {
   // Wrappers around operator new
   static void *new_gep_tree_digitized(void *p) {
      return  p ? new(p) ::gep_tree_digitized : new ::gep_tree_digitized;
   }
   static void *newArray_gep_tree_digitized(Long_t nElements, void *p) {
      return p ? new(p) ::gep_tree_digitized[nElements] : new ::gep_tree_digitized[nElements];
   }
   // Wrapper around operator delete
   static void delete_gep_tree_digitized(void *p) {
      delete (static_cast<::gep_tree_digitized*>(p));
   }
   static void deleteArray_gep_tree_digitized(void *p) {
      delete [] (static_cast<::gep_tree_digitized*>(p));
   }
   static void destruct_gep_tree_digitized(void *p) {
      typedef ::gep_tree_digitized current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::gep_tree_digitized

namespace ROOT {
   // Wrappers around operator new
   static void *new_genrp_tree_digitized(void *p) {
      return  p ? new(p) ::genrp_tree_digitized : new ::genrp_tree_digitized;
   }
   static void *newArray_genrp_tree_digitized(Long_t nElements, void *p) {
      return p ? new(p) ::genrp_tree_digitized[nElements] : new ::genrp_tree_digitized[nElements];
   }
   // Wrapper around operator delete
   static void delete_genrp_tree_digitized(void *p) {
      delete (static_cast<::genrp_tree_digitized*>(p));
   }
   static void deleteArray_genrp_tree_digitized(void *p) {
      delete [] (static_cast<::genrp_tree_digitized*>(p));
   }
   static void destruct_genrp_tree_digitized(void *p) {
      typedef ::genrp_tree_digitized current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::genrp_tree_digitized

//______________________________________________________________________________
void SBSSimEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSSimEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSSimEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSSimEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSSimEvent(void *p) {
      delete (static_cast<::SBSSimEvent*>(p));
   }
   static void deleteArray_SBSSimEvent(void *p) {
      delete [] (static_cast<::SBSSimEvent*>(p));
   }
   static void destruct_SBSSimEvent(void *p) {
      typedef ::SBSSimEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSSimEvent

//______________________________________________________________________________
void SBSSimFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSSimFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSSimFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSSimFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSSimFile(void *p) {
      return  p ? new(p) ::SBSSimFile : new ::SBSSimFile;
   }
   static void *newArray_SBSSimFile(Long_t nElements, void *p) {
      return p ? new(p) ::SBSSimFile[nElements] : new ::SBSSimFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSSimFile(void *p) {
      delete (static_cast<::SBSSimFile*>(p));
   }
   static void deleteArray_SBSSimFile(void *p) {
      delete [] (static_cast<::SBSSimFile*>(p));
   }
   static void destruct_SBSSimFile(void *p) {
      typedef ::SBSSimFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSSimFile

//______________________________________________________________________________
void SBSSimDecoder::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSSimDecoder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSSimDecoder::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSSimDecoder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSSimDecoder(void *p) {
      return  p ? new(p) ::SBSSimDecoder : new ::SBSSimDecoder;
   }
   static void *newArray_SBSSimDecoder(Long_t nElements, void *p) {
      return p ? new(p) ::SBSSimDecoder[nElements] : new ::SBSSimDecoder[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSSimDecoder(void *p) {
      delete (static_cast<::SBSSimDecoder*>(p));
   }
   static void deleteArray_SBSSimDecoder(void *p) {
      delete [] (static_cast<::SBSSimDecoder*>(p));
   }
   static void destruct_SBSSimDecoder(void *p) {
      typedef ::SBSSimDecoder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSSimDecoder

namespace Decoder {
//______________________________________________________________________________
void SBSSimADC::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::SBSSimADC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::SBSSimADC::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::SBSSimADC::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLSBSSimADC(void *p) {
      return  p ? new(p) ::Decoder::SBSSimADC : new ::Decoder::SBSSimADC;
   }
   static void *newArray_DecodercLcLSBSSimADC(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::SBSSimADC[nElements] : new ::Decoder::SBSSimADC[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLSBSSimADC(void *p) {
      delete (static_cast<::Decoder::SBSSimADC*>(p));
   }
   static void deleteArray_DecodercLcLSBSSimADC(void *p) {
      delete [] (static_cast<::Decoder::SBSSimADC*>(p));
   }
   static void destruct_DecodercLcLSBSSimADC(void *p) {
      typedef ::Decoder::SBSSimADC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::SBSSimADC

namespace Decoder {
//______________________________________________________________________________
void SBSSimTDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::SBSSimTDC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::SBSSimTDC::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::SBSSimTDC::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLSBSSimTDC(void *p) {
      return  p ? new(p) ::Decoder::SBSSimTDC : new ::Decoder::SBSSimTDC;
   }
   static void *newArray_DecodercLcLSBSSimTDC(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::SBSSimTDC[nElements] : new ::Decoder::SBSSimTDC[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLSBSSimTDC(void *p) {
      delete (static_cast<::Decoder::SBSSimTDC*>(p));
   }
   static void deleteArray_DecodercLcLSBSSimTDC(void *p) {
      delete [] (static_cast<::Decoder::SBSSimTDC*>(p));
   }
   static void destruct_DecodercLcLSBSSimTDC(void *p) {
      typedef ::Decoder::SBSSimTDC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::SBSSimTDC

namespace Decoder {
//______________________________________________________________________________
void HCalLED::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::HCalLED.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::HCalLED::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::HCalLED::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLHCalLED(void *p) {
      return  p ? new(p) ::Decoder::HCalLED : new ::Decoder::HCalLED;
   }
   static void *newArray_DecodercLcLHCalLED(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::HCalLED[nElements] : new ::Decoder::HCalLED[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLHCalLED(void *p) {
      delete (static_cast<::Decoder::HCalLED*>(p));
   }
   static void deleteArray_DecodercLcLHCalLED(void *p) {
      delete [] (static_cast<::Decoder::HCalLED*>(p));
   }
   static void destruct_DecodercLcLHCalLED(void *p) {
      typedef ::Decoder::HCalLED current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::HCalLED

//______________________________________________________________________________
void SBSManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSManager(void *p) {
      return  p ? new(p) ::SBSManager : new ::SBSManager;
   }
   static void *newArray_SBSManager(Long_t nElements, void *p) {
      return p ? new(p) ::SBSManager[nElements] : new ::SBSManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSManager(void *p) {
      delete (static_cast<::SBSManager*>(p));
   }
   static void deleteArray_SBSManager(void *p) {
      delete [] (static_cast<::SBSManager*>(p));
   }
   static void destruct_SBSManager(void *p) {
      typedef ::SBSManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSManager

//______________________________________________________________________________
void SBSRPBeamSideHodo::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSRPBeamSideHodo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSRPBeamSideHodo::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSRPBeamSideHodo::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSRPBeamSideHodo(void *p) {
      delete (static_cast<::SBSRPBeamSideHodo*>(p));
   }
   static void deleteArray_SBSRPBeamSideHodo(void *p) {
      delete [] (static_cast<::SBSRPBeamSideHodo*>(p));
   }
   static void destruct_SBSRPBeamSideHodo(void *p) {
      typedef ::SBSRPBeamSideHodo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSRPBeamSideHodo

//______________________________________________________________________________
void SBSRPFarSideHodo::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSRPFarSideHodo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSRPFarSideHodo::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSRPFarSideHodo::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSRPFarSideHodo(void *p) {
      delete (static_cast<::SBSRPFarSideHodo*>(p));
   }
   static void deleteArray_SBSRPFarSideHodo(void *p) {
      delete [] (static_cast<::SBSRPFarSideHodo*>(p));
   }
   static void destruct_SBSRPFarSideHodo(void *p) {
      typedef ::SBSRPFarSideHodo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSRPFarSideHodo

//______________________________________________________________________________
void SBSCHAnalyzer::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSCHAnalyzer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSCHAnalyzer::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSCHAnalyzer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSCHAnalyzer(void *p) {
      delete (static_cast<::SBSCHAnalyzer*>(p));
   }
   static void deleteArray_SBSCHAnalyzer(void *p) {
      delete [] (static_cast<::SBSCHAnalyzer*>(p));
   }
   static void destruct_SBSCHAnalyzer(void *p) {
      typedef ::SBSCHAnalyzer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSCHAnalyzer

//______________________________________________________________________________
void SBSBPM::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSBPM.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSBPM::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSBPM::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSBPM(void *p) {
      delete (static_cast<::SBSBPM*>(p));
   }
   static void deleteArray_SBSBPM(void *p) {
      delete [] (static_cast<::SBSBPM*>(p));
   }
   static void destruct_SBSBPM(void *p) {
      typedef ::SBSBPM current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSBPM

//______________________________________________________________________________
void SBSRaster::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSRaster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSRaster::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSRaster::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSRaster(void *p) {
      delete (static_cast<::SBSRaster*>(p));
   }
   static void deleteArray_SBSRaster(void *p) {
      delete [] (static_cast<::SBSRaster*>(p));
   }
   static void destruct_SBSRaster(void *p) {
      typedef ::SBSRaster current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSRaster

//______________________________________________________________________________
void SBSRasteredBeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSRasteredBeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSRasteredBeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSRasteredBeam::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSRasteredBeam(void *p) {
      delete (static_cast<::SBSRasteredBeam*>(p));
   }
   static void deleteArray_SBSRasteredBeam(void *p) {
      delete [] (static_cast<::SBSRasteredBeam*>(p));
   }
   static void destruct_SBSRasteredBeam(void *p) {
      typedef ::SBSRasteredBeam current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSRasteredBeam

//______________________________________________________________________________
void LHRSScalerEvtHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class LHRSScalerEvtHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LHRSScalerEvtHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(LHRSScalerEvtHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LHRSScalerEvtHandler(void *p) {
      delete (static_cast<::LHRSScalerEvtHandler*>(p));
   }
   static void deleteArray_LHRSScalerEvtHandler(void *p) {
      delete [] (static_cast<::LHRSScalerEvtHandler*>(p));
   }
   static void destruct_LHRSScalerEvtHandler(void *p) {
      typedef ::LHRSScalerEvtHandler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::LHRSScalerEvtHandler

//______________________________________________________________________________
void SBSScalerEvtHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSScalerEvtHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSScalerEvtHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSScalerEvtHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSScalerEvtHandler(void *p) {
      delete (static_cast<::SBSScalerEvtHandler*>(p));
   }
   static void deleteArray_SBSScalerEvtHandler(void *p) {
      delete [] (static_cast<::SBSScalerEvtHandler*>(p));
   }
   static void destruct_SBSScalerEvtHandler(void *p) {
      typedef ::SBSScalerEvtHandler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSScalerEvtHandler

//______________________________________________________________________________
void SBSScalerHelicityReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSScalerHelicityReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSScalerHelicityReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSScalerHelicityReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSScalerHelicityReader(void *p) {
      return  p ? new(p) ::SBSScalerHelicityReader : new ::SBSScalerHelicityReader;
   }
   static void *newArray_SBSScalerHelicityReader(Long_t nElements, void *p) {
      return p ? new(p) ::SBSScalerHelicityReader[nElements] : new ::SBSScalerHelicityReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSScalerHelicityReader(void *p) {
      delete (static_cast<::SBSScalerHelicityReader*>(p));
   }
   static void deleteArray_SBSScalerHelicityReader(void *p) {
      delete [] (static_cast<::SBSScalerHelicityReader*>(p));
   }
   static void destruct_SBSScalerHelicityReader(void *p) {
      typedef ::SBSScalerHelicityReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSScalerHelicityReader

//______________________________________________________________________________
void SBSScalerHelicity::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSScalerHelicity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSScalerHelicity::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSScalerHelicity::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SBSScalerHelicity(void *p) {
      return  p ? new(p) ::SBSScalerHelicity : new ::SBSScalerHelicity;
   }
   static void *newArray_SBSScalerHelicity(Long_t nElements, void *p) {
      return p ? new(p) ::SBSScalerHelicity[nElements] : new ::SBSScalerHelicity[nElements];
   }
   // Wrapper around operator delete
   static void delete_SBSScalerHelicity(void *p) {
      delete (static_cast<::SBSScalerHelicity*>(p));
   }
   static void deleteArray_SBSScalerHelicity(void *p) {
      delete [] (static_cast<::SBSScalerHelicity*>(p));
   }
   static void destruct_SBSScalerHelicity(void *p) {
      typedef ::SBSScalerHelicity current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSScalerHelicity

namespace Decoder {
//______________________________________________________________________________
void VETROCModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::VETROCModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::VETROCModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::VETROCModule::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLVETROCModule(void *p) {
      return  p ? new(p) ::Decoder::VETROCModule : new ::Decoder::VETROCModule;
   }
   static void *newArray_DecodercLcLVETROCModule(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::VETROCModule[nElements] : new ::Decoder::VETROCModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLVETROCModule(void *p) {
      delete (static_cast<::Decoder::VETROCModule*>(p));
   }
   static void deleteArray_DecodercLcLVETROCModule(void *p) {
      delete [] (static_cast<::Decoder::VETROCModule*>(p));
   }
   static void destruct_DecodercLcLVETROCModule(void *p) {
      typedef ::Decoder::VETROCModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::VETROCModule

namespace Decoder {
//______________________________________________________________________________
void VETROCcdetModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::VETROCcdetModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::VETROCcdetModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::VETROCcdetModule::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLVETROCcdetModule(void *p) {
      return  p ? new(p) ::Decoder::VETROCcdetModule : new ::Decoder::VETROCcdetModule;
   }
   static void *newArray_DecodercLcLVETROCcdetModule(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::VETROCcdetModule[nElements] : new ::Decoder::VETROCcdetModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLVETROCcdetModule(void *p) {
      delete (static_cast<::Decoder::VETROCcdetModule*>(p));
   }
   static void deleteArray_DecodercLcLVETROCcdetModule(void *p) {
      delete [] (static_cast<::Decoder::VETROCcdetModule*>(p));
   }
   static void destruct_DecodercLcLVETROCcdetModule(void *p) {
      typedef ::Decoder::VETROCcdetModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::VETROCcdetModule

namespace Decoder {
//______________________________________________________________________________
void VTPModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::VTPModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::VTPModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::VTPModule::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLVTPModule(void *p) {
      return  p ? new(p) ::Decoder::VTPModule : new ::Decoder::VTPModule;
   }
   static void *newArray_DecodercLcLVTPModule(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::VTPModule[nElements] : new ::Decoder::VTPModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLVTPModule(void *p) {
      delete (static_cast<::Decoder::VTPModule*>(p));
   }
   static void deleteArray_DecodercLcLVTPModule(void *p) {
      delete [] (static_cast<::Decoder::VTPModule*>(p));
   }
   static void destruct_DecodercLcLVTPModule(void *p) {
      typedef ::Decoder::VTPModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::VTPModule

//______________________________________________________________________________
void SBSVTP::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSVTP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSVTP::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSVTP::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSVTP(void *p) {
      delete (static_cast<::SBSVTP*>(p));
   }
   static void deleteArray_SBSVTP(void *p) {
      delete [] (static_cast<::SBSVTP*>(p));
   }
   static void destruct_SBSVTP(void *p) {
      typedef ::SBSVTP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSVTP

//______________________________________________________________________________
void SBSGEPRegionOfInterestModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class SBSGEPRegionOfInterestModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SBSGEPRegionOfInterestModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(SBSGEPRegionOfInterestModule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_SBSGEPRegionOfInterestModule(void *p) {
      delete (static_cast<::SBSGEPRegionOfInterestModule*>(p));
   }
   static void deleteArray_SBSGEPRegionOfInterestModule(void *p) {
      delete [] (static_cast<::SBSGEPRegionOfInterestModule*>(p));
   }
   static void destruct_SBSGEPRegionOfInterestModule(void *p) {
      typedef ::SBSGEPRegionOfInterestModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SBSGEPRegionOfInterestModule

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<double> > >*)
   {
      vector<vector<vector<double> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<double> > >", -2, "vector", 389,
                  typeid(vector<vector<vector<double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<double> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<double> > > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<vector<double> > >","std::vector<std::vector<std::vector<double, std::allocator<double> >, std::allocator<std::vector<double, std::allocator<double> > > >, std::allocator<std::vector<std::vector<double, std::allocator<double> >, std::allocator<std::vector<double, std::allocator<double> > > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<vector<double> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<vector<double> > >*>(nullptr))->GetClass();
      vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<vector<double> > > : new vector<vector<vector<double> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<vector<double> > >[nElements] : new vector<vector<vector<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      delete (static_cast<vector<vector<vector<double> > >*>(p));
   }
   static void deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<vector<double> > >*>(p));
   }
   static void destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      typedef vector<vector<vector<double> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<double> > >

namespace ROOT {
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary();
   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p);
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<double> >*)
   {
      vector<vector<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<double> >", -2, "vector", 389,
                  typeid(vector<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<double> >) );
      instance.SetNew(&new_vectorlEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<double> >","std::vector<std::vector<double, std::allocator<double> >, std::allocator<std::vector<double, std::allocator<double> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<double> >*>(nullptr))->GetClass();
      vectorlEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<double> > : new vector<vector<double> >;
   }
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<double> >[nElements] : new vector<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete (static_cast<vector<vector<double> >*>(p));
   }
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete [] (static_cast<vector<vector<double> >*>(p));
   }
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p) {
      typedef vector<vector<double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<double> >

namespace ROOT {
   static TClass *vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR_Dictionary();
   static void vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR(void *p);
   static void deleteArray_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR(void *p);
   static void destruct_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<SBSSimDecoder::gemstripinfo> >*)
   {
      vector<vector<SBSSimDecoder::gemstripinfo> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<SBSSimDecoder::gemstripinfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<SBSSimDecoder::gemstripinfo> >", -2, "vector", 389,
                  typeid(vector<vector<SBSSimDecoder::gemstripinfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<SBSSimDecoder::gemstripinfo> >) );
      instance.SetNew(&new_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<SBSSimDecoder::gemstripinfo> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<SBSSimDecoder::gemstripinfo> >","std::vector<std::vector<SBSSimDecoder::gemstripinfo, std::allocator<SBSSimDecoder::gemstripinfo> >, std::allocator<std::vector<SBSSimDecoder::gemstripinfo, std::allocator<SBSSimDecoder::gemstripinfo> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<SBSSimDecoder::gemstripinfo> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<SBSSimDecoder::gemstripinfo> >*>(nullptr))->GetClass();
      vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<SBSSimDecoder::gemstripinfo> > : new vector<vector<SBSSimDecoder::gemstripinfo> >;
   }
   static void *newArray_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<SBSSimDecoder::gemstripinfo> >[nElements] : new vector<vector<SBSSimDecoder::gemstripinfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR(void *p) {
      delete (static_cast<vector<vector<SBSSimDecoder::gemstripinfo> >*>(p));
   }
   static void deleteArray_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR(void *p) {
      delete [] (static_cast<vector<vector<SBSSimDecoder::gemstripinfo> >*>(p));
   }
   static void destruct_vectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgR(void *p) {
      typedef vector<vector<SBSSimDecoder::gemstripinfo> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<SBSSimDecoder::gemstripinfo> >

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = nullptr);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 389,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<string>","std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr))->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete (static_cast<vector<string>*>(p));
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] (static_cast<vector<string>*>(p));
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 389,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 389,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlESBSTimingHodoscopePMTmUgR_Dictionary();
   static void vectorlESBSTimingHodoscopePMTmUgR_TClassManip(TClass*);
   static void *new_vectorlESBSTimingHodoscopePMTmUgR(void *p = nullptr);
   static void *newArray_vectorlESBSTimingHodoscopePMTmUgR(Long_t size, void *p);
   static void delete_vectorlESBSTimingHodoscopePMTmUgR(void *p);
   static void deleteArray_vectorlESBSTimingHodoscopePMTmUgR(void *p);
   static void destruct_vectorlESBSTimingHodoscopePMTmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SBSTimingHodoscopePMT*>*)
   {
      vector<SBSTimingHodoscopePMT*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SBSTimingHodoscopePMT*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SBSTimingHodoscopePMT*>", -2, "vector", 389,
                  typeid(vector<SBSTimingHodoscopePMT*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESBSTimingHodoscopePMTmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SBSTimingHodoscopePMT*>) );
      instance.SetNew(&new_vectorlESBSTimingHodoscopePMTmUgR);
      instance.SetNewArray(&newArray_vectorlESBSTimingHodoscopePMTmUgR);
      instance.SetDelete(&delete_vectorlESBSTimingHodoscopePMTmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlESBSTimingHodoscopePMTmUgR);
      instance.SetDestructor(&destruct_vectorlESBSTimingHodoscopePMTmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SBSTimingHodoscopePMT*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<SBSTimingHodoscopePMT*>","std::vector<SBSTimingHodoscopePMT*, std::allocator<SBSTimingHodoscopePMT*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<SBSTimingHodoscopePMT*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESBSTimingHodoscopePMTmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<SBSTimingHodoscopePMT*>*>(nullptr))->GetClass();
      vectorlESBSTimingHodoscopePMTmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESBSTimingHodoscopePMTmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESBSTimingHodoscopePMTmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSTimingHodoscopePMT*> : new vector<SBSTimingHodoscopePMT*>;
   }
   static void *newArray_vectorlESBSTimingHodoscopePMTmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSTimingHodoscopePMT*>[nElements] : new vector<SBSTimingHodoscopePMT*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESBSTimingHodoscopePMTmUgR(void *p) {
      delete (static_cast<vector<SBSTimingHodoscopePMT*>*>(p));
   }
   static void deleteArray_vectorlESBSTimingHodoscopePMTmUgR(void *p) {
      delete [] (static_cast<vector<SBSTimingHodoscopePMT*>*>(p));
   }
   static void destruct_vectorlESBSTimingHodoscopePMTmUgR(void *p) {
      typedef vector<SBSTimingHodoscopePMT*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<SBSTimingHodoscopePMT*>

namespace ROOT {
   static TClass *vectorlESBSTimingHodoscopeClustermUgR_Dictionary();
   static void vectorlESBSTimingHodoscopeClustermUgR_TClassManip(TClass*);
   static void *new_vectorlESBSTimingHodoscopeClustermUgR(void *p = nullptr);
   static void *newArray_vectorlESBSTimingHodoscopeClustermUgR(Long_t size, void *p);
   static void delete_vectorlESBSTimingHodoscopeClustermUgR(void *p);
   static void deleteArray_vectorlESBSTimingHodoscopeClustermUgR(void *p);
   static void destruct_vectorlESBSTimingHodoscopeClustermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SBSTimingHodoscopeCluster*>*)
   {
      vector<SBSTimingHodoscopeCluster*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SBSTimingHodoscopeCluster*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SBSTimingHodoscopeCluster*>", -2, "vector", 389,
                  typeid(vector<SBSTimingHodoscopeCluster*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESBSTimingHodoscopeClustermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SBSTimingHodoscopeCluster*>) );
      instance.SetNew(&new_vectorlESBSTimingHodoscopeClustermUgR);
      instance.SetNewArray(&newArray_vectorlESBSTimingHodoscopeClustermUgR);
      instance.SetDelete(&delete_vectorlESBSTimingHodoscopeClustermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlESBSTimingHodoscopeClustermUgR);
      instance.SetDestructor(&destruct_vectorlESBSTimingHodoscopeClustermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SBSTimingHodoscopeCluster*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<SBSTimingHodoscopeCluster*>","std::vector<SBSTimingHodoscopeCluster*, std::allocator<SBSTimingHodoscopeCluster*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<SBSTimingHodoscopeCluster*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESBSTimingHodoscopeClustermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<SBSTimingHodoscopeCluster*>*>(nullptr))->GetClass();
      vectorlESBSTimingHodoscopeClustermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESBSTimingHodoscopeClustermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESBSTimingHodoscopeClustermUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSTimingHodoscopeCluster*> : new vector<SBSTimingHodoscopeCluster*>;
   }
   static void *newArray_vectorlESBSTimingHodoscopeClustermUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSTimingHodoscopeCluster*>[nElements] : new vector<SBSTimingHodoscopeCluster*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESBSTimingHodoscopeClustermUgR(void *p) {
      delete (static_cast<vector<SBSTimingHodoscopeCluster*>*>(p));
   }
   static void deleteArray_vectorlESBSTimingHodoscopeClustermUgR(void *p) {
      delete [] (static_cast<vector<SBSTimingHodoscopeCluster*>*>(p));
   }
   static void destruct_vectorlESBSTimingHodoscopeClustermUgR(void *p) {
      typedef vector<SBSTimingHodoscopeCluster*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<SBSTimingHodoscopeCluster*>

namespace ROOT {
   static TClass *vectorlESBSTimingHodoscopeBarmUgR_Dictionary();
   static void vectorlESBSTimingHodoscopeBarmUgR_TClassManip(TClass*);
   static void *new_vectorlESBSTimingHodoscopeBarmUgR(void *p = nullptr);
   static void *newArray_vectorlESBSTimingHodoscopeBarmUgR(Long_t size, void *p);
   static void delete_vectorlESBSTimingHodoscopeBarmUgR(void *p);
   static void deleteArray_vectorlESBSTimingHodoscopeBarmUgR(void *p);
   static void destruct_vectorlESBSTimingHodoscopeBarmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SBSTimingHodoscopeBar*>*)
   {
      vector<SBSTimingHodoscopeBar*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SBSTimingHodoscopeBar*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SBSTimingHodoscopeBar*>", -2, "vector", 389,
                  typeid(vector<SBSTimingHodoscopeBar*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESBSTimingHodoscopeBarmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SBSTimingHodoscopeBar*>) );
      instance.SetNew(&new_vectorlESBSTimingHodoscopeBarmUgR);
      instance.SetNewArray(&newArray_vectorlESBSTimingHodoscopeBarmUgR);
      instance.SetDelete(&delete_vectorlESBSTimingHodoscopeBarmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlESBSTimingHodoscopeBarmUgR);
      instance.SetDestructor(&destruct_vectorlESBSTimingHodoscopeBarmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SBSTimingHodoscopeBar*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<SBSTimingHodoscopeBar*>","std::vector<SBSTimingHodoscopeBar*, std::allocator<SBSTimingHodoscopeBar*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<SBSTimingHodoscopeBar*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESBSTimingHodoscopeBarmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<SBSTimingHodoscopeBar*>*>(nullptr))->GetClass();
      vectorlESBSTimingHodoscopeBarmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESBSTimingHodoscopeBarmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESBSTimingHodoscopeBarmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSTimingHodoscopeBar*> : new vector<SBSTimingHodoscopeBar*>;
   }
   static void *newArray_vectorlESBSTimingHodoscopeBarmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSTimingHodoscopeBar*>[nElements] : new vector<SBSTimingHodoscopeBar*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESBSTimingHodoscopeBarmUgR(void *p) {
      delete (static_cast<vector<SBSTimingHodoscopeBar*>*>(p));
   }
   static void deleteArray_vectorlESBSTimingHodoscopeBarmUgR(void *p) {
      delete [] (static_cast<vector<SBSTimingHodoscopeBar*>*>(p));
   }
   static void destruct_vectorlESBSTimingHodoscopeBarmUgR(void *p) {
      typedef vector<SBSTimingHodoscopeBar*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<SBSTimingHodoscopeBar*>

namespace ROOT {
   static TClass *vectorlESBSSimDecodercLcLgemstripinfogR_Dictionary();
   static void vectorlESBSSimDecodercLcLgemstripinfogR_TClassManip(TClass*);
   static void *new_vectorlESBSSimDecodercLcLgemstripinfogR(void *p = nullptr);
   static void *newArray_vectorlESBSSimDecodercLcLgemstripinfogR(Long_t size, void *p);
   static void delete_vectorlESBSSimDecodercLcLgemstripinfogR(void *p);
   static void deleteArray_vectorlESBSSimDecodercLcLgemstripinfogR(void *p);
   static void destruct_vectorlESBSSimDecodercLcLgemstripinfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SBSSimDecoder::gemstripinfo>*)
   {
      vector<SBSSimDecoder::gemstripinfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SBSSimDecoder::gemstripinfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SBSSimDecoder::gemstripinfo>", -2, "vector", 389,
                  typeid(vector<SBSSimDecoder::gemstripinfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESBSSimDecodercLcLgemstripinfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SBSSimDecoder::gemstripinfo>) );
      instance.SetNew(&new_vectorlESBSSimDecodercLcLgemstripinfogR);
      instance.SetNewArray(&newArray_vectorlESBSSimDecodercLcLgemstripinfogR);
      instance.SetDelete(&delete_vectorlESBSSimDecodercLcLgemstripinfogR);
      instance.SetDeleteArray(&deleteArray_vectorlESBSSimDecodercLcLgemstripinfogR);
      instance.SetDestructor(&destruct_vectorlESBSSimDecodercLcLgemstripinfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SBSSimDecoder::gemstripinfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<SBSSimDecoder::gemstripinfo>","std::vector<SBSSimDecoder::gemstripinfo, std::allocator<SBSSimDecoder::gemstripinfo> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<SBSSimDecoder::gemstripinfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESBSSimDecodercLcLgemstripinfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<SBSSimDecoder::gemstripinfo>*>(nullptr))->GetClass();
      vectorlESBSSimDecodercLcLgemstripinfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESBSSimDecodercLcLgemstripinfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESBSSimDecodercLcLgemstripinfogR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSSimDecoder::gemstripinfo> : new vector<SBSSimDecoder::gemstripinfo>;
   }
   static void *newArray_vectorlESBSSimDecodercLcLgemstripinfogR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSSimDecoder::gemstripinfo>[nElements] : new vector<SBSSimDecoder::gemstripinfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESBSSimDecodercLcLgemstripinfogR(void *p) {
      delete (static_cast<vector<SBSSimDecoder::gemstripinfo>*>(p));
   }
   static void deleteArray_vectorlESBSSimDecodercLcLgemstripinfogR(void *p) {
      delete [] (static_cast<vector<SBSSimDecoder::gemstripinfo>*>(p));
   }
   static void destruct_vectorlESBSSimDecodercLcLgemstripinfogR(void *p) {
      typedef vector<SBSSimDecoder::gemstripinfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<SBSSimDecoder::gemstripinfo>

namespace ROOT {
   static TClass *vectorlESBSSimDecodercLcLdetchaninfogR_Dictionary();
   static void vectorlESBSSimDecodercLcLdetchaninfogR_TClassManip(TClass*);
   static void *new_vectorlESBSSimDecodercLcLdetchaninfogR(void *p = nullptr);
   static void *newArray_vectorlESBSSimDecodercLcLdetchaninfogR(Long_t size, void *p);
   static void delete_vectorlESBSSimDecodercLcLdetchaninfogR(void *p);
   static void deleteArray_vectorlESBSSimDecodercLcLdetchaninfogR(void *p);
   static void destruct_vectorlESBSSimDecodercLcLdetchaninfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SBSSimDecoder::detchaninfo>*)
   {
      vector<SBSSimDecoder::detchaninfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SBSSimDecoder::detchaninfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SBSSimDecoder::detchaninfo>", -2, "vector", 389,
                  typeid(vector<SBSSimDecoder::detchaninfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESBSSimDecodercLcLdetchaninfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SBSSimDecoder::detchaninfo>) );
      instance.SetNew(&new_vectorlESBSSimDecodercLcLdetchaninfogR);
      instance.SetNewArray(&newArray_vectorlESBSSimDecodercLcLdetchaninfogR);
      instance.SetDelete(&delete_vectorlESBSSimDecodercLcLdetchaninfogR);
      instance.SetDeleteArray(&deleteArray_vectorlESBSSimDecodercLcLdetchaninfogR);
      instance.SetDestructor(&destruct_vectorlESBSSimDecodercLcLdetchaninfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SBSSimDecoder::detchaninfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<SBSSimDecoder::detchaninfo>","std::vector<SBSSimDecoder::detchaninfo, std::allocator<SBSSimDecoder::detchaninfo> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<SBSSimDecoder::detchaninfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESBSSimDecodercLcLdetchaninfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<SBSSimDecoder::detchaninfo>*>(nullptr))->GetClass();
      vectorlESBSSimDecodercLcLdetchaninfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESBSSimDecodercLcLdetchaninfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESBSSimDecodercLcLdetchaninfogR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSSimDecoder::detchaninfo> : new vector<SBSSimDecoder::detchaninfo>;
   }
   static void *newArray_vectorlESBSSimDecodercLcLdetchaninfogR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSSimDecoder::detchaninfo>[nElements] : new vector<SBSSimDecoder::detchaninfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESBSSimDecodercLcLdetchaninfogR(void *p) {
      delete (static_cast<vector<SBSSimDecoder::detchaninfo>*>(p));
   }
   static void deleteArray_vectorlESBSSimDecodercLcLdetchaninfogR(void *p) {
      delete [] (static_cast<vector<SBSSimDecoder::detchaninfo>*>(p));
   }
   static void destruct_vectorlESBSSimDecodercLcLdetchaninfogR(void *p) {
      typedef vector<SBSSimDecoder::detchaninfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<SBSSimDecoder::detchaninfo>

namespace ROOT {
   static TClass *vectorlESBSElementmUgR_Dictionary();
   static void vectorlESBSElementmUgR_TClassManip(TClass*);
   static void *new_vectorlESBSElementmUgR(void *p = nullptr);
   static void *newArray_vectorlESBSElementmUgR(Long_t size, void *p);
   static void delete_vectorlESBSElementmUgR(void *p);
   static void deleteArray_vectorlESBSElementmUgR(void *p);
   static void destruct_vectorlESBSElementmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SBSElement*>*)
   {
      vector<SBSElement*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SBSElement*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SBSElement*>", -2, "vector", 389,
                  typeid(vector<SBSElement*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESBSElementmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SBSElement*>) );
      instance.SetNew(&new_vectorlESBSElementmUgR);
      instance.SetNewArray(&newArray_vectorlESBSElementmUgR);
      instance.SetDelete(&delete_vectorlESBSElementmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlESBSElementmUgR);
      instance.SetDestructor(&destruct_vectorlESBSElementmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SBSElement*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<SBSElement*>","std::vector<SBSElement*, std::allocator<SBSElement*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<SBSElement*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESBSElementmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<SBSElement*>*>(nullptr))->GetClass();
      vectorlESBSElementmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESBSElementmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESBSElementmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSElement*> : new vector<SBSElement*>;
   }
   static void *newArray_vectorlESBSElementmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SBSElement*>[nElements] : new vector<SBSElement*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESBSElementmUgR(void *p) {
      delete (static_cast<vector<SBSElement*>*>(p));
   }
   static void deleteArray_vectorlESBSElementmUgR(void *p) {
      delete [] (static_cast<vector<SBSElement*>*>(p));
   }
   static void destruct_vectorlESBSElementmUgR(void *p) {
      typedef vector<SBSElement*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<SBSElement*>

namespace ROOT {
   static TClass *setlEExp_tgR_Dictionary();
   static void setlEExp_tgR_TClassManip(TClass*);
   static void *new_setlEExp_tgR(void *p = nullptr);
   static void *newArray_setlEExp_tgR(Long_t size, void *p);
   static void delete_setlEExp_tgR(void *p);
   static void deleteArray_setlEExp_tgR(void *p);
   static void destruct_setlEExp_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<Exp_t>*)
   {
      set<Exp_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<Exp_t>));
      static ::ROOT::TGenericClassInfo 
         instance("set<Exp_t>", -2, "set", 94,
                  typeid(set<Exp_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEExp_tgR_Dictionary, isa_proxy, 0,
                  sizeof(set<Exp_t>) );
      instance.SetNew(&new_setlEExp_tgR);
      instance.SetNewArray(&newArray_setlEExp_tgR);
      instance.SetDelete(&delete_setlEExp_tgR);
      instance.SetDeleteArray(&deleteArray_setlEExp_tgR);
      instance.SetDestructor(&destruct_setlEExp_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<Exp_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<Exp_t>","std::set<Exp_t, std::less<Exp_t>, std::allocator<Exp_t> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<Exp_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEExp_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<Exp_t>*>(nullptr))->GetClass();
      setlEExp_tgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEExp_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEExp_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<Exp_t> : new set<Exp_t>;
   }
   static void *newArray_setlEExp_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<Exp_t>[nElements] : new set<Exp_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEExp_tgR(void *p) {
      delete (static_cast<set<Exp_t>*>(p));
   }
   static void deleteArray_setlEExp_tgR(void *p) {
      delete [] (static_cast<set<Exp_t>*>(p));
   }
   static void destruct_setlEExp_tgR(void *p) {
      typedef set<Exp_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<Exp_t>

namespace ROOT {
   static TClass *maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR_Dictionary();
   static void maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR(void *p = nullptr);
   static void *newArray_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >*)
   {
      map<string,vector<vector<SBSSimDecoder::gemstripinfo> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >", -2, "map", 100,
                  typeid(map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >) );
      instance.SetNew(&new_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<vector<SBSSimDecoder::gemstripinfo> > > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<std::vector<SBSSimDecoder::gemstripinfo, std::allocator<SBSSimDecoder::gemstripinfo> >, std::allocator<std::vector<SBSSimDecoder::gemstripinfo, std::allocator<SBSSimDecoder::gemstripinfo> > > >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<std::vector<SBSSimDecoder::gemstripinfo, std::allocator<SBSSimDecoder::gemstripinfo> >, std::allocator<std::vector<SBSSimDecoder::gemstripinfo, std::allocator<SBSSimDecoder::gemstripinfo> > > > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >*>(nullptr))->GetClass();
      maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<vector<SBSSimDecoder::gemstripinfo> > > : new map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >;
   }
   static void *newArray_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >[nElements] : new map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR(void *p) {
      delete (static_cast<map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >*>(p));
   }
   static void deleteArray_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR(void *p) {
      delete [] (static_cast<map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >*>(p));
   }
   static void destruct_maplEstringcOvectorlEvectorlESBSSimDecodercLcLgemstripinfogRsPgRsPgR(void *p) {
      typedef map<string,vector<vector<SBSSimDecoder::gemstripinfo> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<vector<SBSSimDecoder::gemstripinfo> > >

namespace ROOT {
   static TClass *maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR_Dictionary();
   static void maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR(void *p = nullptr);
   static void *newArray_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR(void *p);
   static void destruct_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<SBSSimDecoder::detchaninfo> >*)
   {
      map<string,vector<SBSSimDecoder::detchaninfo> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<SBSSimDecoder::detchaninfo> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<SBSSimDecoder::detchaninfo> >", -2, "map", 100,
                  typeid(map<string,vector<SBSSimDecoder::detchaninfo> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<SBSSimDecoder::detchaninfo> >) );
      instance.SetNew(&new_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<SBSSimDecoder::detchaninfo> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,vector<SBSSimDecoder::detchaninfo> >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<SBSSimDecoder::detchaninfo, std::allocator<SBSSimDecoder::detchaninfo> >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<SBSSimDecoder::detchaninfo, std::allocator<SBSSimDecoder::detchaninfo> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,vector<SBSSimDecoder::detchaninfo> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,vector<SBSSimDecoder::detchaninfo> >*>(nullptr))->GetClass();
      maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<SBSSimDecoder::detchaninfo> > : new map<string,vector<SBSSimDecoder::detchaninfo> >;
   }
   static void *newArray_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<SBSSimDecoder::detchaninfo> >[nElements] : new map<string,vector<SBSSimDecoder::detchaninfo> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR(void *p) {
      delete (static_cast<map<string,vector<SBSSimDecoder::detchaninfo> >*>(p));
   }
   static void deleteArray_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR(void *p) {
      delete [] (static_cast<map<string,vector<SBSSimDecoder::detchaninfo> >*>(p));
   }
   static void destruct_maplEstringcOvectorlESBSSimDecodercLcLdetchaninfogRsPgR(void *p) {
      typedef map<string,vector<SBSSimDecoder::detchaninfo> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<SBSSimDecoder::detchaninfo> >

namespace {
  void TriggerDictionaryInitialization_libsbs_Impl() {
    static const char* headers[] = {
"MPDModule.h",
"MPDModuleVMEv4.h",
"SBSBigBite.h",
"SBSGEMTrackerBase.h",
"SBSGEMSpectrometerTracker.h",
"SBSGEMModule.h",
"SBSGEMPolarimeterTracker.h",
"SBSBBShower.h",
"SBSBBTotalShower.h",
"SBSCDet.h",
"SBSCDet_Hit.h",
"SBSScintHit.h",
"SBSScintPMT.h",
"SBSTimingHodoscope.h",
"SBSScintBar.h",
"SBSTdcHit.h",
"SBSAdcHit.h",
"SBSScintPartialHit.h",
"SBSCherenkovDetector.h",
"SBSCherenkov_ClusterList.h",
"SBSGRINCH.h",
"SBSScintPlane.h",
"SBSEArm.h",
"SBSGEPEArm.h",
"SBSECal.h",
"SBSHCal.h",
"SBSDecodeF1TDCModule.h",
"SBSCalorimeter.h",
"SBSGenericDetector.h",
"SBSData.h",
"SBSElement.h",
"SBSCalorimeterCluster.h",
"SBSSimDataDecoder.h",
"SBSSimDecoder.h",
"SBSSimADC.h",
"SBSSimTDC.h",
"SBSHCalLEDModule.h",
"SBSManager.h",
"SBSSimFile.h",
"SBSSimEvent.h",
"SBSRPBeamSideHodo.h",
"SBSRPFarSideHodo.h",
"SBSCHAnalyzer.h",
"SBSTimingHodoscopePMT.h",
"SBSTimingHodoscopeBar.h",
"SBSTimingHodoscopeCluster.h",
"SBSBPM.h",
"SBSRaster.h",
"SBSRasteredBeam.h",
"LHRSScalerEvtHandler.h",
"SBSScalerEvtHandler.h",
"SBSScalerHelicity.h",
"SBSScalerHelicityReader.h",
"gmn_tree_digitized.h",
"genrp_tree_digitized.h",
"gep_tree_digitized.h",
"VETROC.h",
"VETROCcdet.h",
"VTPModule.h",
"SBSVTP.h",
"SBSGEPRegionOfInterestModule.h",
"DebugDef.h",
"Helper.h",
nullptr
    };
    static const char* includePaths[] = {
"/adaqfs/home/a-onl/brash/CDet_replay/git-repo/sbs_devel/SBS-offline",
"/adaqfs/apps/ROOT/6.32-08/el9/RelWithDebInfo/include",
"/adaqfs/apps/analyzer/1.7.12-sbs3/el9/RelWithDebInfo/include",
"/adaqfs/home/a-onl/brash/CDet_replay/git-repo/sbs_devel/SBS-offline",
"/adaqfs/apps/ROOT/6.32-08/el9/RelWithDebInfo/include/",
"/adaqfs/home/a-onl/brash/CDet_replay/git-repo/sbs_devel/build/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libsbs dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace Decoder{class __attribute__((annotate("$clingAutoload$MPDModule.h")))  MPDModule;}
namespace Decoder{class __attribute__((annotate("$clingAutoload$MPDModuleVMEv4.h")))  MPDModuleVMEv4;}
class __attribute__((annotate("$clingAutoload$SBSBigBite.h")))  SBSBigBite;
class __attribute__((annotate("$clingAutoload$SBSGEMSpectrometerTracker.h")))  SBSGEMSpectrometerTracker;
class __attribute__((annotate("$clingAutoload$SBSGEMModule.h")))  SBSGEMModule;
class __attribute__((annotate("$clingAutoload$SBSGEMPolarimeterTracker.h")))  SBSGEMPolarimeterTracker;
namespace SBSData{class __attribute__((annotate("$clingAutoload$SBSData.h")))  __attribute__((annotate("$clingAutoload$SBSBBShower.h")))  ADC;}
namespace SBSData{class __attribute__((annotate("$clingAutoload$SBSData.h")))  __attribute__((annotate("$clingAutoload$SBSBBShower.h")))  TDC;}
namespace SBSData{class __attribute__((annotate("$clingAutoload$SBSData.h")))  __attribute__((annotate("$clingAutoload$SBSBBShower.h")))  Waveform;}
class __attribute__((annotate("$clingAutoload$SBSElement.h")))  __attribute__((annotate("$clingAutoload$SBSBBShower.h")))  SBSElement;
class __attribute__((annotate("$clingAutoload$SBSGenericDetector.h")))  __attribute__((annotate("$clingAutoload$SBSBBShower.h")))  SBSGenericDetector;
class __attribute__((annotate("$clingAutoload$SBSCalorimeterCluster.h")))  __attribute__((annotate("$clingAutoload$SBSBBShower.h")))  SBSCalorimeterCluster;
class __attribute__((annotate("$clingAutoload$SBSCalorimeter.h")))  __attribute__((annotate("$clingAutoload$SBSBBShower.h")))  SBSCalorimeter;
class __attribute__((annotate("$clingAutoload$SBSBBShower.h")))  SBSBBShower;
class __attribute__((annotate("$clingAutoload$SBSBBTotalShower.h")))  SBSBBTotalShower;
class __attribute__((annotate("$clingAutoload$SBSCDet_Hit.h")))  __attribute__((annotate("$clingAutoload$SBSCDet.h")))  SBSCDet_Hit;
class __attribute__((annotate("$clingAutoload$SBSCDet.h")))  SBSCDet;
class __attribute__((annotate("$clingAutoload$SBSScintPMT.h")))  __attribute__((annotate("$clingAutoload$SBSScintHit.h")))  SBSScintPMT;
class __attribute__((annotate("$clingAutoload$SBSScintBar.h")))  __attribute__((annotate("$clingAutoload$SBSScintHit.h")))  SBSScintBar;
class __attribute__((annotate("$clingAutoload$SBSScintHit.h")))  SBSScintHit;
class __attribute__((annotate("$clingAutoload$SBSTimingHodoscopePMT.h")))  __attribute__((annotate("$clingAutoload$SBSTimingHodoscope.h")))  SBSTimingHodoscopePMT;
class __attribute__((annotate("$clingAutoload$SBSTimingHodoscopeBar.h")))  __attribute__((annotate("$clingAutoload$SBSTimingHodoscope.h")))  SBSTimingHodoscopeBar;
class __attribute__((annotate("$clingAutoload$SBSTimingHodoscopeCluster.h")))  __attribute__((annotate("$clingAutoload$SBSTimingHodoscope.h")))  SBSTimingHodoscopeCluster;
class __attribute__((annotate("$clingAutoload$SBSTimingHodoscope.h")))  SBSTimingHodoscope;
class __attribute__((annotate("$clingAutoload$SBSTdcHit.h")))  SBSTdcHit;
class __attribute__((annotate("$clingAutoload$SBSAdcHit.h")))  SBSAdcHit;
class __attribute__((annotate("$clingAutoload$SBSScintPartialHit.h")))  SBSScintPartialHit;
class __attribute__((annotate("$clingAutoload$SBSCherenkov_ClusterList.h")))  __attribute__((annotate("$clingAutoload$SBSCherenkovDetector.h")))  SBSCherenkov_Hit;
class __attribute__((annotate("$clingAutoload$SBSCherenkov_ClusterList.h")))  __attribute__((annotate("$clingAutoload$SBSCherenkovDetector.h")))  SBSCherenkov_Cluster;
class __attribute__((annotate("$clingAutoload$SBSCherenkovDetector.h")))  SBSCherenkovDetector;
class __attribute__((annotate("$clingAutoload$SBSGRINCH.h")))  SBSGRINCH;
class __attribute__((annotate("$clingAutoload$SBSScintPlane.h")))  SBSScintPlane;
class __attribute__((annotate("$clingAutoload$SBSEArm.h")))  SBSEArm;
class __attribute__((annotate("$clingAutoload$SBSGEPEArm.h")))  SBSGEPEArm;
class __attribute__((annotate("$clingAutoload$SBSECal.h")))  SBSECal;
class __attribute__((annotate("$clingAutoload$SBSHCal.h")))  SBSHCal;
namespace Decoder{class __attribute__((annotate("$clingAutoload$SBSDecodeF1TDCModule.h")))  SBSDecodeF1TDCModule;}
namespace Decoder{class __attribute__((annotate("$clingAutoload$SBSDecodeF1TDCModule.h")))  SBSDecodeF1TDCLowResModule;}
namespace Decoder{class __attribute__((annotate("$clingAutoload$SBSDecodeF1TDCModule.h")))  SBSDecodeF1TDCHighResModule;}
class __attribute__((annotate("$clingAutoload$SBSSimDataDecoder.h")))  SBSSimDataDecoder;
class __attribute__((annotate("$clingAutoload$gmn_tree_digitized.h")))  __attribute__((annotate("$clingAutoload$SBSSimDecoder.h")))  gmn_tree_digitized;
class __attribute__((annotate("$clingAutoload$gep_tree_digitized.h")))  __attribute__((annotate("$clingAutoload$SBSSimDecoder.h")))  gep_tree_digitized;
class __attribute__((annotate("$clingAutoload$genrp_tree_digitized.h")))  __attribute__((annotate("$clingAutoload$SBSSimDecoder.h")))  genrp_tree_digitized;
class __attribute__((annotate("$clingAutoload$SBSSimEvent.h")))  __attribute__((annotate("$clingAutoload$SBSSimDecoder.h")))  SBSSimEvent;
class __attribute__((annotate("$clingAutoload$SBSSimFile.h")))  __attribute__((annotate("$clingAutoload$SBSSimDecoder.h")))  SBSSimFile;
class __attribute__((annotate("$clingAutoload$SBSSimDecoder.h")))  SBSSimDecoder;
namespace Decoder{class __attribute__((annotate("$clingAutoload$SBSSimADC.h")))  SBSSimADC;}
namespace Decoder{class __attribute__((annotate("$clingAutoload$SBSSimTDC.h")))  SBSSimTDC;}
namespace Decoder{class __attribute__((annotate("$clingAutoload$SBSHCalLEDModule.h")))  HCalLED;}
class __attribute__((annotate("$clingAutoload$SBSManager.h")))  SBSManager;
class __attribute__((annotate("$clingAutoload$SBSRPBeamSideHodo.h")))  SBSRPBeamSideHodo;
class __attribute__((annotate("$clingAutoload$SBSRPFarSideHodo.h")))  SBSRPFarSideHodo;
class __attribute__((annotate("$clingAutoload$SBSCHAnalyzer.h")))  SBSCHAnalyzer;
class __attribute__((annotate("$clingAutoload$SBSBPM.h")))  SBSBPM;
class __attribute__((annotate("$clingAutoload$SBSRaster.h")))  SBSRaster;
class __attribute__((annotate("$clingAutoload$SBSRasteredBeam.h")))  SBSRasteredBeam;
class __attribute__((annotate("$clingAutoload$LHRSScalerEvtHandler.h")))  LHRSScalerEvtHandler;
class __attribute__((annotate("$clingAutoload$SBSScalerEvtHandler.h")))  SBSScalerEvtHandler;
class __attribute__((annotate("$clingAutoload$SBSScalerHelicityReader.h")))  __attribute__((annotate("$clingAutoload$SBSScalerHelicity.h")))  SBSScalerHelicityReader;
class __attribute__((annotate("$clingAutoload$SBSScalerHelicity.h")))  SBSScalerHelicity;
namespace Decoder{class __attribute__((annotate("$clingAutoload$VETROC.h")))  VETROCModule;}
namespace Decoder{class __attribute__((annotate("$clingAutoload$VETROCcdet.h")))  VETROCcdetModule;}
namespace Decoder{class __attribute__((annotate("$clingAutoload$VTPModule.h")))  VTPModule;}
class __attribute__((annotate("$clingAutoload$SBSVTP.h")))  SBSVTP;
class __attribute__((annotate("$clingAutoload$SBSGEPRegionOfInterestModule.h")))  SBSGEPRegionOfInterestModule;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libsbs dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MPDModule.h"
#include "MPDModuleVMEv4.h"
#include "SBSBigBite.h"
#include "SBSGEMTrackerBase.h"
#include "SBSGEMSpectrometerTracker.h"
#include "SBSGEMModule.h"
#include "SBSGEMPolarimeterTracker.h"
#include "SBSBBShower.h"
#include "SBSBBTotalShower.h"
#include "SBSCDet.h"
#include "SBSCDet_Hit.h"
#include "SBSScintHit.h"
#include "SBSScintPMT.h"
#include "SBSTimingHodoscope.h"
#include "SBSScintBar.h"
#include "SBSTdcHit.h"
#include "SBSAdcHit.h"
#include "SBSScintPartialHit.h"
#include "SBSCherenkovDetector.h"
#include "SBSCherenkov_ClusterList.h"
#include "SBSGRINCH.h"
#include "SBSScintPlane.h"
#include "SBSEArm.h"
#include "SBSGEPEArm.h"
#include "SBSECal.h"
#include "SBSHCal.h"
#include "SBSDecodeF1TDCModule.h"
#include "SBSCalorimeter.h"
#include "SBSGenericDetector.h"
#include "SBSData.h"
#include "SBSElement.h"
#include "SBSCalorimeterCluster.h"
#include "SBSSimDataDecoder.h"
#include "SBSSimDecoder.h"
#include "SBSSimADC.h"
#include "SBSSimTDC.h"
#include "SBSHCalLEDModule.h"
#include "SBSManager.h"
#include "SBSSimFile.h"
#include "SBSSimEvent.h"
#include "SBSRPBeamSideHodo.h"
#include "SBSRPFarSideHodo.h"
#include "SBSCHAnalyzer.h"
#include "SBSTimingHodoscopePMT.h"
#include "SBSTimingHodoscopeBar.h"
#include "SBSTimingHodoscopeCluster.h"
#include "SBSBPM.h"
#include "SBSRaster.h"
#include "SBSRasteredBeam.h"
#include "LHRSScalerEvtHandler.h"
#include "SBSScalerEvtHandler.h"
#include "SBSScalerHelicity.h"
#include "SBSScalerHelicityReader.h"
#include "gmn_tree_digitized.h"
#include "genrp_tree_digitized.h"
#include "gep_tree_digitized.h"
#include "VETROC.h"
#include "VETROCcdet.h"
#include "VTPModule.h"
#include "SBSVTP.h"
#include "SBSGEPRegionOfInterestModule.h"
#include "DebugDef.h"
#include "Helper.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Decoder::HCalLED", payloadCode, "@",
"Decoder::MPDModule", payloadCode, "@",
"Decoder::MPDModuleVMEv4", payloadCode, "@",
"Decoder::SBSDecodeF1TDCHighResModule", payloadCode, "@",
"Decoder::SBSDecodeF1TDCLowResModule", payloadCode, "@",
"Decoder::SBSDecodeF1TDCModule", payloadCode, "@",
"Decoder::SBSSimADC", payloadCode, "@",
"Decoder::SBSSimTDC", payloadCode, "@",
"Decoder::VETROCModule", payloadCode, "@",
"Decoder::VETROCcdetModule", payloadCode, "@",
"Decoder::VTPModule", payloadCode, "@",
"LHRSScalerEvtHandler", payloadCode, "@",
"SBSAdcHit", payloadCode, "@",
"SBSBBShower", payloadCode, "@",
"SBSBBTotalShower", payloadCode, "@",
"SBSBPM", payloadCode, "@",
"SBSBigBite", payloadCode, "@",
"SBSCDet", payloadCode, "@",
"SBSCDet_Hit", payloadCode, "@",
"SBSCHAnalyzer", payloadCode, "@",
"SBSCalorimeter", payloadCode, "@",
"SBSCalorimeterCluster", payloadCode, "@",
"SBSCherenkovDetector", payloadCode, "@",
"SBSCherenkov_Cluster", payloadCode, "@",
"SBSCherenkov_Hit", payloadCode, "@",
"SBSData::ADC", payloadCode, "@",
"SBSData::TDC", payloadCode, "@",
"SBSData::Waveform", payloadCode, "@",
"SBSEArm", payloadCode, "@",
"SBSECal", payloadCode, "@",
"SBSElement", payloadCode, "@",
"SBSGEMModule", payloadCode, "@",
"SBSGEMPolarimeterTracker", payloadCode, "@",
"SBSGEMSpectrometerTracker", payloadCode, "@",
"SBSGEPEArm", payloadCode, "@",
"SBSGEPRegionOfInterestModule", payloadCode, "@",
"SBSGRINCH", payloadCode, "@",
"SBSGenericDetector", payloadCode, "@",
"SBSHCal", payloadCode, "@",
"SBSManager", payloadCode, "@",
"SBSRPBeamSideHodo", payloadCode, "@",
"SBSRPFarSideHodo", payloadCode, "@",
"SBSRaster", payloadCode, "@",
"SBSRasteredBeam", payloadCode, "@",
"SBSScalerEvtHandler", payloadCode, "@",
"SBSScalerHelicity", payloadCode, "@",
"SBSScalerHelicityReader", payloadCode, "@",
"SBSScintBar", payloadCode, "@",
"SBSScintHit", payloadCode, "@",
"SBSScintPMT", payloadCode, "@",
"SBSScintPartialHit", payloadCode, "@",
"SBSScintPlane", payloadCode, "@",
"SBSSimDataDecoder", payloadCode, "@",
"SBSSimDecoder", payloadCode, "@",
"SBSSimEvent", payloadCode, "@",
"SBSSimFile", payloadCode, "@",
"SBSTdcHit", payloadCode, "@",
"SBSTimingHodoscope", payloadCode, "@",
"SBSTimingHodoscopeBar", payloadCode, "@",
"SBSTimingHodoscopeCluster", payloadCode, "@",
"SBSTimingHodoscopePMT", payloadCode, "@",
"SBSVTP", payloadCode, "@",
"genrp_tree_digitized", payloadCode, "@",
"gep_tree_digitized", payloadCode, "@",
"gmn_tree_digitized", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libsbs",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libsbs_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libsbs_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libsbs() {
  TriggerDictionaryInitialization_libsbs_Impl();
}
