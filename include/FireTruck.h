#ifndef FIRETRUCK_H
#define FIRETRUCK_H

#include "Responder.h"

class FireTruck : public Responder
{
public:

    FireTruck();

    FireTruck(
        string id,
        Location location,
        float speed
    );

    void respond(
        const Incident& incident
    ) override;

    string getUnitType() const override;
};

#endif