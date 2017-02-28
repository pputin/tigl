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
#include "CPACSControlLawModes.h"
#include "CPACSControlLawModes.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSSystems
        
        // generated from /xsd:schema/xsd:complexType[165]
        class CPACSControlLaws
        {
        public:
            TIGL_EXPORT CPACSControlLaws();
            TIGL_EXPORT virtual ~CPACSControlLaws();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const CPACSControlLawModes& GetManualModes() const;
            TIGL_EXPORT CPACSControlLawModes& GetManualModes();
            
            TIGL_EXPORT const CPACSControlLawModes& GetAutomaticModes() const;
            TIGL_EXPORT CPACSControlLawModes& GetAutomaticModes();
            
        protected:
            CPACSControlLawModes m_manualModes;
            CPACSControlLawModes m_automaticModes;
            
        private:
            #ifdef HAVE_CPP11
            CPACSControlLaws(const CPACSControlLaws&) = delete;
            CPACSControlLaws& operator=(const CPACSControlLaws&) = delete;
            
            CPACSControlLaws(CPACSControlLaws&&) = delete;
            CPACSControlLaws& operator=(CPACSControlLaws&&) = delete;
            #else
            CPACSControlLaws(const CPACSControlLaws&);
            CPACSControlLaws& operator=(const CPACSControlLaws&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSControlLaws = generated::CPACSControlLaws;
    #else
    typedef generated::CPACSControlLaws CCPACSControlLaws;
    #endif
}
