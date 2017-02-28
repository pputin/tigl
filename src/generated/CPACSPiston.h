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
#include "CPACSStrut.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSGearComponents
        
        // generated from /xsd:schema/xsd:complexType[679]
        class CPACSPiston : public CPACSStrut
        {
        public:
            TIGL_EXPORT CPACSPiston();
            TIGL_EXPORT virtual ~CPACSPiston();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const double& GetMaxSpringDeflection() const;
            TIGL_EXPORT void SetMaxSpringDeflection(const double& value);
            
        protected:
            double m_maxSpringDeflection;
            
        private:
            #ifdef HAVE_CPP11
            CPACSPiston(const CPACSPiston&) = delete;
            CPACSPiston& operator=(const CPACSPiston&) = delete;
            
            CPACSPiston(CPACSPiston&&) = delete;
            CPACSPiston& operator=(CPACSPiston&&) = delete;
            #else
            CPACSPiston(const CPACSPiston&);
            CPACSPiston& operator=(const CPACSPiston&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSPiston = generated::CPACSPiston;
    #else
    typedef generated::CPACSPiston CCPACSPiston;
    #endif
}
