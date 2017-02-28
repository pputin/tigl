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
#include "CPACSLoadCondition_identifier.h"
#include "CPACSLoadCondition_sizingType.h"
#include "CPACSLoadCondition_designSpeed.h"
#include "CPACSAdditionalParameters.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSBkLoadCase
        // CPACSFlightLoadCase
        // CPACSGroundLoadCase
        
        // generated from /xsd:schema/xsd:complexType[500]
        class CPACSLoadCondition
        {
        public:
            TIGL_EXPORT CPACSLoadCondition();
            TIGL_EXPORT virtual ~CPACSLoadCondition();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasIdentifier() const;
            TIGL_EXPORT const CPACSLoadCondition_identifier& GetIdentifier() const;
            TIGL_EXPORT CPACSLoadCondition_identifier& GetIdentifier();
            
            TIGL_EXPORT bool HasSizingType() const;
            TIGL_EXPORT const CPACSLoadCondition_sizingType& GetSizingType() const;
            TIGL_EXPORT CPACSLoadCondition_sizingType& GetSizingType();
            
            TIGL_EXPORT bool HasSafetyFactor() const;
            TIGL_EXPORT const double& GetSafetyFactor() const;
            TIGL_EXPORT void SetSafetyFactor(const double& value);
            
            TIGL_EXPORT bool HasDesignSpeed() const;
            TIGL_EXPORT const CPACSLoadCondition_designSpeed& GetDesignSpeed() const;
            TIGL_EXPORT CPACSLoadCondition_designSpeed& GetDesignSpeed();
            
            TIGL_EXPORT bool HasAdditionalParameters() const;
            TIGL_EXPORT const CPACSAdditionalParameters& GetAdditionalParameters() const;
            TIGL_EXPORT CPACSAdditionalParameters& GetAdditionalParameters();
            
        protected:
            boost::optional<CPACSLoadCondition_identifier>  m_identifier;
            boost::optional<CPACSLoadCondition_sizingType>  m_sizingType;
            boost::optional<double>                         m_safetyFactor;
            boost::optional<CPACSLoadCondition_designSpeed> m_designSpeed;
            boost::optional<CPACSAdditionalParameters>      m_additionalParameters;
            
        private:
            #ifdef HAVE_CPP11
            CPACSLoadCondition(const CPACSLoadCondition&) = delete;
            CPACSLoadCondition& operator=(const CPACSLoadCondition&) = delete;
            
            CPACSLoadCondition(CPACSLoadCondition&&) = delete;
            CPACSLoadCondition& operator=(CPACSLoadCondition&&) = delete;
            #else
            CPACSLoadCondition(const CPACSLoadCondition&);
            CPACSLoadCondition& operator=(const CPACSLoadCondition&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSLoadCondition = generated::CPACSLoadCondition;
    #else
    typedef generated::CPACSLoadCondition CCPACSLoadCondition;
    #endif
}
