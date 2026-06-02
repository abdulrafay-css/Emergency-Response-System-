#ifndef AMBULANCE_H
#define AMBULANCE_H

#include "Responder.h"

class Ambulance : public Responder
{
public:

    Ambulance();

    Ambulance(
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