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
#include <CCPACSMaterial.h>

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSActuatorAttachment
        
        // generated from /xsd:schema/xsd:complexType[5]
        class CPACSActuatorControlSurfaceAttachment
        {
        public:
            TIGL_EXPORT CPACSActuatorControlSurfaceAttachment();
            TIGL_EXPORT virtual ~CPACSActuatorControlSurfaceAttachment();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const double& GetParentXsi() const;
            TIGL_EXPORT void SetParentXsi(const double& value);
            
            TIGL_EXPORT const double& GetParentHeight() const;
            TIGL_EXPORT void SetParentHeight(const double& value);
            
            TIGL_EXPORT const CCPACSMaterial& GetMaterial() const;
            TIGL_EXPORT CCPACSMaterial& GetMaterial();
            
        protected:
            double         m_parentXsi;
            double         m_parentHeight;
            CCPACSMaterial m_material;
            
        private:
            #ifdef HAVE_CPP11
            CPACSActuatorControlSurfaceAttachment(const CPACSActuatorControlSurfaceAttachment&) = delete;
            CPACSActuatorControlSurfaceAttachment& operator=(const CPACSActuatorControlSurfaceAttachment&) = delete;
            
            CPACSActuatorControlSurfaceAttachment(CPACSActuatorControlSurfaceAttachment&&) = delete;
            CPACSActuatorControlSurfaceAttachment& operator=(CPACSActuatorControlSurfaceAttachment&&) = delete;
            #else
            CPACSActuatorControlSurfaceAttachment(const CPACSActuatorControlSurfaceAttachment&);
            CPACSActuatorControlSurfaceAttachment& operator=(const CPACSActuatorControlSurfaceAttachment&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSActuatorControlSurfaceAttachment = generated::CPACSActuatorControlSurfaceAttachment;
    #else
    typedef generated::CPACSActuatorControlSurfaceAttachment CCPACSActuatorControlSurfaceAttachment;
    #endif
}
