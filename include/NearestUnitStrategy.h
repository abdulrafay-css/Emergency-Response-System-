#ifndef NEARESTUNITSTRATEGY_H
#define NEARESTUNITSTRATEGY_H

#include "DispatchStrategy.h"

class NearestUnitStrategy
    : public DispatchStrategy
{
public:

    Responder* selectResponder(
        vector<Responder*>& responders,
        const Incident& incident
    ) override;
};

#endif