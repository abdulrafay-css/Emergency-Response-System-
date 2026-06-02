#include "include/ControlCenter.h"

#include "include/NearestUnitStrategy.h"

#include "include/Ambulance.h"
#include "include/FireTruck.h"
#include "include/PoliceUnit.h"
#include <iostream>

int main()
{
    NearestUnitStrategy strategy;

    ControlCenter center(
        &strategy
    );

    Zone islamabad(
        "Islamabad"
    );

    islamabad.addResponder(
        new Ambulance(
            "AMB-101",
            Location(10,10),
            60
        )
    );
    islamabad.addResponder(
    new Ambulance(
        "AMB-102",
        Location(80,80),
        60
    )
);

    islamabad.addResponder(
     new FireTruck(
         "FIRE-201",
         Location(20,20),
         40
     )
 );

    islamabad.addResponder(
        new FireTruck(
            "FIRE-202",
            Location(100,100),
            40
        )
    );

    islamabad.addResponder(
        new FireTruck(
            "FIRE-203",
            Location(5,5),
            40
        )
    );

    islamabad.addResponder(
        new PoliceUnit(
            "POL-301",
            Location(30,30),
            80
        )
    );
    islamabad.addResponder(
    new PoliceUnit(
        "POL-302",
        Location(90,90),
        80
    )
);

    center.addZone(
        islamabad
    );

    int choice;

    do
    {
        cout << "\n==================================";
        cout << "\n EMERGENCY RESPONSE SYSTEM";
        cout << "\n==================================";

        cout << "\n1. Report Emergency";
        cout << "\n2. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice)
        {
            case 1:
            {
                string description;

                float x, y;

                cout << "\nEnter Emergency Description: ";
                getline(cin, description);

                cout << "Enter Incident X Coordinate: ";
                cin >> x;

                cout << "Enter Incident Y Coordinate: ";
                cin >> y;

                cin.ignore();

                Caller caller(
                    "Ahmed",
                    "03001234567"
                );

                static int callID = 1;

                EmergencyCall call(
                    callID++,
                    caller,
                    description,
                    Location(x, y)
                );

                center.receiveEmergencyCall(call);

                break;
            }

            case 2:

                cout
                    << "\nSystem Shutdown."
                    << endl;

                break;

            default:

                cout
                    << "\nInvalid Choice."
                    << endl;
        }

    } while(choice != 2);1

    return 0;
}