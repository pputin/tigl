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
#include <CCPACSPoint.h>
#include <CCPACSPoint.h>
#include <CCPACSPointAbsRel.h>

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSEnginePosition
        // CPACSEnginePylon
        // CPACSFuselage
        // CPACSFuselageElement
        // CPACSFuselageSection
        // CPACSGenericGeometricComponent
        // CPACSGeogenRotorBlade
        // CPACSGeogenWing
        // CPACSMainGear
        // CPACSNacelleOuterShape
        // CPACSNoseGear
        // CPACSPylonShell
        // CPACSRotor
        // CPACSRotorHubHinge
        // CPACSTransmission
        // CPACSWing
        // CPACSWingElement
        // CPACSWingSection
        
        // generated from /xsd:schema/xsd:complexType[848]
        class CPACSTransformation
        {
        public:
            TIGL_EXPORT CPACSTransformation();
            TIGL_EXPORT virtual ~CPACSTransformation();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT bool HasUID() const;
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT bool HasScaling() const;
            TIGL_EXPORT const CCPACSPoint& GetScaling() const;
            TIGL_EXPORT CCPACSPoint& GetScaling();
            
            TIGL_EXPORT bool HasRotation() const;
            TIGL_EXPORT const CCPACSPoint& GetRotation() const;
            TIGL_EXPORT CCPACSPoint& GetRotation();
            
            TIGL_EXPORT bool HasTranslation() const;
            TIGL_EXPORT const CCPACSPointAbsRel& GetTranslation() const;
            TIGL_EXPORT CCPACSPointAbsRel& GetTranslation();
            
        protected:
            boost::optional<std::string>       m_uID;
            boost::optional<CCPACSPoint>       m_scaling;
            boost::optional<CCPACSPoint>       m_rotation;
            boost::optional<CCPACSPointAbsRel> m_translation;
            
        private:
            #ifdef HAVE_CPP11
            CPACSTransformation(const CPACSTransformation&) = delete;
            CPACSTransformation& operator=(const CPACSTransformation&) = delete;
            
            CPACSTransformation(CPACSTransformation&&) = delete;
            CPACSTransformation& operator=(CPACSTransformation&&) = delete;
            #else
            CPACSTransformation(const CPACSTransformation&);
            CPACSTransformation& operator=(const CPACSTransformation&);
            #endif
        };
    }
    
    // This type is customized, use type CCPACSTransformation
}
