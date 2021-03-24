#include <iostream>
#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    Player();
    Player(string n, double p);
    void setName(string n);
    void setPoints(double p);
    string getName() const;
    double getPoints() const;

private:
    string name;
    double points;
};

#endif