#include "../include/AnalyticsEngine.h"

#include <iostream>

using namespace std;

AnalyticsEngine::AnalyticsEngine()
{
    totalIncidents = 0;
    resolvedIncidents = 0;
}

void AnalyticsEngine::recordIncident()
{
    totalIncidents++;
}

void AnalyticsEngine::resolveIncident()
{
    resolvedIncidents++;
}

double AnalyticsEngine::calculateSuccessRate() const
{
    if(totalIncidents == 0)
    {
        return 0;
    }

    return
        (double)resolvedIncidents /
        totalIncidents * 100;
}

void AnalyticsEngine::generateReport() const
{
    cout
    << "\n=================================="
    << endl;

    cout
        << "       SYSTEM ANALYTICS"
        << endl;

    cout
        << "=================================="
        << endl;

    cout
        << "Total Incidents: "
        << totalIncidents
        << endl;

    cout
        << "Resolved Incidents: "
        << resolvedIncidents
        << endl;

    cout
        << "Success Rate: "
        << calculateSuccessRate()
        << "%"
        << endl;
}