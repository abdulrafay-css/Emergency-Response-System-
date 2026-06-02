#include "../include/Zone.h"

#include <iostream>

using namespace std;

Zone::Zone()
{
    zoneName = "Unknown";
}

Zone::Zone(string zoneName)
{
    this->zoneName = zoneName;
}

string Zone::getZoneName() const
{
    return zoneName;
}

void Zone::addResponder(
    Responder* responder)
{
    responders.push_back(
        responder
    );
}

vector<Responder*>& Zone::getResponders()
{
    return responders;
}

void Zone::displayResponders() const
{
    cout
        << "\nZone: "
        << zoneName
        << endl;

    for(auto responder : responders)
    {
        responder->displayInfo();
    }
}