#ifndef DISPATCHSTRATEGY_H
#define DISPATCHSTRATEGY_H

#include <vector>

#include "Responder.h"
#include "Incident.h"

using namespace std;

class DispatchStrategy
{
public:

    virtual Responder* selectResponder(
        vector<Responder*>& responders,
        const Incident& incident
    ) = 0;

    virtual ~DispatchStrategy() {}
};

#endif