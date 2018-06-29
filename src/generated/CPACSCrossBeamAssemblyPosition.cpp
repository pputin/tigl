// Copyright (c) 2018 RISC Software GmbH
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

#include <cassert>
#include "CCPACSCargoCrossBeamsAssembly.h"
#include "CPACSCrossBeamAssemblyPosition.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSCrossBeamAssemblyPosition::CPACSCrossBeamAssemblyPosition(CCPACSCargoCrossBeamsAssembly* parent, CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
        , m_positionZ(0)
    {
        //assert(parent != NULL);
        m_parent = parent;
    }

    CPACSCrossBeamAssemblyPosition::~CPACSCrossBeamAssemblyPosition()
    {
        if (m_uidMgr) m_uidMgr->TryUnregisterObject(m_uID);
    }

    CCPACSCargoCrossBeamsAssembly* CPACSCrossBeamAssemblyPosition::GetParent() const
    {
        return m_parent;
    }

    CTiglUIDManager& CPACSCrossBeamAssemblyPosition::GetUIDManager()
    {
        return *m_uidMgr;
    }

    const CTiglUIDManager& CPACSCrossBeamAssemblyPosition::GetUIDManager() const
    {
        return *m_uidMgr;
    }

    void CPACSCrossBeamAssemblyPosition::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read attribute uID
        if (tixi::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
            m_uID = tixi::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            if (m_uID.empty()) {
                LOG(WARNING) << "Required attribute uID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required attribute uID is missing at xpath " << xpath;
        }

        // read element structuralElementUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/structuralElementUID")) {
            m_structuralElementUID = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/structuralElementUID");
            if (m_structuralElementUID.empty()) {
                LOG(WARNING) << "Required element structuralElementUID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required element structuralElementUID is missing at xpath " << xpath;
        }

        // read element frameUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/frameUID")) {
            m_frameUID = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/frameUID");
            if (m_frameUID.empty()) {
                LOG(WARNING) << "Required element frameUID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required element frameUID is missing at xpath " << xpath;
        }

        // read element positionZ
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/positionZ")) {
            m_positionZ = tixi::TixiGetElement<double>(tixiHandle, xpath + "/positionZ");
        }
        else {
            LOG(ERROR) << "Required element positionZ is missing at xpath " << xpath;
        }

        // read element alignment
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/alignment")) {
            m_alignment = boost::in_place(m_uidMgr);
            try {
                m_alignment->ReadCPACS(tixiHandle, xpath + "/alignment");
            } catch(const std::exception& e) {
                LOG(ERROR) << "Failed to read alignment at xpath " << xpath << ": " << e.what();
                m_alignment = boost::none;
            }
        }

        if (m_uidMgr && !m_uID.empty()) m_uidMgr->RegisterObject(m_uID, *this);
    }

    void CPACSCrossBeamAssemblyPosition::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write attribute uID
        tixi::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);

        // write element structuralElementUID
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/structuralElementUID");
        tixi::TixiSaveElement(tixiHandle, xpath + "/structuralElementUID", m_structuralElementUID);

        // write element frameUID
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/frameUID");
        tixi::TixiSaveElement(tixiHandle, xpath + "/frameUID", m_frameUID);

        // write element positionZ
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/positionZ");
        tixi::TixiSaveElement(tixiHandle, xpath + "/positionZ", m_positionZ);

        // write element alignment
        if (m_alignment) {
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/alignment");
            m_alignment->WriteCPACS(tixiHandle, xpath + "/alignment");
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/alignment")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/alignment");
            }
        }

    }

    const std::string& CPACSCrossBeamAssemblyPosition::GetUID() const
    {
        return m_uID;
    }

    void CPACSCrossBeamAssemblyPosition::SetUID(const std::string& value)
    {
        if (m_uidMgr) {
            m_uidMgr->TryUnregisterObject(m_uID);
            m_uidMgr->RegisterObject(value, *this);
        }
        m_uID = value;
    }

    const std::string& CPACSCrossBeamAssemblyPosition::GetStructuralElementUID() const
    {
        return m_structuralElementUID;
    }

    void CPACSCrossBeamAssemblyPosition::SetStructuralElementUID(const std::string& value)
    {
        m_structuralElementUID = value;
    }

    const std::string& CPACSCrossBeamAssemblyPosition::GetFrameUID() const
    {
        return m_frameUID;
    }

    void CPACSCrossBeamAssemblyPosition::SetFrameUID(const std::string& value)
    {
        m_frameUID = value;
    }

    const double& CPACSCrossBeamAssemblyPosition::GetPositionZ() const
    {
        return m_positionZ;
    }

    void CPACSCrossBeamAssemblyPosition::SetPositionZ(const double& value)
    {
        m_positionZ = value;
    }

    const boost::optional<CPACSAlignmentCrossBeam>& CPACSCrossBeamAssemblyPosition::GetAlignment() const
    {
        return m_alignment;
    }

    boost::optional<CPACSAlignmentCrossBeam>& CPACSCrossBeamAssemblyPosition::GetAlignment()
    {
        return m_alignment;
    }

    CPACSAlignmentCrossBeam& CPACSCrossBeamAssemblyPosition::GetAlignment(CreateIfNotExistsTag)
    {
        if (!m_alignment)
            m_alignment = boost::in_place(m_uidMgr);
        return *m_alignment;
    }

    void CPACSCrossBeamAssemblyPosition::RemoveAlignment()
    {
        m_alignment = boost::none;
    }

} // namespace generated
} // namespace tigl