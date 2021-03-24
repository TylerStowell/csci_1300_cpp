// #include <vector>
// // #include <iomanip>
// // #include <algorithm>
// #include <locale>
// #include <fstream>
// #include "Ship.h"
using namespace std;

Ship::Ship() // default constructor
{
    name = "";
    strength = 0;
    shieldStrength = 0;
    power = 0;
    plazma = 0;
    crew = 0;
}

Ship::Ship(string n, double s, double shield, double p, double plaz, double cr) // parameterized constructor
{
    name = n;
    strength = s;
    shieldStrength = shield;
    power = p;
    plazma = plaz;
    crew = cr;
}

void Ship::setName(string n) // sets the name of the ship
{
    name = n;
}

void Ship::setStrength(double s) // sets the strength of the ship
{
    strength = s;
}

void Ship::setShieldStrength(double st) // sets the strength of the shield
{
    shieldStrength = st;
}

void Ship::setPower(double p) // sets the power of the ship
{
    power = p;
}

void Ship::setPlazma(double plaz) // sets the plazma of the ship
{
    plazma = plaz;
}

void Ship::setCrewSize(double cr) // sets the crew size
{
    crew = cr;
}

string Ship::getName() // returns the name of the ship
{
    return name;
}

double Ship::getStrength() // returns the strength of the ship
{
    return strength;
}

double Ship::getShieldStrength() // returns the strength of the shield
{
    return shieldStrength;
}

double Ship::getPower() // returns the power of the ship
{
    return power;
}

double Ship::getPlazma() // returns the plazma of the ship
{
    return plazma;
}

double Ship::getCrewSize() // returns the crew size of the ship
{
    return crew;
}
