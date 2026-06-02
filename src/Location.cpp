#include "../include/Location.h"
#include <cmath>

Location::Location()
{
    x = 0;
    y = 0;
}

Location::Location(float x, float y)
{
    this->x = x;
    this->y = y;
}

float Location::getX() const
{
    return x;
}

float Location::getY() const
{
    return y;
}

void Location::setX(float x)
{
    this->x = x;
}

void Location::setY(float y)
{
    this->y = y;
}

float Location::calculateDistance(const Location& other) const
{
    float dx = other.getX() - x;
    float dy = other.getY() - y;

    return sqrt(dx * dx + dy * dy);
}