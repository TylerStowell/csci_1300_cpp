// // #include <iostream>
// // #include <string>
// // #include <vector>
// // #include <iomanip>
// // #include <algorithm>
// // #include <locale>
// #include <fstream>
// // #include <cstdlib> // sorting
// #include "Obstacle.h"
// // #include "Obstacle.cpp"
using namespace std;

#ifndef OBSTACLES_H
#define OBSTACLES_H

class Obstacles
{
public:
    Obstacles();
    Obstacles(string n);
    int split (string line, char c, string strArray[], int maxStrings);
    void setObstaclesName(string n);
    void readObstacles(string filename);
    string getObstaclesName(int i);
    double getObstaclesPosition(int i);
    double getObstaclesSize(int i);
    
private:
    string obstacleName;
    vector<Obstacle>obstacles;
    
};

#endif