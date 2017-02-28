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
#include "CPACSMWingsStructure.h"
#include "CPACSMFuselagesStructure.h"
#include "CPACSMLandingGears.h"
#include "CPACSMPylons.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSMManufacturerEmpty
        
        // generated from /xsd:schema/xsd:complexType[600]
        class CPACSMStructure
        {
        public:
            TIGL_EXPORT CPACSMStructure();
            TIGL_EXPORT virtual ~CPACSMStructure();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const CPACSGenericMass& GetMassDescription() const;
            TIGL_EXPORT CPACSGenericMass& GetMassDescription();
            
            TIGL_EXPORT bool HasMWingsStructure() const;
            TIGL_EXPORT const CPACSMWingsStructure& GetMWingsStructure() const;
            TIGL_EXPORT CPACSMWingsStructure& GetMWingsStructure();
            
            TIGL_EXPORT bool HasMFuselagesStructure() const;
            TIGL_EXPORT const CPACSMFuselagesStructure& GetMFuselagesStructure() const;
            TIGL_EXPORT CPACSMFuselagesStructure& GetMFuselagesStructure();
            
            TIGL_EXPORT bool HasMLandingGears() const;
            TIGL_EXPORT const CPACSMLandingGears& GetMLandingGears() const;
            TIGL_EXPORT CPACSMLandingGears& GetMLandingGears();
            
            TIGL_EXPORT bool HasMPylons() const;
            TIGL_EXPORT const CPACSMPylons& GetMPylons() const;
            TIGL_EXPORT CPACSMPylons& GetMPylons();
            
        protected:
            CPACSGenericMass                          m_massDescription;
            boost::optional<CPACSMWingsStructure>     m_mWingsStructure;
            boost::optional<CPACSMFuselagesStructure> m_mFuselagesStructure;
            boost::optional<CPACSMLandingGears>       m_mLandingGears;
            boost::optional<CPACSMPylons>             m_mPylons;
            
        private:
            #ifdef HAVE_CPP11
            CPACSMStructure(const CPACSMStructure&) = delete;
            CPACSMStructure& operator=(const CPACSMStructure&) = delete;
            
            CPACSMStructure(CPACSMStructure&&) = delete;
            CPACSMStructure& operator=(CPACSMStructure&&) = delete;
            #else
            CPACSMStructure(const CPACSMStructure&);
            CPACSMStructure& operator=(const CPACSMStructure&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSMStructure = generated::CPACSMStructure;
    #else
    typedef generated::CPACSMStructure CCPACSMStructure;
    #endif
}
