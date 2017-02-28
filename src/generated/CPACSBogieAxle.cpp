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

#include "TixiHelper.h"
#include "CTiglLogging.h"
#include "CTiglError.h"
#include "CPACSBogieAxle.h"

namespace tigl
{
    namespace generated
    {
        CPACSBogieAxle::CPACSBogieAxle(){}
        CPACSBogieAxle::~CPACSBogieAxle() {}
        
        void CPACSBogieAxle::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            else {
                LOG(ERROR) << "Required attribute uID is missing";
            }
            
            // read element axleUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/axleUID")) {
                m_axleUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/axleUID");
            }
            else {
                LOG(ERROR) << "Required element axleUID is missing";
            }
            
            // read element posOnBogie
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/posOnBogie")) {
                m_posOnBogie = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/posOnBogie");
            }
            else {
                LOG(ERROR) << "Required element posOnBogie is missing";
            }
            
        }
        
        void CPACSBogieAxle::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/uID");
            tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);
            
            // write element axleUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/axleUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/axleUID", m_axleUID);
            
            // write element posOnBogie
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/posOnBogie");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/posOnBogie", m_posOnBogie);
            
        }
        
        const std::string& CPACSBogieAxle::GetUID() const
        {
            return m_uID;
        }
        
        void CPACSBogieAxle::SetUID(const std::string& value)
        {
            m_uID = value;
        }
        
        const std::string& CPACSBogieAxle::GetAxleUID() const
        {
            return m_axleUID;
        }
        
        void CPACSBogieAxle::SetAxleUID(const std::string& value)
        {
            m_axleUID = value;
        }
        
        const double& CPACSBogieAxle::GetPosOnBogie() const
        {
            return m_posOnBogie;
        }
        
        void CPACSBogieAxle::SetPosOnBogie(const double& value)
        {
            m_posOnBogie = value;
        }
        
    }
}
