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
#include "CPACSWingFuelTankVolume.h"

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSFuselageFuelTanks
        
        // generated from /xsd:schema/xsd:complexType[363]
        class CPACSFuselageFuelTank
        {
        public:
            TIGL_EXPORT CPACSFuselageFuelTank();
            TIGL_EXPORT virtual ~CPACSFuselageFuelTank();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const std::string& GetUID() const;
            TIGL_EXPORT void SetUID(const std::string& value);
            
            TIGL_EXPORT bool HasName() const;
            TIGL_EXPORT const std::string& GetName() const;
            TIGL_EXPORT void SetName(const std::string& value);
            
            TIGL_EXPORT bool HasDescription() const;
            TIGL_EXPORT const std::string& GetDescription() const;
            TIGL_EXPORT void SetDescription(const std::string& value);
            
            TIGL_EXPORT bool HasLocation() const;
            TIGL_EXPORT const CCPACSPoint& GetLocation() const;
            TIGL_EXPORT CCPACSPoint& GetLocation();
            
            TIGL_EXPORT bool HasVolume() const;
            TIGL_EXPORT const CPACSWingFuelTankVolume& GetVolume() const;
            TIGL_EXPORT CPACSWingFuelTankVolume& GetVolume();
            
        protected:
            std::string                              m_uID;
            boost::optional<std::string>             m_name;
            boost::optional<std::string>             m_description;
            boost::optional<CCPACSPoint>             m_location;
            boost::optional<CPACSWingFuelTankVolume> m_volume;
            
        private:
            #ifdef HAVE_CPP11
            CPACSFuselageFuelTank(const CPACSFuselageFuelTank&) = delete;
            CPACSFuselageFuelTank& operator=(const CPACSFuselageFuelTank&) = delete;
            
            CPACSFuselageFuelTank(CPACSFuselageFuelTank&&) = delete;
            CPACSFuselageFuelTank& operator=(CPACSFuselageFuelTank&&) = delete;
            #else
            CPACSFuselageFuelTank(const CPACSFuselageFuelTank&);
            CPACSFuselageFuelTank& operator=(const CPACSFuselageFuelTank&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSFuselageFuelTank = generated::CPACSFuselageFuelTank;
    #else
    typedef generated::CPACSFuselageFuelTank CCPACSFuselageFuelTank;
    #endif
}
