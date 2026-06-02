#ifndef RESPONDER_H
#define RESPONDER_H

#include <string>

#include "Location.h"
#include "Incident.h"
#include "Enum.h"

using namespace std;

class Responder
{
protected:

    string unitID;

    Location currentLocation;

    UnitStatus status;

    float speed;

public:

    // Constructors
    Responder();

    Responder(
        string unitID,
        Location location,
        float speed
    );

    virtual ~Responder();

    // Getters
    string getUnitID() const;

    Location getLocation() const;

    UnitStatus getStatus() const;

    float getSpeed() const;

    // Setters
    void setStatus(UnitStatus status);

    void setLocation(Location location);

    // Utility
    float calculateETA(
        Location incidentLocation
    ) const;

    // Polymorphic Functions
    virtual void respond(
        const Incident& incident
    ) = 0;

    virtual string getUnitType() const = 0;

    virtual void displayInfo() const;
};

#endif