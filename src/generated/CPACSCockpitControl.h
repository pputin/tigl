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
#include <boost/optional.hpp>
#include "tigl_internal.h"
#include <CCPACSStringVector.h>
#include <CCPACSStringVector.h>

namespace tigl
{
    namespace generated
    {
        // This class is used in:
        // CPACSCockpitControls
        
        // generated from /xsd:schema/xsd:complexType[132]
        class CPACSCockpitControl
        {
        public:
            TIGL_EXPORT CPACSCockpitControl();
            TIGL_EXPORT virtual ~CPACSCockpitControl();
            
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
            
            TIGL_EXPORT const std::vector<std::string>& GetCommandCaseUID() const;
            TIGL_EXPORT void SetCommandCaseUID(const std::vector<std::string>& value);
            
            TIGL_EXPORT const CCPACSStringVector& GetPilotInput() const;
            TIGL_EXPORT CCPACSStringVector& GetPilotInput();
            
            TIGL_EXPORT const CCPACSStringVector& GetCommandOutput() const;
            TIGL_EXPORT CCPACSStringVector& GetCommandOutput();
            
        protected:
            std::string                  m_uID;
            boost::optional<std::string> m_name;
            boost::optional<std::string> m_description;
            std::vector<std::string>     m_commandCaseUID;
            CCPACSStringVector           m_pilotInput;
            CCPACSStringVector           m_commandOutput;
            
        private:
            #ifdef HAVE_CPP11
            CPACSCockpitControl(const CPACSCockpitControl&) = delete;
            CPACSCockpitControl& operator=(const CPACSCockpitControl&) = delete;
            
            CPACSCockpitControl(CPACSCockpitControl&&) = delete;
            CPACSCockpitControl& operator=(CPACSCockpitControl&&) = delete;
            #else
            CPACSCockpitControl(const CPACSCockpitControl&);
            CPACSCockpitControl& operator=(const CPACSCockpitControl&);
            #endif
        };
    }
    
    // This type is not customized, create alias in tigl namespace
    #ifdef CPP11
    using CCPACSCockpitControl = generated::CPACSCockpitControl;
    #else
    typedef generated::CPACSCockpitControl CCPACSCockpitControl;
    #endif
}
