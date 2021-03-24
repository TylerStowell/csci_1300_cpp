// this is the astroid belt and or other things that will affect the ship shield

// #include <iostream>
// #include <string>
// #include <vector>
using namespace std;

#ifndef OBSTACLE_H
#define OBSTACLE_H

class Obstacle
{
public:
    Obstacle();
    Obstacle(string n, double pos, double s);
    void setMeteorName(string n);
    void setMeteorSize(double s);
    void setMeteorPosition(double pos);
    string getMeteorName();
    double getMeteorSize();
    double getMeteorPosition();
    
private:
    string meteorName;
    double meteorSize;
    double meteorPosition;
    
};

#endif