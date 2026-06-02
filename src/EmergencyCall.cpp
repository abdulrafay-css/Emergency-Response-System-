#include "../include/EmergencyCall.h"
#include <iostream>

using namespace std;

EmergencyCall::EmergencyCall()
{
    callID = 0;
    description = "No Description";
}

EmergencyCall::EmergencyCall(
    int callID,
    Caller caller,
    string description,
    Location incidentLocation)
{
    this->callID = callID;
    this->caller = caller;
    this->description = description;
    this->incidentLocation = incidentLocation;
}

int EmergencyCall::getCallID() const
{
    return callID;
}

Caller EmergencyCall::getCaller() const
{
    return caller;
}

string EmergencyCall::getDescription() const
{
    return description;
}

Location EmergencyCall::getLocation() const
{
    return incidentLocation;
}

void EmergencyCall::displayCallInfo() const
{
    cout << "\n===== Emergency Call =====\n";

    cout << "Call ID: "
         << callID
         << endl;

    caller.displayInfo();

    cout << "Description: "
         << description
         << endl;

    cout << "Location: ("
         << incidentLocation.getX()
         << ", "
         << incidentLocation.getY()
         << ")"
         << endl;
}
