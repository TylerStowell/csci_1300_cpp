// #include <iostream>
// #include <string>
// #include <vector>
using namespace std;

#ifndef ALIEN_H
#define ALIEN_H

class Alien
{
public:
    Alien();
    Alien(string n, double st, double cr);
    void setAlienName(string n);
    void setAlienCrew(double cr);
    void setAlienStrength(double st);
    string getAlienName();
    double getAlienCrew();
    double getAlienStrength();
    
private:
    string alienName;
    double alienStrength;
    double alienShieldStrength;
    double alienCrew;
    double alienPosition;
};

#endif