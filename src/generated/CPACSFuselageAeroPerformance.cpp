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
#include "CPACSFuselageAeroPerformance.h"

namespace tigl
{
    namespace generated
    {
        CPACSFuselageAeroPerformance::CPACSFuselageAeroPerformance(){}
        CPACSFuselageAeroPerformance::~CPACSFuselageAeroPerformance() {}
        
        void CPACSFuselageAeroPerformance::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element fuselageUID
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/fuselageUID")) {
                m_fuselageUID = tixihelper::TixiGetElement<std::string>(tixiHandle, xpath + "/fuselageUID");
            }
            else {
                LOG(ERROR) << "Required element fuselageUID is missing";
            }
            
            // read element reference
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/reference")) {
                m_reference = boost::in_place();
                try {
                    m_reference->ReadCPACS(tixiHandle, xpath + "/reference");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read reference at xpath << " << xpath << ": " << e.what();
                    m_reference = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read reference at xpath << " << xpath << ": " << e.getError();
                    m_reference = boost::none;
                }
            }
            
            // read element aeroPerformanceMaps
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/aeroPerformanceMaps")) {
                m_aeroPerformanceMaps.ReadCPACS(tixiHandle, xpath + "/aeroPerformanceMaps");
            }
            else {
                LOG(ERROR) << "Required element aeroPerformanceMaps is missing";
            }
            
        }
        
        void CPACSFuselageAeroPerformance::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element fuselageUID
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/fuselageUID");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/fuselageUID", m_fuselageUID);
            
            // write element reference
            if (m_reference) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/reference");
                m_reference->WriteCPACS(tixiHandle, xpath + "/reference");
            }
            
            // write element aeroPerformanceMaps
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/aeroPerformanceMaps");
            m_aeroPerformanceMaps.WriteCPACS(tixiHandle, xpath + "/aeroPerformanceMaps");
            
        }
        
        const std::string& CPACSFuselageAeroPerformance::GetFuselageUID() const
        {
            return m_fuselageUID;
        }
        
        void CPACSFuselageAeroPerformance::SetFuselageUID(const std::string& value)
        {
            m_fuselageUID = value;
        }
        
        bool CPACSFuselageAeroPerformance::HasReference() const
        {
            return static_cast<bool>(m_reference);
        }
        
        const CPACSReference& CPACSFuselageAeroPerformance::GetReference() const
        {
            return *m_reference;
        }
        
        CPACSReference& CPACSFuselageAeroPerformance::GetReference()
        {
            return *m_reference;
        }
        
        const CPACSAeroPerformanceMaps& CPACSFuselageAeroPerformance::GetAeroPerformanceMaps() const
        {
            return m_aeroPerformanceMaps;
        }
        
        CPACSAeroPerformanceMaps& CPACSFuselageAeroPerformance::GetAeroPerformanceMaps()
        {
            return m_aeroPerformanceMaps;
        }
        
    }
}
