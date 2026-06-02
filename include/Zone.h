#ifndef ZONE_H
#define ZONE_H

#include <vector>
#include <string>

#include "Responder.h"

using namespace std;

class Zone
{
private:

    string zoneName;

    vector<Responder*> responders;

public:

    Zone();

    Zone(string zoneName);

    string getZoneName() const;

    void addResponder(
        Responder* responder
    );

    vector<Responder*>& getResponders();

    void displayResponders() const;
};

#endif