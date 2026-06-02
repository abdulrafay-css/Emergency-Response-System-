#ifndef LOCATION_H
#define LOCATION_H

class Location
{
private:
    float x;
    float y;

public:
    Location();
    Location(float x, float y);

    float getX() const;
    float getY() const;

    void setX(float x);
    void setY(float y);

    float calculateDistance(const Location& other) const;
};

#endif
