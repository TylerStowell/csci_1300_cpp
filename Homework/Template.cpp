// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem #

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <fstream>
#include <cstdlib> // sorting
#include <sstream>
using namespace std;

int main()
{

  return 0;
}


////////////////////////////////////////////////
//              Class .h
////////////////////////////////////////////////
#ifndef ALIEN_H
#define ALIEN_H

class Alien
{
public:
    Alien();
    Alien(string n, double st, double cr);
    void setAlienName(string n);
    void setAlienCrew(double cr);
    void setAlienStrength(double st);
    string getAlienName();
    double getAlienCrew();
    double getAlienStrength();

private:
    string alienName;
    double alienStrength;
    double alienShieldStrength;
    double alienCrew;
    double alienPosition;
};

#endif

////////////////////////////////////////////////
//              Class .cpp
////////////////////////////////////////////////

Alien::Alien() // default constructor
{
    alienName = "";
    alienStrength = 0;
    alienCrew = 0;
    alienPosition = 0;
}

Alien::Alien(string n, double apos, double st, double cr) // parameterized constructor
{
    alienName = n;
    alienStrength = st;
    alienCrew = cr;
    alienPosition = apos;
}

void Alien::setAlienName(string n) // sets the name
{
    alienName = n;
}


////////////////////////////////////////////////
//              Read file
////////////////////////////////////////////////

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

////////////////////////////////////////////////
//              Find Odd Number
////////////////////////////////////////////////

if(num % 2 = 1)
  odd

////////////////////////////////////////////////
//              Split
////////////////////////////////////////////////

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

////////////////////////////////////////////////
//              Run in bash
////////////////////////////////////////////////

open files: cd (fileName) no spaces
run things: *.cpp (opens all .cpp files in the folder)
compile: ./a.out


////////////////////////////////////////////////
//              switch
////////////////////////////////////////////////

switch()
{
    case : ;break;
    case : ;break;
    case : ;break;
    default: ;
}

////////////////////////////////////////////////
//              for loop
////////////////////////////////////////////////

for(int i = 0; i < 10; i++)
{

}

////////////////////////////////////////////////
//              if/else
////////////////////////////////////////////////

if()
{

}
else
{

}

////////////////////////////////////////////////
//              in/out
////////////////////////////////////////////////

cout << "" << endl;

cin >> ;

////////////////////////////////////////////////
//              while loop
////////////////////////////////////////////////

int i = 0;
while(i<10)
{
    //body
    i++;
}
return 0;

////////////////////////////////////////////////
//              do while loop
////////////////////////////////////////////////


////////////////////////////////////////////////
//              Array
////////////////////////////////////////////////
int sequence[100]; // array of numbers 1-100
    for(int i = 0; i < 100; i++)
    {
        sequence[i] = i + 1;
    }

////////////////////////////////////////////////
//              2D Array
////////////////////////////////////////////////
 int array[#][#];
 for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 26; j++)
    {

    }

////////////////////////////////////////////////
//              lowercase
////////////////////////////////////////////////
string lowerCase(string username)
{
    string user = username;
    for(unsigned int i=0;i<user.length();i++) // loops through the string
    {
        user[i] = tolower(username[i]); // converts uppercase to lowercase letters
    }
    return user;
}

////////////////////////////////////////////////
//              input file
////////////////////////////////////////////////
int getLinesFromFile(string fileName, int arr[], int length)
{
    ifstream myfile;
    myfile.open(fileName); // opens the file
    int lineindex = 0;
    if (myfile.is_open()) // do things if the file is open
    {
        string line = "";
        while(getline(myfile, line)) // loop throught the lines of the file
        {
            if(line != "")
            {
                if(lineindex < length) // add to the array aslong as the index is less than the length
                {
                    arr[lineindex] = stoi(line);
                    lineindex++;
                }
            }
        }
    }

    else // what to do if the file doesn't open
    {
        return -1;
    }
    return lineindex; // number of elements in the array
    myfile.close(); // closes file
}

// for getting multiple words input use
// getline(cin,str)


////////////////////////////////////////////////
//    Smallest/largest value in an array
////////////////////////////////////////////////

int temp = arr[0];
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
      }
   }
   return temp;
}
