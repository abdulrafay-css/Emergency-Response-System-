#ifndef POLICEUNIT_H
#define POLICEUNIT_H

#include "Responder.h"

class PoliceUnit : public Responder
{
public:

    PoliceUnit();

    PoliceUnit(
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