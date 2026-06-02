#include "../include/Responder.h"

#include <iostream>

using namespace std;

Responder::Responder()
{
    unitID = "UNKNOWN";

    status = AVAILABLE;

    speed = 50;
}

Responder::Responder(
    string unitID,
    Location location,
    float speed)
{
    this->unitID = unitID;

    this->currentLocation = location;

    this->speed = speed;

    status = AVAILABLE;
}

Responder::~Responder()
{
}

string Responder::getUnitID() const
{
    return unitID;
}

Location Responder::getLocation() const
{
    return currentLocation;
}

UnitStatus Responder::getStatus() const
{
    return status;
}

float Responder::getSpeed() const
{
    return speed;
}

void Responder::setStatus(UnitStatus status)
{
    this->status = status;
}

void Responder::setLocation(Location location)
{
    currentLocation = location;
}

float Responder::calculateETA(
    Location incidentLocation) const
{
    float distance =
        currentLocation.calculateDistance(
            incidentLocation);

    return distance / speed;
}

void Responder::displayInfo() const
{
    cout << "\nUnit ID: "
         << unitID
         << endl;

    cout << "Speed: "
         << speed
         << endl;
}