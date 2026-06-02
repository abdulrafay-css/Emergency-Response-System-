#ifndef DISPATCHENGINE_H
#define DISPATCHENGINE_H

#include <vector>

#include "DispatchStrategy.h"

class DispatchEngine
{
private:

    DispatchStrategy* strategy;

public:

    DispatchEngine(
        DispatchStrategy* strategy
    );

    Responder* dispatch(
        const Incident& incident,
        vector<Responder*>& responders
    );
};

#endif