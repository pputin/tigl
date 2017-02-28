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
#include "CPACSLoadCondition.h"
#include "CPACSLoadCaseState.h"
#include "CPACSLoadCaseSettings.h"
#include "CPACSLoadCaseMass.h"
#include "CPACSNodalLoads.h"
#include "CPACSCutLoads.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSFlightLoadCases
        
        // generated from /xsd:schema/xsd:complexType[327]
        class CPACSFlightLoadCase
        {
        public:
            TIGL_EXPORT CPACSFlightLoadCase();
            TIGL_EXPORT virtual ~CPACSFlightLoadCase();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT const std::string& GetName() const;
            TIGL_EXPORT void SetName(const std::string& value);
            
            TIGL_EXPORT bool HasDescription() const;
            TIGL_EXPORT const std::string& GetDescription() const;
            TIGL_EXPORT void SetDescription(const std::string& value);
            
            TIGL_EXPORT bool HasAeroDataSetUID() const;
            TIGL_EXPORT const std::string& GetAeroDataSetUID() const;
            TIGL_EXPORT void SetAeroDataSetUID(const std::string& value);
            
            TIGL_EXPORT bool HasLoadCondition() const;
            TIGL_EXPORT const CPACSLoadCondition& GetLoadCondition() const;
            TIGL_EXPORT CPACSLoadCondition& GetLoadCondition();
            
            TIGL_EXPORT const CPACSLoadCaseState& GetState() const;
            TIGL_EXPORT CPACSLoadCaseState& GetState();
            
            TIGL_EXPORT bool HasAircraftSettings() const;
            TIGL_EXPORT const CPACSLoadCaseSettings& GetAircraftSettings() const;
            TIGL_EXPORT CPACSLoadCaseSettings& GetAircraftSettings();
            
            TIGL_EXPORT bool HasMass() const;
            TIGL_EXPORT const CPACSLoadCaseMass& GetMass() const;
            TIGL_EXPORT CPACSLoadCaseMass& GetMass();
            
            TIGL_EXPORT bool HasNodalLoads() const;
            TIGL_EXPORT const CPACSNodalLoads& GetNodalLoads() const;
            TIGL_EXPORT CPACSNodalLoads& GetNodalLoads();
            
            TIGL_EXPORT bool HasCutLoads() const;
            TIGL_EXPORT const CPACSCutLoads& GetCutLoads() const;
            TIGL_EXPORT CPACSCutLoads& GetCutLoads();
            
            TIGL_EXPORT bool HasExternalAmifFile() const;
            TIGL_EXPORT const std::string& GetExternalAmifFile() const;
            TIGL_EXPORT void SetExternalAmifFile(const std::string& value);
            
        protected:
            std::string                            m_uID;
            std::string                            m_name;
            boost::optional<std::string>           m_description;
            boost::optional<std::string>           m_aeroDataSetUID;
            boost::optional<CPACSLoadCondition>    m_loadCondition;
            CPACSLoadCaseState                     m_state;
            boost::optional<CPACSLoadCaseSettings> m_aircraftSettings;
            boost::optional<CPACSLoadCaseMass>     m_mass;
            boost::optional<CPACSNodalLoads>       m_nodalLoads;
            boost::optional<CPACSCutLoads>         m_cutLoads;
            boost::optional<std::string>           m_externalAmifFile;
            
        private:
            #ifdef HAVE_CPP11
            CPACSFlightLoadCase(const CPACSFlightLoadCase&) = delete;
            CPACSFlightLoadCase& operator=(const CPACSFlightLoadCase&) = delete;
            
            CPACSFlightLoadCase(CPACSFlightLoadCase&&) = delete;
            CPACSFlightLoadCase& operator=(CPACSFlightLoadCase&&) = delete;
            #else
            CPACSFlightLoadCase(const CPACSFlightLoadCase&);
            CPACSFlightLoadCase& operator=(const CPACSFlightLoadCase&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSFlightLoadCase = generated::CPACSFlightLoadCase;
    #else
    typedef generated::CPACSFlightLoadCase CCPACSFlightLoadCase;
    #endif
}
