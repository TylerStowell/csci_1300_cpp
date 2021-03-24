// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Project 3 driver

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <fstream>
#include <cstdlib> // sorting
// #include "Ship.h"
// #include "Ships.h"
// #include "Ship.cpp"
// #include "Ships.cpp"
#include "Game.h"
#include "Game.cpp"

using namespace std;

/*
* Algorithm: this game displays a welcome and then a menu. The user can see the instructions and the ships available to play as
//           then the player plays the game with menu option 3. The game asks the player to pick a ship, then shows the ship's
//           stats each turn because they get updated throughout. The player choses to travel, rest, or chargewr chield which affects
//           different aspects of the ship. Every turn, the game checks if the ship is in the same location as an obstacle of an alien.
//           the player has to deside, in both cases, to fight/destroy or to run away. Different strategies can be helpful or devistating.
//           the end goal of this game is to get to the next planet 300 light years away with your ship intact and crew alive.
* 1. show welcome and the menu
* 2. let user choose menu option untill they choose to play the game
* 3. play the game
* Input parameters: none
* Output (prints to screen): the winn or loss of the game
* Returns: 
*/

/* displayMenu:
 * displays a menu with options
 */
 

void printIntro(string fileName) // reads the roster files and puts the names and points of the players into the players vector
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
            cout << line << endl;
        }
    }
    myfile.close(); // closes file 
}

void readInstructions(string fileName) // reads the roster files and puts the names and points of the players into the players vector
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
            cout << line << endl;
        }
    }
    myfile.close(); // closes file 
}

void displayMenu() // statring menut to start game or other freatures before beginning the game
{
    cout << endl << endl;
	cout << "Select a numerical option:" << endl;
	cout << "======Main Menu=====" << endl;
	cout << "1. Learn how to play " << endl;
	cout << "2. See the star fleet" << endl;
	cout << "3. Play game" << endl;
	cout << "4. Quit" << endl << endl;
}

void moveMenu() // menue in the game to make turns
{
    cout << endl;
	cout << "Select a numerical option:" << endl;
	cout << "======Menu=====" << endl;
	cout << "1. Travel " << endl;
	cout << "2. rest" << endl;
	cout << "3. charge shield" << endl;
}

void meteorMenu() // menue in the meteor interaction to go around or shoot the meteor
{
	cout << endl;
	cout << "Select a numerical option:" << endl;
	cout << "======Menu=====" << endl;
	cout << "1. Go around " << endl;
	cout << "2. Shoot meteor" << endl << endl;
}

void shipChoice() // statring menut to start game or other freatures before beginning the game
{
    cout << endl;
	cout << "Select a numerical option:" << endl;
	cout << "======Ship Choice=====" << endl;
	cout << "1. Falcon" << endl;
	cout << "2. Zipper" << endl;
	cout << "3. Titan" << endl;
	cout << "4. Quit" << endl << endl;
}

