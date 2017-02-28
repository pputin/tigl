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
#include "CPACSWingInterfaceDefinitions.h"
#include "CPACSLandingGearInterfaceDefinitions.h"
#include "CPACSMainStrutInterfaceDefinitions.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSCenterFuselageArea
        
        // generated from /xsd:schema/xsd:complexType[121]
        class CPACSCenterFuselageHighWingConfiguration
        {
        public:
            TIGL_EXPORT CPACSCenterFuselageHighWingConfiguration();
            TIGL_EXPORT virtual ~CPACSCenterFuselageHighWingConfiguration();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasUID() const;
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT const CPACSWingInterfaceDefinitions& GetWingInterfaceDefinitions() const;
            TIGL_EXPORT CPACSWingInterfaceDefinitions& GetWingInterfaceDefinitions();
            
            TIGL_EXPORT bool HasLandingGearInterfaceDefinitions() const;
            TIGL_EXPORT const CPACSLandingGearInterfaceDefinitions& GetLandingGearInterfaceDefinitions() const;
            TIGL_EXPORT CPACSLandingGearInterfaceDefinitions& GetLandingGearInterfaceDefinitions();
            
            TIGL_EXPORT bool HasMainStrutInterfaceDefinitions() const;
            TIGL_EXPORT const CPACSMainStrutInterfaceDefinitions& GetMainStrutInterfaceDefinitions() const;
            TIGL_EXPORT CPACSMainStrutInterfaceDefinitions& GetMainStrutInterfaceDefinitions();
            
        protected:
            boost::optional<std::string>                          m_uID;
            CPACSWingInterfaceDefinitions                         m_wingInterfaceDefinitions;
            boost::optional<CPACSLandingGearInterfaceDefinitions> m_landingGearInterfaceDefinitions;
            boost::optional<CPACSMainStrutInterfaceDefinitions>   m_mainStrutInterfaceDefinitions;
            
        private:
            #ifdef HAVE_CPP11
            CPACSCenterFuselageHighWingConfiguration(const CPACSCenterFuselageHighWingConfiguration&) = delete;
            CPACSCenterFuselageHighWingConfiguration& operator=(const CPACSCenterFuselageHighWingConfiguration&) = delete;
            
            CPACSCenterFuselageHighWingConfiguration(CPACSCenterFuselageHighWingConfiguration&&) = delete;
            CPACSCenterFuselageHighWingConfiguration& operator=(CPACSCenterFuselageHighWingConfiguration&&) = delete;
            #else
            CPACSCenterFuselageHighWingConfiguration(const CPACSCenterFuselageHighWingConfiguration&);
            CPACSCenterFuselageHighWingConfiguration& operator=(const CPACSCenterFuselageHighWingConfiguration&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSCenterFuselageHighWingConfiguration = generated::CPACSCenterFuselageHighWingConfiguration;
    #else
    typedef generated::CPACSCenterFuselageHighWingConfiguration CCPACSCenterFuselageHighWingConfiguration;
    #endif
}
