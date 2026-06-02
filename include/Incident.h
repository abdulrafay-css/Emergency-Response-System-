#ifndef INCIDENT_H
#define INCIDENT_H

#include "Enum.h"
#include "Location.h"

class Incident
{
private:
    int incidentID;
    IncidentType type;
    SeverityLevel severity;
    Location location;
    bool resolved;

public:
    Incident();

    Incident(
        int incidentID,
        IncidentType type,
        SeverityLevel severity,
        Location location
    );

    int getIncidentID() const;
    IncidentType getType() const;
    SeverityLevel getSeverity() const;
    Location getLocation() const;
    bool isResolved() const;

    void markResolved();

    // ADD THIS
    void displayIncident() const;
};

#endif