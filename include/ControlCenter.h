#ifndef CONTROLCENTER_H
#define CONTROLCENTER_H

#include <vector>

#include "Zone.h"
#include "IncidentAnalyzer.h"
#include "DispatchEngine.h"
#include "AnalyticsEngine.h"

class ControlCenter
{
private:

    IncidentAnalyzer analyzer;

    DispatchEngine dispatcher;

    AnalyticsEngine analytics;

    vector<Zone> zones;

public:

    ControlCenter(
        DispatchStrategy* strategy
    );

    void addZone(
        const Zone& zone
    );

    void receiveEmergencyCall(
        const EmergencyCall& call
    );

    void displaySystemReport();
};

#endif