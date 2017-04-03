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

#include "CPACSProfiles.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "TixiHelper.h"

namespace tigl
{
    namespace generated
    {
        CPACSProfiles::CPACSProfiles(){}
        CPACSProfiles::~CPACSProfiles() {}
        
        void CPACSProfiles::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element fuselageProfiles
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/fuselageProfiles")) {
                m_fuselageProfiles = boost::in_place();
                try {
                    m_fuselageProfiles->ReadCPACS(tixiHandle, xpath + "/fuselageProfiles");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read fuselageProfiles at xpath << " << xpath << ": " << e.what();
                    m_fuselageProfiles = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read fuselageProfiles at xpath << " << xpath << ": " << e.getError();
                    m_fuselageProfiles = boost::none;
                }
            }
            
            // read element wingAirfoils
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/wingAirfoils")) {
                m_wingAirfoils = boost::in_place();
                try {
                    m_wingAirfoils->ReadCPACS(tixiHandle, xpath + "/wingAirfoils");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read wingAirfoils at xpath << " << xpath << ": " << e.what();
                    m_wingAirfoils = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read wingAirfoils at xpath << " << xpath << ": " << e.getError();
                    m_wingAirfoils = boost::none;
                }
            }
            
            // read element guideCurves
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/guideCurves")) {
                m_guideCurves = boost::in_place();
                try {
                    m_guideCurves->ReadCPACS(tixiHandle, xpath + "/guideCurves");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read guideCurves at xpath << " << xpath << ": " << e.what();
                    m_guideCurves = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read guideCurves at xpath << " << xpath << ": " << e.getError();
                    m_guideCurves = boost::none;
                }
            }
            
            // read element rotorAirfoils
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/rotorAirfoils")) {
                m_rotorAirfoils = boost::in_place();
                try {
                    m_rotorAirfoils->ReadCPACS(tixiHandle, xpath + "/rotorAirfoils");
                } catch(const std::exception& e) {
                    LOG(ERROR) << "Failed to read rotorAirfoils at xpath << " << xpath << ": " << e.what();
                    m_rotorAirfoils = boost::none;
                } catch(const CTiglError& e) {
                    LOG(ERROR) << "Failed to read rotorAirfoils at xpath << " << xpath << ": " << e.getError();
                    m_rotorAirfoils = boost::none;
                }
            }
            
        }
        
        void CPACSProfiles::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element fuselageProfiles
            if (m_fuselageProfiles) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/fuselageProfiles");
                m_fuselageProfiles->WriteCPACS(tixiHandle, xpath + "/fuselageProfiles");
            }
            
            // write element wingAirfoils
            if (m_wingAirfoils) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/wingAirfoils");
                m_wingAirfoils->WriteCPACS(tixiHandle, xpath + "/wingAirfoils");
            }
            
            // write element guideCurves
            if (m_guideCurves) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/guideCurves");
                m_guideCurves->WriteCPACS(tixiHandle, xpath + "/guideCurves");
            }
            
            // write element rotorAirfoils
            if (m_rotorAirfoils) {
                tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/rotorAirfoils");
                m_rotorAirfoils->WriteCPACS(tixiHandle, xpath + "/rotorAirfoils");
            }
            
        }
        
        const boost::optional<CCPACSFuselageProfiles>& CPACSProfiles::GetFuselageProfiles() const
        {
            return m_fuselageProfiles;
        }
        
        boost::optional<CCPACSFuselageProfiles>& CPACSProfiles::GetFuselageProfiles()
        {
            return m_fuselageProfiles;
        }
        
        const boost::optional<CCPACSWingProfiles>& CPACSProfiles::GetWingAirfoils() const
        {
            return m_wingAirfoils;
        }
        
        boost::optional<CCPACSWingProfiles>& CPACSProfiles::GetWingAirfoils()
        {
            return m_wingAirfoils;
        }
        
        const boost::optional<CCPACSGuideCurveProfiles>& CPACSProfiles::GetGuideCurves() const
        {
            return m_guideCurves;
        }
        
        boost::optional<CCPACSGuideCurveProfiles>& CPACSProfiles::GetGuideCurves()
        {
            return m_guideCurves;
        }
        
        const boost::optional<CCPACSRotorProfiles>& CPACSProfiles::GetRotorAirfoils() const
        {
            return m_rotorAirfoils;
        }
        
        boost::optional<CCPACSRotorProfiles>& CPACSProfiles::GetRotorAirfoils()
        {
            return m_rotorAirfoils;
        }
        
    }
}
