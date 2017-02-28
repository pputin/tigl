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
#include "CPACSLandingGearInterfaceMainFrames.h"
#include "CPACSLandingGearInterfacePressureFloor.h"
#include "CPACSLandingGearInterfaceSidebox.h"
#include "CPACSLandingGearInterfaceLateralPanels.h"
#include "CPACSLandingGearInterfaceKeelbeam.h"
#include "CPACSLandingGearInterfaceLongFloorBeamsConnection.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSCenterFuselageHighWingConfiguration
        
        // generated from /xsd:schema/xsd:complexType[460]
        class CPACSLandingGearInterfaceDefinitions
        {
        public:
            TIGL_EXPORT CPACSLandingGearInterfaceDefinitions();
            TIGL_EXPORT virtual ~CPACSLandingGearInterfaceDefinitions();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasUID() const;
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT const CPACSLandingGearInterfaceMainFrames& GetLandingGearInterfaceMainFrames() const;
            TIGL_EXPORT CPACSLandingGearInterfaceMainFrames& GetLandingGearInterfaceMainFrames();
            
            TIGL_EXPORT const CPACSLandingGearInterfacePressureFloor& GetLandingGearInterfacePressureFloor() const;
            TIGL_EXPORT CPACSLandingGearInterfacePressureFloor& GetLandingGearInterfacePressureFloor();
            
            TIGL_EXPORT const CPACSLandingGearInterfaceSidebox& GetLandingGearInterfaceSidebox() const;
            TIGL_EXPORT CPACSLandingGearInterfaceSidebox& GetLandingGearInterfaceSidebox();
            
            TIGL_EXPORT const CPACSLandingGearInterfaceLateralPanels& GetLandingGearInterfaceLateralPanels() const;
            TIGL_EXPORT CPACSLandingGearInterfaceLateralPanels& GetLandingGearInterfaceLateralPanels();
            
            TIGL_EXPORT const CPACSLandingGearInterfaceKeelbeam& GetLandingGearInterfaceKeelbeam() const;
            TIGL_EXPORT CPACSLandingGearInterfaceKeelbeam& GetLandingGearInterfaceKeelbeam();
            
            TIGL_EXPORT const CPACSLandingGearInterfaceLongFloorBeamsConnection& GetLandingGearInterfaceLongFloorBeamsConnection() const;
            TIGL_EXPORT CPACSLandingGearInterfaceLongFloorBeamsConnection& GetLandingGearInterfaceLongFloorBeamsConnection();
            
        protected:
            boost::optional<std::string>                      m_uID;
            CPACSLandingGearInterfaceMainFrames               m_landingGearInterfaceMainFrames;
            CPACSLandingGearInterfacePressureFloor            m_landingGearInterfacePressureFloor;
            CPACSLandingGearInterfaceSidebox                  m_landingGearInterfaceSidebox;
            CPACSLandingGearInterfaceLateralPanels            m_landingGearInterfaceLateralPanels;
            CPACSLandingGearInterfaceKeelbeam                 m_landingGearInterfaceKeelbeam;
            CPACSLandingGearInterfaceLongFloorBeamsConnection m_landingGearInterfaceLongFloorBeamsConnection;
            
        private:
            #ifdef HAVE_CPP11
            CPACSLandingGearInterfaceDefinitions(const CPACSLandingGearInterfaceDefinitions&) = delete;
            CPACSLandingGearInterfaceDefinitions& operator=(const CPACSLandingGearInterfaceDefinitions&) = delete;
            
            CPACSLandingGearInterfaceDefinitions(CPACSLandingGearInterfaceDefinitions&&) = delete;
            CPACSLandingGearInterfaceDefinitions& operator=(CPACSLandingGearInterfaceDefinitions&&) = delete;
            #else
            CPACSLandingGearInterfaceDefinitions(const CPACSLandingGearInterfaceDefinitions&);
            CPACSLandingGearInterfaceDefinitions& operator=(const CPACSLandingGearInterfaceDefinitions&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSLandingGearInterfaceDefinitions = generated::CPACSLandingGearInterfaceDefinitions;
    #else
    typedef generated::CPACSLandingGearInterfaceDefinitions CCPACSLandingGearInterfaceDefinitions;
    #endif
}
