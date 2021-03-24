// these are the enemies that will make the ship loose or win money and shield strength and others

// #include <iostream>
// #include <string>
// #include <vector>
// #include "Alien.h"
using namespace std;

#ifndef ALIENS_H
#define ALIENS_H

class Aliens
{
public:
    Aliens();
    Aliens(string n);
    int split (string line, char c, string strArray[], int maxStrings);
    void setAliensName(string n);
    void readAliens(string fileName);
    string getAliensName(int i);
    double getAliensPosition(int i);
    double getAliensStrength(int i);
    double getAliensCrew(int i);
    
private:
    string aliensName;
    vector<Alien>aliens;
};

#endif