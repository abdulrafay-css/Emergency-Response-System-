#include "../include/PoliceUnit.h"

#include <iostream>

using namespace std;

PoliceUnit::PoliceUnit()
{
}

PoliceUnit::PoliceUnit(
    string id,
    Location location,
    float speed)

    : Responder(
        id,
        location,
        speed)
{
}

void PoliceUnit::respond(
    const Incident& incident)
{
    cout
        << "\nPolice Unit "
        << unitID
        << " responding to crime emergency."
        << endl;
}

string PoliceUnit::getUnitType() const
{
    return "PoliceUnit";
}