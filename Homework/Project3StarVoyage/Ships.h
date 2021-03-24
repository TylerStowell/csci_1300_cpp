// // #include <iostream>
// // #include <string>
// // #include <vector>
// #include "Ship.h"
using namespace std;

#ifndef SHIPS_H
#define SHIPS_H

class Ships
{
public:
    Ships();
    Ships(string n);
    int split (string line, char c, string strArray[], int maxStrings);
    void setShipName(string n);
    void readShips(string fileName);
    string getShipName(int i);
    double getShipStrength(int i);
    double getShipShieldStrength(int i);
    double getShipPower(int i);
    double getShipPlazma(int i);
    double getShipCrewSize(int i);
    void display() const;

private:
    string shipName;
    vector<Ship>ships;
};

#endif