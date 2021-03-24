// #include <iostream>
// #include <string>
// #include <vector>
// // #include <iomanip>
// // #include <algorithm>
// // #include <locale>
// // #include <fstream>
// // #include <cstdlib> // sorting
// #include <stdlib.h> // random
// #include "Game.h"
// // #include "Ship.h"
// // #include "Ships.h"
// // #include "Alien.h"
// // #include "Aliens.h"
// #include "Obstacle.h"
// #include "Obstacles.h"
using namespace std;

Game::Game() // initializes the game with the distance traveled and needed to go
{
    distanceTraveled = 0;
    distanceLeft = 300;
    
}

void Game::shipChoice() // statring menut to start game or other freatures before beginning the game
{
	cout << "Select a numerical option:" << endl;
	cout << "======Ship Choice=====" << endl;
	cout << "1. Falcon" << endl;
	cout << "2. Zipper" << endl;
	cout << "3. Titan" << endl;
	cout << "4. Quit" << endl;
}

void Game::moveMenu() // menue in the game to make turns
{
	cout << "Select a numerical option:" << endl;
	cout << "======Menu=====" << endl;
	cout << "1. Travel " << endl;
	cout << "2. rest" << endl;
	cout << "3. charge shield" << endl;
}

void Game::meteorMenu() // menue in the meteor interaction to go around or shoot the meteor
{
    cout << "What are you going to do? " << endl << endl;
	cout << "Select a numerical option: " << endl;
	cout << "1. Go around " << endl;
	cout << "2. Shoot meteor " << endl;
}


// void Game::Play() // this is the function that does it all. Loads ship and player pics ship. initializes everything, sets up map
// {
//     bool destroyed = false; // initializes the boolean flag to be false so the loop goes at least once
//     int playersShip;
    
//     // initializing the three obstacles positions.
//     Obstacles obstacleA;
//     Obstacles obstacleB;
//     Obstacles obstacleC;

//     // initializing the three aliens positions on the path
//     Aliens alienA;
//     Aliens alienB;
//     Aliens alienC;

//     // this is the path the ship travels on to get to the end planet
//     int trail[300]; // array of numbers 1-300 for the path the ship goes on
//     for(int i = 0; i < 300; i++)// loops throught 300 times to fill in each spot of the aray with the values of 1-300
//     {
//         trail[i] = i + 1;
//     }
    
//     // prompts the user to pick what ship they want to play as
//     string chooseShip;
    
//     shipChoice(); // displays the menue with the ships options
//     getline(cin, chooseShip); // reads the user's input and sets it as the chooseShip variable
//     int shipchoice = stoi(chooseShip); // converts the user's string input to a number to be used in the function call later
    
//     if(shipchoice == 1)
//     {
//         playersShip = 0;
//     }
//     else if(shipchoice == 2)
//     {
//         playersShip = 1;
//     }
//     else if(shipchoice == 3)
//     { 
//         playersShip = 2;
//     }
    
//     // initialize all of the single ship's features from the Ships class. Based off what ship the player chooses
//     string shipName = ship1.getShipName(playersShip);
//     double shipPower = ship1.getShipPower(playersShip);
//     double shipStrength = ship1.getShipStrength(playersShip);
//     double shipShield = ship1.getShipShieldStrength(playersShip);
//     double shipPlazma = ship1.getShipPlazma(playersShip);
//     double shipCrew = ship1.getShipCrewSize(playersShip);

//     while(destroyed == false) // boolean flag to see if the game should continue. When the ship is destroyed, the game ends
//     {
//         // double distanceTraveled = 0;
//         // double distanceLeft = 300;
//         double distanceT = getDistance();
//         double distanceL = getDistanceLeft();
        
//         // each time the player makes a choice and something happens to the ship, good or bad, this prints the stats on the ship to let the layer know what they have
//         cout << "Distance traveled: " << distanceT << " light years" << endl;
//         cout << "Distance to Star Base: " << distanceL << " light years" << endl << endl;
//         cout << "Power: " << shipPower << endl;
//         cout << "Strength: " << shipStrength << endl;
//         cout << "Shield Strength: " << shipShield << endl;
//         cout << "Plazma: " << shipPlazma << endl;
//         cout << "Crew: " << shipCrew << endl << endl << endl;
        
        
//         string playerMove;
//         moveMenu(); // calls the menue function to display the choices
    
//         getline(cin, playerMove); // takes user's input
//         int move = stoi(playerMove); // changes string to integer to be used in the if else statements
        
