// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 3

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <fstream>
using namespace std;



class Player
{
public:
    Player();
    Player(string n, double p);
    void setName(string n);
    void setPoints(double p);
    string getName() const;
    double getPoints() const;

private:
    string name;
    double points;
};

Player::Player() // default constructor
{
    name = "";
    points = 0;
}

Player::Player(string n, double p) // parameterized constructor
{
    name = n;
    points = p;
}

void Player::setName(string n) // sets the name of the player
{
    name = n;
}

void Player::setPoints(double p) // sets the points for the player
{
    points = p;
}

string Player::getName() const // gets the name of the player
{
    return name;
}

double Player::getPoints() const // gets the points of the player
{
    return points;
}

class Team // team class
{
public:
    Team();
    Team(string n);
    void setTeamName(string n);
    void readRoster(string fileName);
    string getPlayerName(int i);
    int getNumPlayers();
    double getPlayerPoints(int i);
    string getTeamName();

private:
    string teamName;
    vector<Player> players;
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

Team::Team() // default constructor
{
    teamName = "";
    players.clear();
}

Team::Team(string n) // parameterized constructor
{
    teamName = n;
    players.clear();
}

void Team::setTeamName(string n) // sets the team's name
{
    teamName = n;
}

void Team::readRoster(string fileName) // reads the roster files and puts the names and points of the players into the players vector
{
    ifstream myfile;
    myfile.open(fileName); // opens the file
    int lineindex = 0;
    int maxStrings = 2;
    if (myfile.is_open()) // do things if the file is open
    {
        string line = "";
        while(getline(myfile, line)) // loop throught the lines of the file
        {
            string strArray[2];
            split(line, ',', strArray, maxStrings); // splits the name and the points by the comma
            
            Player player(strArray[0],stod(strArray[1])); // sets the name and points of the player from the roster into the player class
            players.push_back(player); // adds the player to the vector of players
        }
    }
    myfile.close(); // closes file
}

string Team::getPlayerName(int i) // gets  the name of the player and returns a string
{
    if(i < 0 || i >= players.size()) // checks bounds to see if it is a legal call for i
    {
        return "ERROR"; // return value if the value of i is outside of the bounds of the players.size()
    }
    else
    {
        return players[i].getName(); // returns a string of the player's name
    }
}

int Team::getNumPlayers() // gets and returns the number  of players on the team
{
    return players.size(); // returns the sze of the team
}

double Team::getPlayerPoints(int i) // gets and returns the points of the players on the teams
{
    if(i < 0 || i >= players.size()) // checks bounds to see if it is a legal call for i
    {
        return -1; // return value if the value of i is outside of the bounds of the players.size()
    }
    else
    {
        return players[i].getPoints(); // returns a double of the player's points
    }
}

string Team::getTeamName() // gets and returns the team's name
{
    return teamName; // return value of string for team's name
}

int main() // function to call my team class
{
    //test 1
    //expected output
    //
    Team team1;
    Team("Alpha");
    team1.setTeamName("Alpha");
    cout << team1.getTeamName() << endl;
    team1.readRoster("roster1.txt");
    int n1 = team1.getNumPlayers();
    cout << n1 << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << team1.getPlayerName(i) << " ";
        cout << team1.getPlayerPoints(i) << endl;
    }
    
    cout << endl;
    //test 2
    // expected output
    //
    Team team2;
    team2.setTeamName("The Underminers");
    cout << team2.getTeamName() << endl;
    team2.readRoster("roster1.txt");
    team2.readRoster("roster2.txt");
    int n2 = team2.getNumPlayers();
    cout << n2 << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << team2.getPlayerName(i) << " ";
        cout << team2.getPlayerPoints(i) << endl;
    }
}



