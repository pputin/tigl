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
#include <vector>
#include "UniquePtr.h"
#include "tigl_internal.h"
#include "CPACSGenericMass.h"

namespace tigl
{
    namespace generated
    {
        class CPACSMWingStructure;
        
        // This class is used in:
        // CPACSMStructure
        
        // generated from /xsd:schema/xsd:complexType[611]
        class CPACSMWingsStructure
        {
        public:
            TIGL_EXPORT CPACSMWingsStructure();
            TIGL_EXPORT virtual ~CPACSMWingsStructure();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const CPACSGenericMass& GetMassDescription() const;
            TIGL_EXPORT CPACSGenericMass& GetMassDescription();
            
            TIGL_EXPORT const std::vector<unique_ptr<CPACSMWingStructure>>& GetMWingStructure() const;
            TIGL_EXPORT std::vector<unique_ptr<CPACSMWingStructure>>& GetMWingStructure();
            
        protected:
            CPACSGenericMass                             m_massDescription;
            std::vector<unique_ptr<CPACSMWingStructure>> m_mWingStructure;
            
        private:
            #ifdef HAVE_CPP11
            CPACSMWingsStructure(const CPACSMWingsStructure&) = delete;
            CPACSMWingsStructure& operator=(const CPACSMWingsStructure&) = delete;
            
            CPACSMWingsStructure(CPACSMWingsStructure&&) = delete;
            CPACSMWingsStructure& operator=(CPACSMWingsStructure&&) = delete;
            #else
            CPACSMWingsStructure(const CPACSMWingsStructure&);
            CPACSMWingsStructure& operator=(const CPACSMWingsStructure&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSMWingsStructure = generated::CPACSMWingsStructure;
    #else
    typedef generated::CPACSMWingsStructure CCPACSMWingsStructure;
    #endif
    
    using generated::CPACSMWingStructure;
}
