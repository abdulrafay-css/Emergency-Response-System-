#ifndef CALLER_H
#define CALLER_H

#include <string>

using namespace std;

class Caller
{
private:
    string name;
    string phoneNumber;

public:
    Caller();
    Caller(string name, string phoneNumber);

    string getName() const;
    string getPhoneNumber() const;

    void displayInfo() const;
};

#endif
