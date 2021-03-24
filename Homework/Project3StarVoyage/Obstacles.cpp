// // #include <iostream>
// // #include <string>
// // #include <vector>
// // #include <iomanip>
// // #include <algorithm>
// // #include <locale>
// #include <fstream>
// // #include <cstdlib> // sorting
// #include "Obstacles.h"
using namespace std;


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

int Obsticles::split(string line, char c, string strArray[], int maxStrings) // splits the lines of the text file
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


void Obstacles::setObstaclesName(string n) // sets the name of the obstacle
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
            split(line, ',', strArray, maxStrings); // splits the information by the comma
            
            Obstacle obstacle(strArray[0],stod(strArray[1]),stod(strArray[2])); // sets the data from the file into the obstacles class
            obstacles.push_back(obstacle); // adds the obstavle to the vector of obstacles
        }
    }
    myfile.close(); // closes file 
}

string Obstacles::getObstaclesName(int i) // returns the obstacle's name
{
    if(i < 0 || i >= obstacles.size()) // checks bounds to see if it is a legal call for i
    {
        return "ERROR"; // return value if the value of i is outside of the bounds of the obstacles.size()
    }
    else
    {
        return obstacles[i].getMeteorName(); // returns the obstacle's name as a string 
    }
}

double Obstacles::getObstaclesPosition(int i) // returns the obstacle's position
{
    if(i < 0 || i >= obstacles.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the obstacles.size()
    }
    else
    {
        return obstacles[i].getMeteorPosition(); // returns the obstacle's position
    }
}

double Obstacles::getObstaclesSize(int i) // returns the obstacle's size
{
    if(i < 0 || i >= obstacles.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the obstacles.size()
    }
    else
    {
        return obstacles[i].getMeteorSize(); // returns the obstacle's size
    }
}