int main(int argc, char const *argv[])
{
    printIntro("welcomeSign.txt");
    
    string choice;

    while (choice != "4")
    {
        displayMenu();

        // take a menu opton
        getline(cin, choice);

        // convert the choice to an integer
        int menuChoice = stoi(choice);

        // prints the intro stating the instructions on how to play and what the ship's stats mean and affect
        if(menuChoice == 1)
        {
            readInstructions("instructions.txt");
            cout << endl;
            cout << endl;
        }
        
        // shows the user the different ships they can choose from
        // also displays the stats of each ship to help you pick which you may want to use
        else if(menuChoice == 2) // menu oprion to display the directions
        {
            Ships ship1("Falcon");
            ship1.readShips("Ships.txt");
            
            for(int i = 0; i < 3; i++) // loops three times to print the name and stats of all three ships
                {
                    cout << endl << "Ship Name: " << ship1.getShipName(i) << endl; // instead of 0 use the minur choice number - 1 in the parameter
                    cout << "       Strength: " << ship1.getShipStrength(i) << endl;
                    cout << "       Shield Strength: " << ship1.getShipShieldStrength(i) << endl;
                    cout << "       Ship Power: " << ship1.getShipPower(i) << endl;
                    cout << "       Plazma: " << ship1.getShipPlazma(i) << endl;
                    cout << "       Crew Size: " << ship1.getShipCrewSize(i) << endl; 
                }
                cout << endl;
        }
        else if(menuChoice == 3) // menu option to play the game
        {
            // this is the option that actualy plays the game
            // here will have all of the code for playing the game, including the
            // if statements and calls to classes
            
            cout << "choice 3. Game Plays";
            
            bool destroyed = false; // initializes the boolean flag to be false so the loop goes at least once
            int playersShip;
            
            // initializing the three obstacles positions.
            Obstacles obstacleA;
            Obstacles obstacleB;
            Obstacles obstacleC;
        
            // initializing the three aliens positions on the path
            Aliens alienA;
            Aliens alienB;
            Aliens alienC;
        
            // this is the path the ship travels on to get to the end planet
            int trail[300]; // array of numbers 1-300 for the path the ship goes on
            for(int i = 0; i < 300; i++)// loops throught 300 times to fill in each spot of the aray with the values of 1-300
            {
                trail[i] = i + 1;
            }
            
            // prompts the user to pick what ship they want to play as
            string chooseShip;
            
            shipChoice(); // displays the menue with the ships options
            getline(cin, chooseShip); // reads the user's input and sets it as the chooseShip variable
            int shipchoice = stoi(chooseShip); // converts the user's string input to a number to be used in the function call later
            
            if(shipchoice == 1)
            {
                playersShip = 0;
            }
            else if(shipchoice == 2)
            {
                playersShip = 1;
            }
            else if(shipchoice == 3)
            { 
                playersShip = 2;
            }
            
            // initialize all of the single ship's features from the Ships class. Based off what ship the player chooses
            
            // Ships ship2();
            // ship2.readShips("Ships.txt");
            // ship1.setShipName("Falcon");
            
            Ships ship1("Falcon");
            ship1.readShips("Ships.txt");
            ship1.setShipName("Falcon"); // can I use a .get() function here for the minue choice on what ship they want? (minue choice -1 = ship they want)
            // cout << ship1.getShipName(0) << endl; // instead of 0 use the minur choice number - 1 in the parameter
            // cout << ship1.getShipStrength(0) << endl;
            // cout << ship1.getShipShieldStrength(0) << endl;
            // cout << ship1.getShipPower(0) << endl;
            // cout << ship1.getShipPlazma(0) << endl;
            // cout << ship1.getShipCrewSize(0) << endl;
            
            string shipName = ship1.getShipName(playersShip);
            double shipPower = ship1.getShipPower(playersShip);
            double shipStrength = ship1.getShipStrength(playersShip);
            double shipShield = ship1.getShipShieldStrength(playersShip);
            double shipPlazma = ship1.getShipPlazma(playersShip);
            double shipCrew = ship1.getShipCrewSize(playersShip);
            
        
            while(destroyed == false) // boolean flag to see if the game should continue. When the ship is destroyed, the game ends
            {
                while(distanceLeft > 0)
                {
                    
                    double distanceTraveled = 0;
                    double distanceLeft = 300;
                    double distanceT = getDistance();
                    double distanceL = getDistanceLeft();
                    
                    // each time the player makes a choice and something happens to the ship, good or bad, this prints the stats on the ship to let the layer know what they have
                    cout << "Distance traveled: " << distanceT << " light years" << endl;
                    cout << "Distance to Star Base: " << distanceL << " light years" << endl << endl;
                    cout << "Power: " << shipPower << endl;
                    cout << "Strength: " << shipStrength << endl;
                    cout << "Shield Strength: " << shipShield << endl;
                    cout << "Plazma: " << shipPlazma << endl;
                    cout << "Crew: " << shipCrew << endl << endl << endl;
                    
                    
                    string playerMove;
                    moveMenu(); // calls the menue function to display the choices
                
                    getline(cin, playerMove); // takes user's input
                    int move = stoi(playerMove); // changes string to integer to be used in the if else statements
                    
                    if(move == 1)
                    {
                        travel(); // calls the travel function if the user chooses the first choice, travel
                    }
                    else if(shipchoice == 2)
                    {
                        rest(); // calls the rest function if the user chooses the second choice, rest
                    }
                    else if(shipchoice == 3)
                    {
                        chargeShield(); // calls the chargeShield function if the user chose the third choice, charge shield
                    }
                    
                    if(distanceTraveled == obstacleA.getMeteorPosition(0) || distanceTraveled == obstacleB.getMeteorPosition(1) || distanceTraveled == obstacleC.getMeteorPosition(2))
                    {
                        string meteorChoice;
                        meteorMenu(); // calls the meteorMinue function to display the options the user has on shooting the obstacle or going around.
                        
                        getline(cin, meteorChoice);
                        int meteor = stoi(meteorChoice);
                        
                        if(meteor == 1)
                        {
                            destroy(); // calls the function to run if the ship destroys the meteor of if the ship gets destroyed and the game ends in a loss.
                        }
                        else
                        {
                            setDistanceLeft(getDistanceLeft() + 10); // going around the meteor adds 10 light years to the players path
                        }
                        
                    }
                    
                    if(distanceTraveled == alienA.getAliensPostition(0) || distanceTraveled == alienB.getAliensPostition(1) || distanceTraveled == alienC.getAliensPostition(2))
                    {
                      battle(); // calls the function for the ship to battle the alien. The ship wins or gets destroyed and the game ends
                    }
                }
                
                if(destroyed == true) // game ends when destroyed = true
                {
                    cout << "Your ship has been destroyed. Try again, and this time... don't die." << endl;
                }
            }
            
            
        }
        
        else if(menuChoice == 4) // quits the game
        {
            cout << "good bye!" << endl;
        }
        
        else
        {
            // tells the user that the choice they made isn't valid
            // redisplays the menue
            cout << "invalid input" << endl;
        }

    }
}