#include "../include/DispatchEngine.h"
#include "../include/Logger.h"

#include <iostream>

using namespace std;

DispatchEngine::DispatchEngine(
    DispatchStrategy* strategy)
{
    this->strategy = strategy;
}

Responder* DispatchEngine::dispatch(
    const Incident& incident,
    vector<Responder*>& responders)
{
    Responder* responder =
        strategy->selectResponder(
            responders,
            incident
        );

    if(responder != nullptr) {
        responder->setStatus(BUSY);

        float distance =
            responder->getLocation()
                .calculateDistance(
                    incident.getLocation()
                );

        float eta =
            responder->calculateETA(
                incident.getLocation()
            );

        Logger::log(
            responder->getUnitType() +
            string(" ") +
            responder->getUnitID() +
            " dispatched."
        );

        cout
    << "\n=================================="
    << endl;

        cout
            << "      DISPATCH ANALYSIS"
            << endl;

        cout
            << "=================================="
            << endl;

        cout << "Distance: "
             << distance
             << " km"
             << endl;

        cout << "ETA: "
             << eta
             << " hours"
             << endl;

        cout
            << "\nDispatching "
            << responder->getUnitType()
            << " ["
            << responder->getUnitID()
            << "]"
            << endl;

        responder->respond(incident);
    }
        return responder;
    }