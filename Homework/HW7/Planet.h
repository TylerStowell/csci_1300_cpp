#include <iostream>
#include <string>
using namespace std;

#ifndef PLANET_H
#define PLANET_H

class Planet
{
public:
    Planet();
    Planet(string s, double r);
    void setName(string s);
    void setRadius(double r);
    string getName() const;
    double getRadius() const;
    double getVolume() const;
    void display() const;
    
private:
    string planetName;
    double planetRadius;
};

#endif