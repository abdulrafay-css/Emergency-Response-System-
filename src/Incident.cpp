#include "../include/Incident.h"

Incident::Incident()
{
    incidentID = 0;
    resolved = false;
}

Incident::Incident(
    int incidentID,
    IncidentType type,
    SeverityLevel severity,
    Location location)
{
    this->incidentID = incidentID;
    this->type = type;
    this->severity = severity;
    this->location = location;

    resolved = false;
}

int Incident::getIncidentID() const
{
    return incidentID;
}

IncidentType Incident::getType() const
{
    return type;
}

SeverityLevel Incident::getSeverity() const
{
    return severity;
}

Location Incident::getLocation() const
{
    return location;
}

bool Incident::isResolved() const
{
    return resolved;
}

void Incident::markResolved()
{
    resolved = true;
}

#include <iostream>

using namespace std;

void Incident::displayIncident() const
{
    cout << "\n==================================" << endl;
    cout << "        INCIDENT DETAILS          " << endl;
    cout << "==================================" << endl;

    cout << "Incident ID: "
         << incidentID
         << endl;

    cout << "Type: ";

    switch(type)
    {
        case MEDICAL:
            cout << "MEDICAL";
            break;

        case FIRE:
            cout << "FIRE";
            break;

        case CRIME:
            cout << "CRIME";
            break;
    }

    cout << endl;

    cout << "Severity: ";

    switch(severity)
    {
        case LOW:
            cout << "LOW";
            break;

        case MEDIUM:
            cout << "MEDIUM";
            break;

        case HIGH:
            cout << "HIGH";
            break;

        case CRITICAL:
            cout << "CRITICAL";
            break;
    }

    cout << endl;

    cout << "Location: ("
         << location.getX()
         << ", "
         << location.getY()
         << ")"
         << endl;
}