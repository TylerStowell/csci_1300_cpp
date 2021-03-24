#include <iostream>
#include <string>
using namespace std;

#ifndef TEAM_H
#define TEAM_H

class Team
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

#endif