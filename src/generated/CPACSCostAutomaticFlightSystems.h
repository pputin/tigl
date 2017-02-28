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
#include "CPACSGenericCost.h"

namespace tigl
{
    namespace generated
    {
        class CPACSGenericCost;
        
        // This class is used in:
        // CPACSCostSystems
        
        // generated from /xsd:schema/xsd:complexType[195]
        class CPACSCostAutomaticFlightSystems
        {
        public:
            TIGL_EXPORT CPACSCostAutomaticFlightSystems();
            TIGL_EXPORT virtual ~CPACSCostAutomaticFlightSystems();
            
            TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
            TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;
            
            TIGL_EXPORT const CPACSGenericCost& GetCostDescription() const;
            TIGL_EXPORT CPACSGenericCost& GetCostDescription();
            
            TIGL_EXPORT const std::vector<unique_ptr<CPACSGenericCost>>& GetAutomaticFlightSystem() const;
            TIGL_EXPORT std::vector<unique_ptr<CPACSGenericCost>>& GetAutomaticFlightSystem();
            
        protected:
            CPACSGenericCost                          m_costDescription;
            std::vector<unique_ptr<CPACSGenericCost>> m_automaticFlightSystem;
            
        private:
            #ifdef HAVE_CPP11
            CPACSCostAutomaticFlightSystems(const CPACSCostAutomaticFlightSystems&) = delete;
            CPACSCostAutomaticFlightSystems& operator=(const CPACSCostAutomaticFlightSystems&) = delete;
            
            CPACSCostAutomaticFlightSystems(CPACSCostAutomaticFlightSystems&&) = delete;
            CPACSCostAutomaticFlightSystems& operator=(CPACSCostAutomaticFlightSystems&&) = delete;
            #else
            CPACSCostAutomaticFlightSystems(const CPACSCostAutomaticFlightSystems&);
            CPACSCostAutomaticFlightSystems& operator=(const CPACSCostAutomaticFlightSystems&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSCostAutomaticFlightSystems = generated::CPACSCostAutomaticFlightSystems;
    #else
    typedef generated::CPACSCostAutomaticFlightSystems CCPACSCostAutomaticFlightSystems;
    #endif
    
    using generated::CPACSGenericCost;
}
