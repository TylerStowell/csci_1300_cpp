// #include <iostream>
// #include <string>
#include "Ship.h"
#include "Ships.h"
#include "Obstacle.h"
#include "Obstacles.h"
#include "Alien.h"
#include "Aliens.h"
// #include "Game.h"
// #include "Aliens.h"
// #include "Obstacles.h"
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game();
    // Game(double p, double power, double cr);
    void shipChoice();
    void moveMenu();
    void meteorMenu();
    void Play();
    void setDistance(double dist);
    void setDistanceLeft(double distl);
    void travel();
    void chargeShield();
    void rest();
    void destroy();
    void battle();
    void setPlasmaCharge(double p);
    void setPowerCore(double power);
    void setCrew(double cr);
    double getDistance();
    double getDistanceLeft();
    double getPlazmaCharge();
    double getPowerCore();
    double getCrewSize();

private:
    double distanceTraveled;
    double distanceLeft;
    // double plasmaCharge;
    // double power;
    // double crew;
    vector <Ships> ship1; // do like the ships class but with the values of the user choice in the (int i) parameter?
    vector<Obstacles> obstacle1;
    vector<Aliens> alien1;
};

#endif