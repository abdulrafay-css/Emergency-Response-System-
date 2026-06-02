#include "../include/NearestUnitStrategy.h"

#include <limits>
#include <iostream>

Responder* NearestUnitStrategy::selectResponder(
    vector<Responder*>& responders,
    const Incident& incident)
{
    Responder* selected = nullptr;

    float minimumDistance =
        numeric_limits<float>::max();

    for(auto responder : responders)
    {
        if(responder->getStatus() != AVAILABLE)
        {
            continue;
        }

        bool typeMatch = false;

        if(
            incident.getType() == MEDICAL &&
            responder->getUnitType() == "Ambulance"
        )
        {
            typeMatch = true;
        }

        if(
            incident.getType() == FIRE &&
            responder->getUnitType() == "FireTruck"
        )
        {
            typeMatch = true;
        }

        if(
            incident.getType() == CRIME &&
            responder->getUnitType() == "PoliceUnit"
        )
        {
            typeMatch = true;
        }

        if(!typeMatch)
        {
            continue;
        }

        float distance =
            responder->getLocation()
                .calculateDistance(
                    incident.getLocation()
                );
        cout
            << "\nChecking "
            << responder->getUnitType()
            << " "
            << responder->getUnitID()
            << endl;

        cout
            << "Distance = "
            << distance
            << endl;
        if(distance < minimumDistance)
        {
            minimumDistance = distance;
            selected = responder;
        }
    }

    return selected;
}