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
#include "tigl_internal.h"
#include "CPACSSingleGenericMass.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSMComponentSegment
        
        // generated from /xsd:schema/xsd:complexType[573]
        class CPACSMMiscellaneous
        {
        public:
            TIGL_EXPORT CPACSMMiscellaneous();
            TIGL_EXPORT virtual ~CPACSMMiscellaneous();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const CPACSSingleGenericMass& GetMassDescription() const;
            TIGL_EXPORT CPACSSingleGenericMass& GetMassDescription();
            
        protected:
            CPACSSingleGenericMass m_massDescription;
            
        private:
            #ifdef HAVE_CPP11
            CPACSMMiscellaneous(const CPACSMMiscellaneous&) = delete;
            CPACSMMiscellaneous& operator=(const CPACSMMiscellaneous&) = delete;
            
            CPACSMMiscellaneous(CPACSMMiscellaneous&&) = delete;
            CPACSMMiscellaneous& operator=(CPACSMMiscellaneous&&) = delete;
            #else
            CPACSMMiscellaneous(const CPACSMMiscellaneous&);
            CPACSMMiscellaneous& operator=(const CPACSMMiscellaneous&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSMMiscellaneous = generated::CPACSMMiscellaneous;
    #else
    typedef generated::CPACSMMiscellaneous CCPACSMMiscellaneous;
    #endif
}