//         if(move == 1)
//         {
//             travel(); // calls the travel function if the user chooses the first choice, travel
//         }
//         else if(shipchoice == 2)
//         {
//             rest(); // calls the rest function if the user chooses the second choice, rest
//         }
//         else if(shipchoice == 3)
//         {
//             chargeShield(); // calls the chargeShield function if the user chose the third choice, charge shield
//         }
        
//         if(distanceTraveled == obstacleA.getMeteorPosition(0) || distanceTraveled == obstacleB.getMeteorPosition(1) || distanceTraveled == obstacleC.getMeteorPosition(2)) // checks to see if the ship has encountered an obsticle
//         {
//             string meteorChoice;
//             meteorMenu(); // calls the meteorMinue function to display the options the user has on shooting the obstacle or going around.
            
//             getline(cin, meteorChoice);
//             int meteor = stoi(meteorChoice);
            
//             if(meteor == 1)
//             {
//                 destroy(); // calls the function to run if the ship destroys the meteor of if the ship gets destroyed and the game ends in a loss.
//             }
//             else
//             {
//                 setDistanceLeft(getDistanceLeft() + 10); // going around the meteor adds 10 light years to the players path
//             }
            
//         }
        
//         if(distanceTraveled == alienA.getAliensPostition(0) || distanceTraveled == alienB.getAliensPostition(1) || distanceTraveled == alienC.getAliensPostition(2)) // checks to see if the ship has encountered an alien
//           battle(); // calls the function for the ship to battle the alien. The ship wins or gets destroyed and the game ends
//         }
//     }
    
//     if(destroyed == true) // ends game once the bool flag is true
//     {
//         cout << "Your ship has been destroyed. Try again, and this time... don't die."
//     }
    
// }

void Game::setDistance(double dist) // sets the distance traveled by the ship
{
    distanceTraveled = dist;
}

void Game::setDistanceLeft(double distl) // sets the distance left to travel to get to the planet
{
    distanceLeft = distl;
}

void Game::travel() // the ship travels a random distance between 10 and 20 units. didtance left decreases the smae amount and the ships stats are affected
{
    // // distance traveled increases a random number between 10 and 20 light years (the units of travel)
    double const move = rand() % 20 + 10;
    // distanceTraveled = distanceTraveled + move;
    // // distance left decreased by the distance (light years) traveled
    distanceLeft = distanceLeft - move;
    // // power decreases by a random amount between 5 and 20 units
    double shipPower = ship1.getShipPower() - (rand() % 20 + 5);
    // // plazma charge increases ny 2 units
    double shipPlazma = ship1.getShipPlazma() + 2;
    // // crew increases by 4 people
    double shipCrew = ship1.getShipCrewSize() + 4;
    
}

void Game::chargeShield() // ship doesn't move but its shield increases
{
    // distance traveled doesn't move
    // distance left doesn't change
    
    // shield strength increases by 1
    shipShield = shipShield + 1;

}

void Game::rest() // ship doesn't move but its power increases
{
    // distance traveled doesn't move
    // distance left doesn't change
    
    // power increases by 10
    shipPower = shipPower + 10;

}

void Game::destroy() // the ship encounters an obsticle and destroys it or gets destroyed and the game ends
{
    // probobability of destroying the meteor is (1- (meteor size / 100))*(plazma charge / 1000)
    double winning = (1- (meteor size / 100))*(ship strength / 1000);
    if( winning > 0)
    {
        cout << "You have destroyed the meteor! You can now continue on your path." << endl;
        
        // ship's strenght goes down by 5%
        shipStrength = shipStrength * .05;
        
        cout << "Your ship's strength took damage from this interaction. "
    }
    
    // else if the player looses, the ship is destroyed and they have to start again
    else
    {
        destroyed = true;
    }
}

void Game::battle() // the ship encounters an enemy alien and destroys it or gets destroyed and the game ends
{
    // if the player had more crew memebers than the enemy, the player wins and continues on their path
    if(alienA.getAlienCrew() > ship1.getShipCrewSize())
    {
        // the player also gets the enemy's, crew, shield power, and strength
        shieldStrength = shieldStrength + alienA.getAlienStrength;
        shipCrew = shipCrew + alienA.getAlienCrew;
    }
    // if the enemy has more crew members than the player, the enemy wins
    // if the player looses the interaction, the player's ship is destroyed and they have to start again
    else
    {
        destroyed = true;
    }
    
}

double Game::getDistance()
{
    return distanceTraveled;
}

double Game::getDistanceLeft()
{
    return distanceLeft;
}