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

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSLoadCaseRotation
        
        // generated from /xsd:schema/xsd:complexType[71]
        class CPACSAngleDisplacement
        {
        public:
            TIGL_EXPORT CPACSAngleDisplacement();
            TIGL_EXPORT virtual ~CPACSAngleDisplacement();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const double& GetPhi() const;
            TIGL_EXPORT void SetPhi(const double& value);
            
            TIGL_EXPORT const double& GetTheta() const;
            TIGL_EXPORT void SetTheta(const double& value);
            
            TIGL_EXPORT const double& GetPsi() const;
            TIGL_EXPORT void SetPsi(const double& value);
            
        protected:
            double m_phi;
            double m_theta;
            double m_psi;
            
        private:
            #ifdef HAVE_CPP11
            CPACSAngleDisplacement(const CPACSAngleDisplacement&) = delete;
            CPACSAngleDisplacement& operator=(const CPACSAngleDisplacement&) = delete;
            
            CPACSAngleDisplacement(CPACSAngleDisplacement&&) = delete;
            CPACSAngleDisplacement& operator=(CPACSAngleDisplacement&&) = delete;
            #else
            CPACSAngleDisplacement(const CPACSAngleDisplacement&);
            CPACSAngleDisplacement& operator=(const CPACSAngleDisplacement&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSAngleDisplacement = generated::CPACSAngleDisplacement;
    #else
    typedef generated::CPACSAngleDisplacement CCPACSAngleDisplacement;
    #endif
}
