// #include <iostream>
// #include <string>
// #include <vector>
using namespace std;

#ifndef SHIP_H
#define SHIP_H

class Ship
{
public:
    Ship();
    Ship(string n, double s, double shield, double p, double plaz, double cr);
    void setName(string n);
    void setStrength(double s);
    void setShieldStrength(double st);
    void setPower(double p);
    void setPlazma(double plaz);
    void setCrewSize(double cr);
    string getName();
    double getStrength();
    double getShieldStrength();
    double getPower();
    double getPlazma();
    double getCrewSize();

private:
    string name;
    double strength;
    double shieldStrength;
    double power;
    double plazma;
    double crew;
};

#endif