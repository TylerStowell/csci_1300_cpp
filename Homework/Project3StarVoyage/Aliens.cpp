// #include <iomanip>
// // #include <algorithm>
// // #include <locale>
// #include <fstream>
// // #include <cstdlib> // sorting
// #include "Aliens.h"
using namespace std;

int Aliens::split (string line, char c, string strArray[], int maxStrings) // splits the lines of the text file
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

Aliens::Aliens() // default constructor
{
    aliensName = "";
    aliens.clear();
}

Aliens::Aliens(string n) // parameterized constructor
{
    aliensName = n;
    aliens.clear();
}

void Aliens::setAliensName(string n) // sets the name of the single alien from the file
{
    aliensName = n;
}

void Aliens::readAliens(string fileName) // reads the roster files and puts the names and points of the players into the players vector
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
            
            Alien alien(strArray[0],stod(strArray[1]),stod(strArray[2])); // sets the name and points of the player from the roster into the player class
            aliens.push_back(alien); // adds the player to the vector of players
        }
    }
    myfile.close(); // closes file 
}


string Aliens::getAliensName(int i) // returns the name of the desired alien
{
    if(i < 0 || i >= aliens.size()) // checks bounds to see if it is a legal call for i
    {
        return "ERROR"; // return value if the value of i is outside of the bounds of the aliens.size()
    }
    else
    {
        return aliens[i].getAlienName(); // returns a string of the alien's name
    }
}

double Aliens::getAliensCrew(int i)
{
    if(i < 0 || i >= aliens.size()) // checks bounds to see if it is a legal call for i
    
    else
    {
        return aliens[i].getAliensPosition(); // returns a string of the position
    }  
}

double Aliens::getAliensStrength(int i)
{
    if(i < 0 || i >= aliens.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the aliens.size()
    }
    else
    {
        return aliens[i].getAlienStrength(); // returns a string of the strength
    }
}

double Aliens::getAliensCrew(int i)
{
    if(i < 0 || i >= aliens.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the aliens.size()
    }
    else
    {
        return aliens[i].getAlienCrew(); // returns a string of the crew size
    }
}