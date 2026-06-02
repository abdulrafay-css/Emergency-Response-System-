#include "../include/ControlCenter.h"
#include "../include/Logger.h"
#include <iostream>
class DispatchStrategy;

ControlCenter::ControlCenter(
    DispatchStrategy* strategy)

    : dispatcher(strategy)
{
}

void ControlCenter::addZone(
    const Zone& zone)
{
    zones.push_back(
        zone
    );
}

void ControlCenter::receiveEmergencyCall(
    const EmergencyCall& call)
{
    Logger::log(
        "Emergency call received."
    );
    cout << "\n==================================";
    cout << "\n      EMERGENCY CALL";
    cout << "\n==================================";

    cout << "\nCaller Name: "
         << call.getCaller().getName();

    cout << "\nPhone Number: "
         << call.getCaller().getPhoneNumber();

    cout << "\nDescription: "
         << call.getDescription();

    cout << "\nLocation: ("
         << call.getLocation().getX()
         << ", "
         << call.getLocation().getY()
         << ")"
         << endl;

    Incident incident =
        analyzer.analyzeCall(
            call
        );

    incident.displayIncident();

    analytics.recordIncident();

    if(zones.empty())
    {
        Logger::log(
            "No zones available."
        );

        return;
    }
    cout
    << "\nZone: "
    << zones[0].getZoneName()
    << endl;

    auto& responders =
        zones[0].getResponders();

    Responder* assigned =
        dispatcher.dispatch(
            incident,
            responders
        );

    if(assigned)
    {
        incident.markResolved();

        analytics.resolveIncident();

        assigned->setStatus(
            AVAILABLE
        );
    }
}

void ControlCenter::displaySystemReport()
{
    analytics.generateReport();
}