// Copyright (c) 2016 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <tixi.h>
#include <string>
#include <boost/optional.hpp>
#include "tigl_internal.h"
#include "CPACSGenericMass.h"
#include "CPACSMAuxillaryPowerUnit.h"
#include "CPACSMHydraulicGeneration.h"
#include "CPACSMHydraulicDistribution.h"
#include "CPACSMAirConditioning.h"
#include "CPACSMDeIcing.h"
#include "CPACSMFireProtection.h"
#include "CPACSMFlightControls.h"
#include "CPACSMInstrumentPanel.h"
#include "CPACSMAutomaticFlightSystem.h"
#include "CPACSMCommunication.h"
#include "CPACSMElectricalGeneration.h"
#include "CPACSMElectricalDistribution.h"
#include "CPACSMIntegratedModularAvionics.h"
#include "CPACSMMillitarySystems.h"
#include "CPACSMNavigation.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSMManufacturerEmpty
        
        // generated from /xsd:schema/xsd:complexType[601]
        class CPACSMSystems
        {
        public:
            TIGL_EXPORT CPACSMSystems();
            TIGL_EXPORT virtual ~CPACSMSystems();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const CPACSGenericMass& GetMassDescription() const;
            TIGL_EXPORT CPACSGenericMass& GetMassDescription();
            
            TIGL_EXPORT bool HasMAuxillaryPowerUnit() const;
            TIGL_EXPORT const CPACSMAuxillaryPowerUnit& GetMAuxillaryPowerUnit() const;
            TIGL_EXPORT CPACSMAuxillaryPowerUnit& GetMAuxillaryPowerUnit();
            
            TIGL_EXPORT bool HasMHydraulicGeneration() const;
            TIGL_EXPORT const CPACSMHydraulicGeneration& GetMHydraulicGeneration() const;
            TIGL_EXPORT CPACSMHydraulicGeneration& GetMHydraulicGeneration();
            
            TIGL_EXPORT bool HasMHydraulicDistribution() const;
            TIGL_EXPORT const CPACSMHydraulicDistribution& GetMHydraulicDistribution() const;
            TIGL_EXPORT CPACSMHydraulicDistribution& GetMHydraulicDistribution();
            
            TIGL_EXPORT bool HasMAirConditioning() const;
            TIGL_EXPORT const CPACSMAirConditioning& GetMAirConditioning() const;
            TIGL_EXPORT CPACSMAirConditioning& GetMAirConditioning();
            
            TIGL_EXPORT bool HasMDeIcing() const;
            TIGL_EXPORT const CPACSMDeIcing& GetMDeIcing() const;
            TIGL_EXPORT CPACSMDeIcing& GetMDeIcing();
            
            TIGL_EXPORT bool HasMFireProtection() const;
            TIGL_EXPORT const CPACSMFireProtection& GetMFireProtection() const;
            TIGL_EXPORT CPACSMFireProtection& GetMFireProtection();
            
            TIGL_EXPORT bool HasMFlightControls() const;
            TIGL_EXPORT const CPACSMFlightControls& GetMFlightControls() const;
            TIGL_EXPORT CPACSMFlightControls& GetMFlightControls();
            
            TIGL_EXPORT bool HasMInstrumentPanel() const;
            TIGL_EXPORT const CPACSMInstrumentPanel& GetMInstrumentPanel() const;
            TIGL_EXPORT CPACSMInstrumentPanel& GetMInstrumentPanel();
            
            TIGL_EXPORT bool HasMAutomaticFlightSystem() const;
            TIGL_EXPORT const CPACSMAutomaticFlightSystem& GetMAutomaticFlightSystem() const;
            TIGL_EXPORT CPACSMAutomaticFlightSystem& GetMAutomaticFlightSystem();
            
            TIGL_EXPORT bool HasMCommunication() const;
            TIGL_EXPORT const CPACSMCommunication& GetMCommunication() const;
            TIGL_EXPORT CPACSMCommunication& GetMCommunication();
            
            TIGL_EXPORT bool HasMElectricalGeneration() const;
            TIGL_EXPORT const CPACSMElectricalGeneration& GetMElectricalGeneration() const;
            TIGL_EXPORT CPACSMElectricalGeneration& GetMElectricalGeneration();
            
            TIGL_EXPORT bool HasMElectricalDistribution() const;
            TIGL_EXPORT const CPACSMElectricalDistribution& GetMElectricalDistribution() const;
            TIGL_EXPORT CPACSMElectricalDistribution& GetMElectricalDistribution();
            
            TIGL_EXPORT bool HasMIntegratedModularAvionics() const;
            TIGL_EXPORT const CPACSMIntegratedModularAvionics& GetMIntegratedModularAvionics() const;
            TIGL_EXPORT CPACSMIntegratedModularAvionics& GetMIntegratedModularAvionics();
            
            TIGL_EXPORT bool HasMMillitarySystems() const;
            TIGL_EXPORT const CPACSMMillitarySystems& GetMMillitarySystems() const;
            TIGL_EXPORT CPACSMMillitarySystems& GetMMillitarySystems();
            
            TIGL_EXPORT bool HasMNavigation() const;
            TIGL_EXPORT const CPACSMNavigation& GetMNavigation() const;
            TIGL_EXPORT CPACSMNavigation& GetMNavigation();
            
        protected:
            CPACSGenericMass                                 m_massDescription;
            boost::optional<CPACSMAuxillaryPowerUnit>        m_mAuxillaryPowerUnit;
            boost::optional<CPACSMHydraulicGeneration>       m_mHydraulicGeneration;
            boost::optional<CPACSMHydraulicDistribution>     m_mHydraulicDistribution;
            boost::optional<CPACSMAirConditioning>           m_mAirConditioning;
            boost::optional<CPACSMDeIcing>                   m_mDeIcing;
            boost::optional<CPACSMFireProtection>            m_mFireProtection;
            boost::optional<CPACSMFlightControls>            m_mFlightControls;
            boost::optional<CPACSMInstrumentPanel>           m_mInstrumentPanel;
            boost::optional<CPACSMAutomaticFlightSystem>     m_mAutomaticFlightSystem;
            boost::optional<CPACSMCommunication>             m_mCommunication;
            boost::optional<CPACSMElectricalGeneration>      m_mElectricalGeneration;
            boost::optional<CPACSMElectricalDistribution>    m_mElectricalDistribution;
            boost::optional<CPACSMIntegratedModularAvionics> m_mIntegratedModularAvionics;
            boost::optional<CPACSMMillitarySystems>          m_mMillitarySystems;
            boost::optional<CPACSMNavigation>                m_mNavigation;
            
        private:
            #ifdef HAVE_CPP11
            CPACSMSystems(const CPACSMSystems&) = delete;
            CPACSMSystems& operator=(const CPACSMSystems&) = delete;
            
            CPACSMSystems(CPACSMSystems&&) = delete;
            CPACSMSystems& operator=(CPACSMSystems&&) = delete;
            #else
            CPACSMSystems(const CPACSMSystems&);
            CPACSMSystems& operator=(const CPACSMSystems&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSMSystems = generated::CPACSMSystems;
    #else
    typedef generated::CPACSMSystems CCPACSMSystems;
    #endif
}
