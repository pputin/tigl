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
#include "CPACSMainGearWingAttachment.h"

namespace tigl
{
    namespace generated
    {
        CPACSMainGearWingAttachment::CPACSMainGearWingAttachment(){}
        CPACSMainGearWingAttachment::~CPACSMainGearWingAttachment() {}
        
        void CPACSMainGearWingAttachment::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element firstSparUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/firstSparUID")) {
                m_firstSparUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/firstSparUID");
            }
            else {
                LOG(ERROR) << "Required element firstSparUID is missing";
            }
            
            // read element positioning
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/positioning")) {
                m_positioning.ReadCPACS(tixiHandle, xpath + "/positioning");
            }
            else {
                LOG(ERROR) << "Required element positioning is missing";
            }
            
            // read element secondSparUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/secondSparUID")) {
                m_secondSparUID_choice1 = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/secondSparUID");
            }
            
            // read element supportBeam
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/supportBeam")) {
                m_supportBeam_choice2 = boost::in_place();
                try {
                    m_supportBeam_choice2->ReadCPACS(tixiHandle, xpath + "/supportBeam");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read supportBeam at xpath << " << xpath << ": " << e.what();
                    m_supportBeam_choice2 = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read supportBeam at xpath << " << xpath << ": " << e.getError();
                    m_supportBeam_choice2 = boost::none;
                }
            }
            
        }
        
        void CPACSMainGearWingAttachment::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element firstSparUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/firstSparUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/firstSparUID", m_firstSparUID);
            
            // write element positioning
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/positioning");
            m_positioning.WriteCPACS(tixiHandle, xpath + "/positioning");
            
            // write element secondSparUID
            if (m_secondSparUID_choice1) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/secondSparUID");
                tixihelper::TixiSaveElement(tixiHandle, xpath + "/secondSparUID", *m_secondSparUID_choice1);
            }
            
            // write element supportBeam
            if (m_supportBeam_choice2) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/supportBeam");
                m_supportBeam_choice2->WriteCPACS(tixiHandle, xpath + "/supportBeam");
            }
            
        }
        
        const std::string& CPACSMainGearWingAttachment::GetFirstSparUID() const
        {
            return m_firstSparUID;
        }
        
        void CPACSMainGearWingAttachment::SetFirstSparUID(const std::string& value)
        {
            m_firstSparUID = value;
        }
        
        const CPACSMainGearWingAttachmentPositioning& CPACSMainGearWingAttachment::GetPositioning() const
        {
            return m_positioning;
        }
        
        CPACSMainGearWingAttachmentPositioning& CPACSMainGearWingAttachment::GetPositioning()
        {
            return m_positioning;
        }
        
        bool CPACSMainGearWingAttachment::HasSecondSparUID_choice1() const
        {
            return static_cast<bool>(m_secondSparUID_choice1);
        }
        
        const std::string& CPACSMainGearWingAttachment::GetSecondSparUID_choice1() const
        {
            return *m_secondSparUID_choice1;
        }
        
        void CPACSMainGearWingAttachment::SetSecondSparUID_choice1(const std::string& value)
        {
            m_secondSparUID_choice1 = value;
        }
        
        bool CPACSMainGearWingAttachment::HasSupportBeam_choice2() const
        {
            return static_cast<bool>(m_supportBeam_choice2);
        }
        
        const CPACSMainGearSupportBeam& CPACSMainGearWingAttachment::GetSupportBeam_choice2() const
        {
            return *m_supportBeam_choice2;
        }
        
        CPACSMainGearSupportBeam& CPACSMainGearWingAttachment::GetSupportBeam_choice2()
        {
            return *m_supportBeam_choice2;
        }
        
    }
}
