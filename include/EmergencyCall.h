#ifndef EMERGENCYCALL_H
#define EMERGENCYCALL_H

#include "Caller.h"
#include "Location.h"
#include <string>

using namespace std;

class EmergencyCall
{
private:
    int callID;

    Caller caller;

    string description;

    Location incidentLocation;

public:
    EmergencyCall();

    EmergencyCall(
        int callID,
        Caller caller,
        string description,
        Location incidentLocation
    );

    int getCallID() const;

    Caller getCaller() const;

    string getDescription() const;

    Location getLocation() const;

    void displayCallInfo() const;
};

#endif
