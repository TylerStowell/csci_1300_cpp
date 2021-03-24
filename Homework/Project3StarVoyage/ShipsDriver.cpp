#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <fstream>
#include <cstdlib> // sorting
// #include "Ships.h"
using namespace std;

class Ship
{
public:
    Ship();
    Ship(string n, double s, double shield, double p, double plaz, double cr);
    void setName(string n);
    void setStrength(double s);
    void setShieldStrength(double st);
    void setPower(double p);
    void setPlazma(double plaz);
    void setCrewSize(double cr);
    string getName();
    double getStrength();
    double getShieldStrength();
    double getPower();
    double getPlazma();
    double getCrewSize();

private:
    string name;
    double strength;
    double shieldStrength;
    double power;
    double plazma;
    double crew;
};

Ship::Ship()
{
    name = "";
    strength = 0;
    shieldStrength = 0;
    power = 0;
    plazma = 0;
    crew = 0;
}

Ship::Ship(string n, double s, double shield, double p, double plaz, double cr)
{
    name = n;
    strength = s;
    shieldStrength = shield;
    power = p;
    plazma = plaz;
    crew = cr;
}

void Ship::setName(string n)
{
    name = n;
}

void Ship::setStrength(double s)
{
    strength = s;
}

void Ship::setShieldStrength(double st)
{
    shieldStrength = st;
}

void Ship::setPower(double p)
{
    power = p;
}

void Ship::setPlazma(double plaz)
{
    plazma = plaz;
}

void Ship::setCrewSize(double cr)
{
    crew = cr;
}

string Ship::getName()
{
    return name;
}

double Ship::getStrength()
{
    return strength;
}

double Ship::getShieldStrength()
{
    return shieldStrength;
}

double Ship::getPower()
{
    return power;
}

double Ship::getPlazma()
{
    return plazma;
}

double Ship::getCrewSize()
{
    return crew;
}



class Ships
{
public:
    Ships();
    Ships(string n);
    void setShipName(string n);
    void readShips(string fileName);
    string getShipName(int i);
    double getShipStrength(int i);
    double getShipShieldStrength(int i);
    double getShipPower(int i);
    double getShipPlazma(int i);
    double getShipCrewSize(int i);
    void display() const;

private:
    string shipName;
    vector<Ship>ships;
};


int split (string line, char c, string strArray[], int maxStrings) // splits the lines of the text file
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

Ships::Ships()
{
    shipName = "";
    ships.clear();
}

Ships::Ships(string n)
{
    shipName = n;
    ships.clear();
}

void Ships::setShipName(string n)
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
            split(line, ',', strArray, maxStrings); // splits the name and the points by the comma
            
            Ship ship(strArray[0],stod(strArray[1]),stod(strArray[2]),stod(strArray[3]),stod(strArray[4]),stod(strArray[5])); // sets the name and points of the player from the roster into the player class
            ships.push_back(ship); // adds the player to the vector of players
        }
    }
    myfile.close(); // closes file 
}

string Ships::getShipName(int i)
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return "ERROR"; // return value if the value of i is outside of the bounds of the players.size()
    }
    else
    {
        return ships[i].getName(); // returns a string of the player's name
    }
}

double Ships::getShipStrength(int i)
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the players.size()
    }
    else
    {
        return ships[i].getStrength(); // returns a string of the player's name
    }
}

double Ships::getShipShieldStrength(int i)
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the players.size()
    }
    else
    {
        return ships[i].getShieldStrength(); // returns a string of the player's name
    }
}

double Ships::getShipPower(int i)
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the players.size()
    }
    else
    {
        return ships[i].getPower(); // returns a string of the player's name
    }
}

double Ships::getShipPlazma(int i)
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the players.size()
    }
    else
    {
        return ships[i].getPlazma(); // returns a string of the player's name
    }
}

double Ships::getShipCrewSize(int i)
{
    if(i < 0 || i >= ships.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the players.size()
    }
    else
    {
        return ships[i].getCrewSize(); // returns a string of the player's name
    }
}


int main()
{
    Ships ship1("Falcon");
    ship1.readShips("Ships.txt");
    ship1.setShipName("Falcon"); // can I use a .get() function here for the minue choice on what ship they want? (minue choice -1 = ship they want)
    cout << ship1.getShipName(0) << endl; // instead of 0 use the minur choice number - 1 in the parameter
    cout << ship1.getShipStrength(0) << endl;
    cout << ship1.getShipShieldStrength(0) << endl;
    cout << ship1.getShipPower(0) << endl;
    cout << ship1.getShipPlazma(0) << endl;
    cout << ship1.getShipCrewSize(0) << endl;
}