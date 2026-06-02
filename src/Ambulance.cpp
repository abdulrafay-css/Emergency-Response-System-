#include "../include/Ambulance.h"

#include <iostream>

using namespace std;

Ambulance::Ambulance()
{
}

Ambulance::Ambulance(
    string id,
    Location location,
    float speed)

    : Responder(
        id,
        location,
        speed)
{
}

void Ambulance::respond(
    const Incident& incident)
{
    cout
        << "\nAmbulance "
        << unitID
        << " responding to medical emergency."
        << endl;
}

string Ambulance::getUnitType() const
{
    return "Ambulance";
}