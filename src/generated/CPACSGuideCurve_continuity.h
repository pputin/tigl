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
#include "CPACSGuideCurve_continuity_SimpleContent.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSGuideCurve
        
        // generated from /xsd:schema/xsd:complexType[421]/xsd:complexContent/xsd:extension/xsd:sequence/xsd:choice[1]/xsd:sequence[1]/xsd:element[2]/xsd:complexType
        class CPACSGuideCurve_continuity
        {
        public:
            TIGL_EXPORT CPACSGuideCurve_continuity();
            TIGL_EXPORT virtual ~CPACSGuideCurve_continuity();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const CPACSGuideCurve_continuity_SimpleContent& GetSimpleContent() const;
            TIGL_EXPORT void SetSimpleContent(const CPACSGuideCurve_continuity_SimpleContent& value);
            
        protected:
            CPACSGuideCurve_continuity_SimpleContent m_simpleContent;
            
        private:
            #ifdef HAVE_CPP11
            CPACSGuideCurve_continuity(const CPACSGuideCurve_continuity&) = delete;
            CPACSGuideCurve_continuity& operator=(const CPACSGuideCurve_continuity&) = delete;
            
            CPACSGuideCurve_continuity(CPACSGuideCurve_continuity&&) = delete;
            CPACSGuideCurve_continuity& operator=(CPACSGuideCurve_continuity&&) = delete;
            #else
            CPACSGuideCurve_continuity(const CPACSGuideCurve_continuity&);
            CPACSGuideCurve_continuity& operator=(const CPACSGuideCurve_continuity&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSGuideCurve_continuity = generated::CPACSGuideCurve_continuity;
    #else
    typedef generated::CPACSGuideCurve_continuity CCPACSGuideCurve_continuity;
    #endif
}
