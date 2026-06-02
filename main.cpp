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

        cout << "\n1. Fire Emergency";
        cout << "\n2. Medical Emergency";
        cout << "\n3. Crime Emergency";
        cout << "\n4. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

        Caller caller(
            "Ahmed",
            "03001234567"
        );

        EmergencyCall call;

        switch(choice)
        {
            case 1:

                call =
                    EmergencyCall(
                        1,
                        caller,
                        "Critical fire and explosion in warehouse",
                        Location(18,18)
                    );

                center.receiveEmergencyCall(
                    call
                );

                break;

            case 2:

                call =
                    EmergencyCall(
                        2,
                        caller,
                        "Person unconscious and dying",
                        Location(12,12)
                    );

                center.receiveEmergencyCall(
                    call
                );

                break;

            case 3:

                call =
                    EmergencyCall(
                        3,
                        caller,
                        "Armed robbery and gun attack",
                        Location(25,25)
                    );

                center.receiveEmergencyCall(
                    call
                );

                break;

            case 4:

                cout
                    << "\nSystem Shutdown."
                    << endl;

                break;

            default:

                cout
                    << "\nInvalid Choice."
                    << endl;
        }

    } while(choice != 4);

    return 0;
}