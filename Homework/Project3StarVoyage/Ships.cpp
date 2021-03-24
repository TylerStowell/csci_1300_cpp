// #include <iomanip>
// #include <algorithm>
// #include <locale>
// #include <fstream>
// #include <cstdlib> // sorting
// #include "Ships.h"
using namespace std;

int Ships::split (string line, char c, string strArray[], int maxStrings) // splits the lines of the text file
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

Ships::Ships() // default constructor
{
    shipName = "";
    ships.clear(); // clears the Ships vector
}

Ships::Ships(string n) // parameterized constructor
{
    shipName = n;
    ships.clear();
}

void Ships::setShipName(string n) // sets name
{
    shipName = n;
}

void Ships::readShips(string fileName) // reads the roster files and puts the names and points of the players into the players vector
{
    ifstream myfile;
    myfile.open(fileName); // opens the file
    int lineindex = 0;
    int maxStrings = 6;
    if (myfile.is_open()) // do things if the file is open
    {
        string line = "";
        while(getline(myfile, line)) // loop throught the lines of the file
        {
            string strArray[6];
            split(line, ',', strArray, maxStrings); // splits the data by the comma
            
            Ship ship(strArray[0],stod(strArray[1]),stod(strArray[2]),stod(strArray[3]),stod(strArray[4]),stod(strArray[5])); // sets the name and stats of the ship into the ships class
            ships.push_back(ship); // adds the player to the vector of players
        }
    }
    myfile.close(); // closes file 
}

string Ships::getShipName(int i) // returns the name
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return "ERROR"; // return value if the value of i is outside of the bounds of the ships.size()
    }
    else
    {
        return ships[i].getName();  // returns a string of the name
    }
}

double Ships::getShipStrength(int i) // returns the strenght of the ship
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the ships.size()
    }
    else
    {
        return ships[i].getStrength(); // returns the strenght of the ship
    }
}

double Ships::getShipShieldStrength(int i) // returns the ship's shield strenght
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the ships.size()
    }
    else
    {
        return ships[i].getShieldStrength(); // returns the ship's shield strenght
    }
}

double Ships::getShipPower(int i) // returns the ship's power
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the ships.size()
    }
    else
    {
        return ships[i].getPower(); // returns the ship's power
    }
}

double Ships::getShipPlazma(int i) // returns the ship's plazma
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the ships.size()
    }
    else
    {
        return ships[i].getPlazma(); // returns the ship's plazma
    }
}

double Ships::getShipCrewSize(int i) // returns the crew size
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the ships.size()
    }
    else
    {
        return ships[i].getCrewSize(); // returns the crew size
    }
}