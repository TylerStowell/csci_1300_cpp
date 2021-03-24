// // #include <iostream>
// // #include <string>
// // #include <vector>
// // #include <iomanip>
// // #include <algorithm>
// // #include <locale>
// #include <fstream>
// // #include <cstdlib> // sorting
// #include "Obstacle.h"
using namespace std;



Obstacle::Obstacle // defailt constructor
{
    meteorName = "";
    meteorSize = 0;
    meteorPosition = 0;
}

Obstacle::Obstacle(string n, double pos, double s) // parameterized constructor
{
    meteorName = n;
    meteorPosition = rand() % 300 + 1;
    meteorSize = s;
}

void Obstacle::setMeteorName(string n) // sets the name of the meteor
{
    meteorName = n;
}

void Obstacle::setMeteorSize(double s) // sets the size of the meteor
{
    meteorSize = s;
}

void Obstacle::setMeteorPosition(double pos) // sets the position on the map the meteo can be found
{
    meteorPosition = rand() % 300 + 1;
}

string Obstacle::getMeteorName() // returns the name of the meteor
{
    return meteorName;
}

double Obstacle::getMeteorSize() // returns the size of the meteor
{
    return meteorSize;
}

double Obstacle::getMeteorPosition() // returns the position of the meteor on the map
{
    return meteorPosition;
}