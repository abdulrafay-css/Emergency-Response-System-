#include "../include/Caller.h"
#include <iostream>

using namespace std;

Caller::Caller()
{
    name = "Unknown";
    phoneNumber = "N/A";
}

Caller::Caller(string name, string phoneNumber)
{
    this->name = name;
    this->phoneNumber = phoneNumber;
}

string Caller::getName() const
{
    return name;
}

string Caller::getPhoneNumber() const
{
    return phoneNumber;
}

void Caller::displayInfo() const
{
    cout << "Caller Name: " << name << endl;
    cout << "Phone Number: " << phoneNumber << endl;
}