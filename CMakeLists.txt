cmake_minimum_required(VERSION 3.16)

project(EmergencyResponseSystem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(EmergencyResponseSystem
        main.cpp
        src/Ambulance.cpp
        src/AnalyticsEngine.cpp
        src/Caller.cpp
        src/ControlCenter.cpp
        src/DispatchEngine.cpp
        src/EmergencyCall.cpp
        src/FireTruck.cpp
        src/Incident.cpp
        src/IncidentAnalyzer.cpp
        src/Location.cpp
        src/Logger.cpp
        src/NearestUnitStrategy.cpp
        src/PoliceUnit.cpp
        src/Responder.cpp
        src/Zone.cpp
)

target_include_directories(EmergencyResponseSystem PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)