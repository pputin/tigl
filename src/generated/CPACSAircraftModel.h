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
#include <boost/utility/in_place_factory.hpp>
#include "tigl_internal.h"
#include <CCPACSFuselages.h>
#include <CCPACSWings.h>
#include <CCPACSExternalObjects.h>

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSAircraft
        
        // generated from /xsd:schema/xsd:complexType[52]
        class CPACSAircraftModel
        {
        public:
            TIGL_EXPORT CPACSAircraftModel();
            TIGL_EXPORT virtual ~CPACSAircraftModel();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT const std::string& GetName() const;
            TIGL_EXPORT void SetName(const std::string& value);
            
            TIGL_EXPORT const boost::optional<std::string>& GetDescription() const;
            TIGL_EXPORT void SetDescription(const std::string& value);
            TIGL_EXPORT void SetDescription(const boost::optional<std::string>& value);
            
            TIGL_EXPORT const boost::optional<CCPACSFuselages>& GetFuselages() const;
            TIGL_EXPORT boost::optional<CCPACSFuselages>& GetFuselages();
            
            TIGL_EXPORT const boost::optional<CCPACSWings>& GetWings() const;
            TIGL_EXPORT boost::optional<CCPACSWings>& GetWings();
            
            TIGL_EXPORT const boost::optional<CCPACSExternalObjects>& GetGenericGeometryComponents() const;
            TIGL_EXPORT boost::optional<CCPACSExternalObjects>& GetGenericGeometryComponents();
            
        protected:
            std::string                            m_uID;
            std::string                            m_name;
            boost::optional<std::string>           m_description;
            boost::optional<CCPACSFuselages>       m_fuselages;
            boost::optional<CCPACSWings>           m_wings;
            boost::optional<CCPACSExternalObjects> m_genericGeometryComponents;
            
        private:
            #ifdef HAVE_CPP11
            CPACSAircraftModel(const CPACSAircraftModel&) = delete;
            CPACSAircraftModel& operator=(const CPACSAircraftModel&) = delete;
            
            CPACSAircraftModel(CPACSAircraftModel&&) = delete;
            CPACSAircraftModel& operator=(CPACSAircraftModel&&) = delete;
            #else
            CPACSAircraftModel(const CPACSAircraftModel&);
            CPACSAircraftModel& operator=(const CPACSAircraftModel&);
            #endif
        };
    }
    
    // Aliases in tigl namespace
    // CPACSAircraftModel is customized, use type CCPACSAircraftModel directly
}
