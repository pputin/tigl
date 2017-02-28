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
#include "CPACSIntercostalPosition.h"

namespace tigl
{
    namespace generated
    {
        CPACSIntercostalPosition::CPACSIntercostalPosition(){}
        CPACSIntercostalPosition::~CPACSIntercostalPosition() {}
        
        void CPACSIntercostalPosition::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            
            // read element name
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/name")) {
                m_name = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/name");
            }
            
            // read element description
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/description")) {
                m_description = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/description");
            }
            
            // read element frontFrameUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/frontFrameUID")) {
                m_frontFrameUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/frontFrameUID");
            }
            else {
                LOG(ERROR) << "Required element frontFrameUID is missing";
            }
            
            // read element rearFrameUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/rearFrameUID")) {
                m_rearFrameUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/rearFrameUID");
            }
            else {
                LOG(ERROR) << "Required element rearFrameUID is missing";
            }
            
            // read element doorUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/doorUID")) {
                m_doorUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/doorUID");
            }
            else {
                LOG(ERROR) << "Required element doorUID is missing";
            }
            
            // read element positionRelZ
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/positionRelZ")) {
                m_positionRelZ = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/positionRelZ");
            }
            else {
                LOG(ERROR) << "Required element positionRelZ is missing";
            }
            
            // read element structuralElementUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/structuralElementUID")) {
                m_structuralElementUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/structuralElementUID");
            }
            else {
                LOG(ERROR) << "Required element structuralElementUID is missing";
            }
            
        }
        
        void CPACSIntercostalPosition::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            if (m_uID) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/uID");
                tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", *m_uID);
            }
            
            // write element name
            if (m_name) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/name");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/name", *m_name);
            }
            
            // write element description
            if (m_description) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/description");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/description", *m_description);
            }
            
            // write element frontFrameUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/frontFrameUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/frontFrameUID", m_frontFrameUID);
            
            // write element rearFrameUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/rearFrameUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/rearFrameUID", m_rearFrameUID);
            
            // write element doorUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/doorUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/doorUID", m_doorUID);
            
            // write element positionRelZ
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/positionRelZ");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/positionRelZ", m_positionRelZ);
            
            // write element structuralElementUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/structuralElementUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/structuralElementUID", m_structuralElementUID);
            
        }
        
        bool CPACSIntercostalPosition::HasUID() const
        {
            return static_cast<bool>(m_uID);
        }
        
        const std::string& CPACSIntercostalPosition::GetUID() const
        {
            return *m_uID;
        }
        
        void CPACSIntercostalPosition::SetUID(const std::string& value)
        {
            m_uID = value;
        }
        
        bool CPACSIntercostalPosition::HasName() const
        {
            return static_cast<bool>(m_name);
        }
        
        const std::string& CPACSIntercostalPosition::GetName() const
        {
            return *m_name;
        }
        
        void CPACSIntercostalPosition::SetName(const std::string& value)
        {
            m_name = value;
        }
        
        bool CPACSIntercostalPosition::HasDescription() const
        {
            return static_cast<bool>(m_description);
        }
        
        const std::string& CPACSIntercostalPosition::GetDescription() const
        {
            return *m_description;
        }
        
        void CPACSIntercostalPosition::SetDescription(const std::string& value)
        {
            m_description = value;
        }
        
        const std::string& CPACSIntercostalPosition::GetFrontFrameUID() const
        {
            return m_frontFrameUID;
        }
        
        void CPACSIntercostalPosition::SetFrontFrameUID(const std::string& value)
        {
            m_frontFrameUID = value;
        }
        
        const std::string& CPACSIntercostalPosition::GetRearFrameUID() const
        {
            return m_rearFrameUID;
        }
        
        void CPACSIntercostalPosition::SetRearFrameUID(const std::string& value)
        {
            m_rearFrameUID = value;
        }
        
        const std::string& CPACSIntercostalPosition::GetDoorUID() const
        {
            return m_doorUID;
        }
        
        void CPACSIntercostalPosition::SetDoorUID(const std::string& value)
        {
            m_doorUID = value;
        }
        
        const double& CPACSIntercostalPosition::GetPositionRelZ() const
        {
            return m_positionRelZ;
        }
        
        void CPACSIntercostalPosition::SetPositionRelZ(const double& value)
        {
            m_positionRelZ = value;
        }
        
        const std::string& CPACSIntercostalPosition::GetStructuralElementUID() const
        {
            return m_structuralElementUID;
        }
        
        void CPACSIntercostalPosition::SetStructuralElementUID(const std::string& value)
        {
            m_structuralElementUID = value;
        }
        
    }
}
