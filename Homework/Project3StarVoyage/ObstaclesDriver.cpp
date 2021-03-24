#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <fstream>
#include <cstdlib> // sorting
// #include "Obsticle.h"
using namespace std;

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

Obstacle::Obstacle()
{
    meteorName = "";
    meteorSize = 0;
    meteorPosition = 0;
}

Obstacle::Obstacle(string n, double pos, double s)
{
    meteorName = n;
    meteorPosition = rand() % 300 + 1;
    meteorSize = s;
}

void Obstacle::setMeteorName(string n)
{
    meteorName = n;
}

void Obstacle::setMeteorSize(double s)
{
    meteorSize = s;
}

void Obstacle::setMeteorPosition(double pos)
{
    meteorPosition = rand() % 300 + 1;
}

string Obstacle::getMeteorName()
{
    return meteorName;
}

double Obstacle::getMeteorSize()
{
    return meteorSize;
}

double Obstacle::getMeteorPosition()
{
    return meteorPosition;
}

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
    vector<Obstacle> obstacles;
    
};


Obstacles::Obstacles()
{
    obstacleName = "";
    obstacles.clear();
}

Obstacles::Obstacles(string n)
{
    obstacleName = n;
    obstacles.clear();
}

int Obstacles::split(string line, char c, string strArray[], int maxStrings) // splits the lines of the text file
    {
        if (line.length() == 0)
        {
            return 0;
        }
        string word = "";
        int count = 0;
        line = line + c;
        for (int i = 0; i < line.length(); i++) // loops through the line
        {
            if (line[i] == c) // checks for the delimiter
            {
            	if (word.length() == 0) continue; // skips enpty lines
                if(count > maxStrings) // if the count is already too big it exits and returns -1
                {
                    return -1;
                }
                strArray[count] = word; // puts the word that was split into a temperary array
                count++; // goes to the next word
                word = ""; // recets the wors for the next array input
            }
            else
            {
                word = word + line[i]; // adds the letters to the word untill it hits the delimiter again
            }
        }
        return count; // the number of words the line was split into
    }


void Obstacles::setObstaclesName(string n)
{
    obstacleName = n;
}

void Obstacles::readObstacles(string fileName) // reads the roster files and puts the names and points of the players into the players vector
{
    ifstream myfile;
    myfile.open(fileName); // opens the file
    int lineindex = 0;
    int maxStrings = 3;
    if (myfile.is_open()) // do things if the file is open
    {
        string line = "";
        while(getline(myfile, line)) // loop throught the lines of the file
        {
            string strArray[3];
            split(line, ',', strArray, maxStrings); // splits the name and the points by the comma
            
            Obstacle obstacle(strArray[0],stod(strArray[1]),stod(strArray[2])); // sets the name and points of the player from the roster into the player class
            obstacles.push_back(obstacle); // adds the player to the vector of players
            // ship (strArray[0],stod(strArray[1])); // sets the name and points of the player from the roster into the player class
            // players.push_back(player); // adds the player to the vector of players
        }
    }
    myfile.close(); // closes file 
}

string Obstacles::getObstaclesName(int i)
{
    if(i < 0 || i >= obstacles.size()) // checks bounds to see if it is a legal call for i
    {
        return "ERROR"; // return value if the value of i is outside of the bounds of the players.size()
    }
    else
    {
        return obstacles[i].getMeteorName(); // returns a string of the player's name
    }
}

double Obstacles::getObstaclesPosition(int i)
{
    if(i < 0 || i >= obstacles.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the players.size()
    }
    else
    {
        return obstacles[i].getMeteorPosition(); // returns a string of the player's name
    }
}

double Obstacles::getObstaclesSize(int i)
{
    if(i < 0 || i >= obstacles.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the players.size()
    }
    else
    {
        return obstacles[i].getMeteorSize(); // returns a string of the player's name
    }
}

int main()
{
    Obstacles obstacle1("XE3047");
    obstacle1.readObstacles("obstacles.txt");
    obstacle1.setObstaclesName("XE3047");
    cout << obstacle1.getObstaclesName(0) << endl;
    cout << obstacle1.getObstaclesPosition(0) << endl;
    cout << obstacle1.getObstaclesSize(0) << endl;
}