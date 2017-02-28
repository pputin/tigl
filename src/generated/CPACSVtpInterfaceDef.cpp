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

#include "CPACSVtpFrameDef.h"
#include "TixiHelper.h"
#include "CTiglLogging.h"
#include "CTiglError.h"
#include "CPACSVtpInterfaceDef.h"

namespace tigl
{
    namespace generated
    {
        CPACSVtpInterfaceDef::CPACSVtpInterfaceDef(){}
        CPACSVtpInterfaceDef::~CPACSVtpInterfaceDef() {}
        
        void CPACSVtpInterfaceDef::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read attribute uID
            if (tixihelper::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
                m_uID = tixihelper::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            }
            
            // read element vtpFrameDefinitions
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/vtpFrameDefinitions")) {
                tixihelper::TixiReadElements(tixiHandle, xpath + "/vtpFrameDefinitions", m_vtpFrameDefinitions);
            }
            
            // read element vtpAreaToleranceX
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/vtpAreaToleranceX")) {
                m_vtpAreaToleranceX = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/vtpAreaToleranceX");
            }
            
            // read element vtpAreaToleranceZ
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/vtpAreaToleranceZ")) {
                m_vtpAreaToleranceZ = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/vtpAreaToleranceZ");
            }
            
            // read element vtpReinfRelZ
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/vtpReinfRelZ")) {
                m_vtpReinfRelZ = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/vtpReinfRelZ");
            }
            else {
                LOG(ERROR) << "Required element vtpReinfRelZ is missing";
            }
            
            // read element vtpReinfRelWidth
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/vtpReinfRelWidth")) {
                m_vtpReinfRelWidth = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/vtpReinfRelWidth");
            }
            else {
                LOG(ERROR) << "Required element vtpReinfRelWidth is missing";
            }
            
            // read element vtpIntersectionArc
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/vtpIntersectionArc")) {
                m_vtpIntersectionArc = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/vtpIntersectionArc");
            }
            else {
                LOG(ERROR) << "Required element vtpIntersectionArc is missing";
            }
            
            // read element vtpAttachmentStructElemUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/vtpAttachmentStructElemUID")) {
                m_vtpAttachmentStructElemUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/vtpAttachmentStructElemUID");
            }
            else {
                LOG(ERROR) << "Required element vtpAttachmentStructElemUID is missing";
            }
            
        }
        
        void CPACSVtpInterfaceDef::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write attribute uID
            if (m_uID) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/uID");
                tixihelper::TixiSaveAttribute(tixiHandle, xpath, "uID", *m_uID);
            }
            
            // write element vtpFrameDefinitions
            tixihelper::TixiSaveElements(tixiHandle, xpath + "/vtpFrameDefinitions", m_vtpFrameDefinitions);
            
            // write element vtpAreaToleranceX
            if (m_vtpAreaToleranceX) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/vtpAreaToleranceX");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/vtpAreaToleranceX", *m_vtpAreaToleranceX);
            }
            
            // write element vtpAreaToleranceZ
            if (m_vtpAreaToleranceZ) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/vtpAreaToleranceZ");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/vtpAreaToleranceZ", *m_vtpAreaToleranceZ);
            }
            
            // write element vtpReinfRelZ
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/vtpReinfRelZ");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/vtpReinfRelZ", m_vtpReinfRelZ);
            
            // write element vtpReinfRelWidth
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/vtpReinfRelWidth");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/vtpReinfRelWidth", m_vtpReinfRelWidth);
            
            // write element vtpIntersectionArc
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/vtpIntersectionArc");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/vtpIntersectionArc", m_vtpIntersectionArc);
            
            // write element vtpAttachmentStructElemUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/vtpAttachmentStructElemUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/vtpAttachmentStructElemUID", m_vtpAttachmentStructElemUID);
            
        }
        
        bool CPACSVtpInterfaceDef::HasUID() const
        {
            return static_cast<bool>(m_uID);
        }
        
        const std::string& CPACSVtpInterfaceDef::GetUID() const
        {
            return *m_uID;
        }
        
        void CPACSVtpInterfaceDef::SetUID(const std::string& value)
        {
            m_uID = value;
        }
        
        const std::vector<unique_ptr<CPACSVtpFrameDef>>& CPACSVtpInterfaceDef::GetVtpFrameDefinitions() const
        {
            return m_vtpFrameDefinitions;
        }
        
        std::vector<unique_ptr<CPACSVtpFrameDef>>& CPACSVtpInterfaceDef::GetVtpFrameDefinitions()
        {
            return m_vtpFrameDefinitions;
        }
        
        bool CPACSVtpInterfaceDef::HasVtpAreaToleranceX() const
        {
            return static_cast<bool>(m_vtpAreaToleranceX);
        }
        
        const double& CPACSVtpInterfaceDef::GetVtpAreaToleranceX() const
        {
            return *m_vtpAreaToleranceX;
        }
        
        void CPACSVtpInterfaceDef::SetVtpAreaToleranceX(const double& value)
        {
            m_vtpAreaToleranceX = value;
        }
        
        bool CPACSVtpInterfaceDef::HasVtpAreaToleranceZ() const
        {
            return static_cast<bool>(m_vtpAreaToleranceZ);
        }
        
        const double& CPACSVtpInterfaceDef::GetVtpAreaToleranceZ() const
        {
            return *m_vtpAreaToleranceZ;
        }
        
        void CPACSVtpInterfaceDef::SetVtpAreaToleranceZ(const double& value)
        {
            m_vtpAreaToleranceZ = value;
        }
        
        const double& CPACSVtpInterfaceDef::GetVtpReinfRelZ() const
        {
            return m_vtpReinfRelZ;
        }
        
        void CPACSVtpInterfaceDef::SetVtpReinfRelZ(const double& value)
        {
            m_vtpReinfRelZ = value;
        }
        
        const double& CPACSVtpInterfaceDef::GetVtpReinfRelWidth() const
        {
            return m_vtpReinfRelWidth;
        }
        
        void CPACSVtpInterfaceDef::SetVtpReinfRelWidth(const double& value)
        {
            m_vtpReinfRelWidth = value;
        }
        
        const double& CPACSVtpInterfaceDef::GetVtpIntersectionArc() const
        {
            return m_vtpIntersectionArc;
        }
        
        void CPACSVtpInterfaceDef::SetVtpIntersectionArc(const double& value)
        {
            m_vtpIntersectionArc = value;
        }
        
        const std::string& CPACSVtpInterfaceDef::GetVtpAttachmentStructElemUID() const
        {
            return m_vtpAttachmentStructElemUID;
        }
        
        void CPACSVtpInterfaceDef::SetVtpAttachmentStructElemUID(const std::string& value)
        {
            m_vtpAttachmentStructElemUID = value;
        }
        
    }
}
