// #include <vector>
// #include <iomanip>
// #include <algorithm>
// #include <locale>
#include <fstream>
#include <cstdlib> // sorting
#include "Alien.h"
using namespace std;

Alien::Alien() // default constructor
{
    alienName = "";
    alienStrength = 0;
    alienCrew = 0;
    alienPosition = 0;
}

Alien::Alien(string n, double apos, double st, double cr) // parameterized constructor
{
    alienName = n;
    alienStrength = st;
    alienCrew = cr;
    alienPosition = apos;
}

void Alien::setAlienName(string n) // sets the name
{
    alienName = n;
}

void Alien::setAlienStrength(double st) // sets the strength
{
    alienStrength = st;
}

void Alien::setAlienCrew(double cr) // sets the crew size
{
    alienCrew = cr;
}

void Alien::setAlienPosition(double apos) // sets the position on the path the alien will be
{
    alienPosition = apos;
}

string Alien::getAlienName() // returns the name of the alien
{
    return alienName;
}

double Alien::getAlienStrength() // returns the alien's strenght
{
    return alienStrength;
}

double Alien::getAlienCrew() // returns the size of the crew
{
    return alienCrew;
}
