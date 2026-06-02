#include "../include/FireTruck.h"

#include <iostream>

using namespace std;

FireTruck::FireTruck()
{
}

FireTruck::FireTruck(
    string id,
    Location location,
    float speed)

    : Responder(
        id,
        location,
        speed)
{
}

void FireTruck::respond(
    const Incident& incident)
{
    cout
        << "\nFire Truck "
        << unitID
        << " responding to fire emergency."
        << endl;
}

string FireTruck::getUnitType() const {
    return "FireTruck";
}