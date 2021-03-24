// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 1

#include <iostream>
#include <string>
using namespace std;

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

Planet::Planet() // default constructor
{
    planetName = "";
    planetRadius = 0.0;
}

Planet::Planet(string s, double r) // paramerterized constructor
{
    planetName = s;
    planetRadius = r;
}

void Planet::setName(string s) // puts in the name of the planet
{
    planetName = s;
}

void Planet::setRadius(double r) // puts in the radius
{
    planetRadius = r;
}

string Planet::getName() const // gets the name of the planet
{
    return planetName;
}

double Planet::getRadius() const // gets the planet's radius
{
    return planetRadius;
}

double Planet::getVolume() const // gets the volume of the planet by a formula with the planet's radius
{
    int volume;
    volume = (4.0/3.0) * M_PI * (pow(planetRadius,3));
    return volume;
}

int main()
{
    Planet tyler;
    tyler.setName("Tyler");
    cout << "Planet" << planetName << endl;
    
}