// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 4

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <fstream>
using namespace std;

/*
* Algorithm: 
// Input parameters: team1 (Team class) , team2 (Team class)
// 1. check each team had at least 4 players with the getNumPlayers member function
// 2. loop throught the getplayerpoints for first ex; 4 players
// 3. add the points up one sum for each team
// 4. check for draw or win
// Output (prints to screen): none
// Returns: team name of winning team (string)
*/


string game(Team team1, Team team2) // function to play a game and adds up the scores of the first 4
                                    // players on each team to determin what team has the most ammount of points and wins
{
    if(team1.getNumPlayers() < 4 || team2.getNumPlayers() < 4) // checks if both teams have at least 4 players on them
    {
        return "forfeit"; // if one of both don't have at least 4 players on the, returns "forfeit"
    }
    else
    {
        double team1_total = 0; // variable for team1's total points
        double team2_total = 0; // variable for team2's total points
        for(int i = 0; i < 4; i++) // loops throught the first 4 players on each team
        {
            team1_total += team1.getPlayerPoints(i); // adds the player's, at the index, points to the team1's total points
            team2_total += team2.getPlayerPoints(i); // adds the player's, at the index, points to the team2's total points
        }
        if( team1_total == team2_total) // sees if both teams have the same total points
        {
            return "draw"; // if they do it returns a "draw"
        }
        else if(team1_total > team2_total) // if team1 has a hight total points
        {
            return team1.getTeamName(); // returns that they win
        }
        else if(team2_total > team1_total) // if team2 has a hight total points
        {
            return team2.getTeamName(); // returns that they win
        }
    }
}






