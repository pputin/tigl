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

namespace tigl
{
    namespace generated
    {
        class CPACSControlSurfaceAirfoil;
        
        // This class is used in:
        // CPACSControlSurfaceOuterShapeLeadingEdge
        // CPACSControlSurfaceOuterShapeSpoiler
        // CPACSControlSurfaceOuterShapeTrailingEdge
        
        // generated from /xsd:schema/xsd:complexType[172]
        class CPACSControlSurfaceContours
        {
        public:
            TIGL_EXPORT CPACSControlSurfaceContours();
            TIGL_EXPORT virtual ~CPACSControlSurfaceContours();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const std::vector<unique_ptr<CPACSControlSurfaceAirfoil>>& GetIntermediateAirfoil() const;
            TIGL_EXPORT std::vector<unique_ptr<CPACSControlSurfaceAirfoil>>& GetIntermediateAirfoil();
            
        protected:
            std::vector<unique_ptr<CPACSControlSurfaceAirfoil>> m_intermediateAirfoil;
            
        private:
            #ifdef HAVE_CPP11
            CPACSControlSurfaceContours(const CPACSControlSurfaceContours&) = delete;
            CPACSControlSurfaceContours& operator=(const CPACSControlSurfaceContours&) = delete;
            
            CPACSControlSurfaceContours(CPACSControlSurfaceContours&&) = delete;
            CPACSControlSurfaceContours& operator=(CPACSControlSurfaceContours&&) = delete;
            #else
            CPACSControlSurfaceContours(const CPACSControlSurfaceContours&);
            CPACSControlSurfaceContours& operator=(const CPACSControlSurfaceContours&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSControlSurfaceContours = generated::CPACSControlSurfaceContours;
    #else
    typedef generated::CPACSControlSurfaceContours CCPACSControlSurfaceContours;
    #endif
    
    using generated::CPACSControlSurfaceAirfoil;
}
