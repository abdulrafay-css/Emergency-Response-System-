#ifndef ENUM_H
#define ENUM_H

// Type of emergency incident
enum IncidentType
{
    MEDICAL,
    FIRE,
    CRIME
};

// Severity level of incident
enum SeverityLevel
{
    LOW,
    MEDIUM,
    HIGH,
    CRITICAL
};

// Current state of responder
enum UnitStatus
{
    AVAILABLE,
    BUSY,
    OFFLINE
};  // <-- MISSING SEMICOLON

#endif