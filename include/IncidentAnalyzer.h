#ifndef INCIDENTANALYZER_H
#define INCIDENTANALYZER_H

#include <string>

#include "EmergencyCall.h"
#include "Incident.h"

using namespace std;

class IncidentAnalyzer
{
public:

    IncidentType classifyIncident(
        const string& description
    );

    SeverityLevel determineSeverity(
        const string& description
    );

    Incident analyzeCall(
        const EmergencyCall& call
    );
};

#endif