#ifndef ANALYTICSENGINE_H
#define ANALYTICSENGINE_H

class AnalyticsEngine
{
private:

    int totalIncidents;

    int resolvedIncidents;

public:

    AnalyticsEngine();

    void recordIncident();

    void resolveIncident();

    double calculateSuccessRate() const;

    void generateReport() const;
};

#endif