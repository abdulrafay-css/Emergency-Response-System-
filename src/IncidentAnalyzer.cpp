#include "../include/IncidentAnalyzer.h"

#include <algorithm>

IncidentType IncidentAnalyzer::classifyIncident(
    const string& description)
{
    string text = description;

    transform(
        text.begin(),
        text.end(),
        text.begin(),
        ::tolower
    );

    if(
        text.find("fire") != string::npos ||
        text.find("smoke") != string::npos ||
        text.find("burning") != string::npos
    )
    {
        return FIRE;
    }

    if(
        text.find("robbery") != string::npos ||
        text.find("gun") != string::npos ||
        text.find("attack") != string::npos
    )
    {
        return CRIME;
    }

    return MEDICAL;
}
SeverityLevel IncidentAnalyzer::determineSeverity(
    const string& description)
{
    string text = description;

    transform(
        text.begin(),
        text.end(),
        text.begin(),
        ::tolower
    );

    if(
        text.find("critical") != string::npos ||
        text.find("dying") != string::npos ||
        text.find("explosion") != string::npos
    )
    {
        return CRITICAL;
    }

    if(
        text.find("serious") != string::npos
    )
    {
        return HIGH;
    }

    return MEDIUM;
}
Incident IncidentAnalyzer::analyzeCall(
    const EmergencyCall& call)
{
    IncidentType type =
        classifyIncident(
            call.getDescription()
        );

    SeverityLevel severity =
        determineSeverity(
            call.getDescription()
        );

    static int incidentCounter = 1;

    Incident incident(
        incidentCounter++,
        type,
        severity,
        call.getLocation()
    );

    return incident;
}