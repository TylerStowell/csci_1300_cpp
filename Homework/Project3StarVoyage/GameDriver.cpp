#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <fstream>
#include <cstdlib> // sorting
//only .h files for bash
#include "Game.h"
#include "Ship.h"
#include "Ships.h"
#include "Alien.h"
#include "Aliens.h"
#include "Obstacle.h"
#include "Obstacles.h"

// #include "Ship.cpp"
// #include "Ships.cpp"
// #include "Alien.cpp"
// #include "Aliens.cpp"
// #include "Obstacle.cpp"
// #include "Obstacles.cpp"
using namespace std;

class Game
{
public:
    Game();
    // Game(double p, double power, double cr);
    void shipChoice();
    void moveMenu();
    void meteorMenu();
    //void Play(Ships ship1, Aliens alien1, Aliens alien2, Aliens alien3, Obstacles obstacle1,Obstacles obstacle2, Obstacles obstacle3);
    void Play();
    void setDistance(double dist);
    void setDistanceLeft(double distl);
    void travel();
    void chargeShield();
    void rest();
    void destroy();
    void battle();
    void setPlasmaCharge(double p);
    void setPowerCore(double power);
    void setCrew(double cr);
    double getDistance();
    double getDistanceLeft();
    double getPlazmaCharge();
    double getPowerCore();
    double getCrewSize();

private:
    double distanceTraveled;
    double distanceLeft;
    // double plasmaCharge;
    // double power;
    // double crew;
    vector<Ships>ship1; // do like the ships class but with the values of the user choice in the (int i) parameter?
    vector<Obstacles>obstacle1;
    vector<Aliens>alien1;
};



Game::Game()
{
    distanceTraveled = 0;
    distanceLeft = 300;
    // plasmaCharge = 0;
    // powerCore = 0;
    // crew = 0;
}

// Game::Game(double dist, double distl)
// {
//     distanceTraveled = dist;
//     distanceLeft = distl;
//     // plasmaCharge = p;
//     // powerCore = power;
//     // crew = cr;
// }

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



void Game::Play() // this is the function that does it all. Loads ship and player pics ship. initializes everything, sets up map
{
    bool destroyed = false; // initializes the boolean flag to be false so the loop goes at least once
    int playersShip;
    
    // int hazards[3] = {obstacle1.getObstaclesPosition(0), obstacle1.getObstaclesPosition(1), obstacle1.getObstaclesPosition(2)};
    // int enemy[3] = {alien1.get
    // for(int i = 0; i < 6; i++)
    // {
    //     milestones[i] = rand() % 300 + 1;
    // }
    
    // Obsticles
    // Obstacles obstacleA;
    // obstacleA.setPostion(rand() % 300 + 1);
    
    int trail[300]; // array of numbers 1-300 for the path the ship goes on. Do I need??
    for(int i = 0; i < 300; i++)
    {
        trail[i] = i + 1;
    }
    
    // initialize the random spots the aliens and obsticals are. Maybe boolean to make surew there isn't an alien and obstical in the same spot
    // Maybe have there be a bound, like +/- 2 sopots from where the alien is so the random number traveled has a better chance of hitting the alien
    
    
    
    // chose the player's ship they want
    string chooseShip;
    
    shipChoice();
    getline(cin, chooseShip);
    int shipchoice = stoi(chooseShip);
    
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
    
    // initialize all of the single ship's features from the Ships class? Do I need to do that?
    
    string shipName = ship1.getShipName(playersShip);
    double shipPower = ship1.getShipPower(playersShip);
    double shipStrength = ship1.getShipStrength(playersShip);
    double shipShield = ship1.getShipShieldStrength(playersShip);
    double shipPlazma = ship1.getShipPlazma(playersShip);
    double shipCrew = ship1.getShipCrewSize(playersShip);

    while(destroyed == false)
    {
        while(distanceLeft > 0)
        {
            
            double distanceTraveled = 0;
            double distanceLeft = 300; 
            cout << "Distance traveled: " << distanceTraveled << endl;
            cout << "Distance to Star Base: " << distanceLeft << endl << endl;
            cout << "Power: " << shipPower << endl;
            cout << "Strength: " << shipStrength << endl;
            cout << "Shield Strength: " << shipShield << endl;
            cout << "Plazma: " << shipPlazma << endl;
            cout << "Crew: " << shipCrew << endl << endl << endl;
            
            
            
            // string playerMove;
            // moveMenu();
        
            // getline(cin, playerMove);
            // int move = stoi(playerMove);
            
            // if(move == 1)
            // {
            //     travel();
            // }
            // else if(shipchoice == 2)
            // {
            //     rest();
            // }
            // else if(shipchoice == 3)
            // {
            //     chargeShield();
            // }
            
            // for(int i = 0)
            // {
            //     if(distanceTraveled == obstacle1.getMeteorPosition())
            //     {
            //         meteorMenu();
            //     }
            //     else continue;
                
            // }
        }
    }
}

void Game::setDistance(double dist)
{
    distanceTraveled = dist;
}

void Game::setDistanceLeft(double distl)
{
    distanceLeft = distl;
}

void Game::travel()
{
    // // distance traveled increases a random number between 10 and 20 light years (the units of travel)
    // double const move = rand() % 20 + 10;
    // distanceTraveled = distanceTraveled + move;
    // // distance left decreased by the distance (light years) traveled
    // distanceLeft = distanceLeft - move;
    // // power decreases by a random amount between 5 and 20 units
    // shipPower = shipPower - rand() % 20 + 5;
    // // plazma charge increases ny 2 units
    // shipPlazma = shipPlazma + 2;
    // // crew increases by 4 people
    // shipCrew = shipCrew + 4;
}

void Game::chargeShield()
{
    // distance traveled doesn't move
    // distance left doesn't change
    
    // shield strength increases by 1
    // shipShield = shipShield + 1;
}

void Game::rest()
{
    // distance traveled doesn't move
    // distance left doesn't change
    // power increases by 10
    // shipPower = shipPower + 10;
}

void Game::destroy()
{
    // probobability of destroying the meteor is (1- (meteor size / 100))*(plazma charge / 1000)
    
    // if the player wins the metior is destroyed and they continue on their path and gain money
    
    // else if the player looses, the ship is destroyed and they have to start again
}

void Game::battle()
{
    // if the enemy has more crew members than the player, the enemy wins
    // else if the player had more crew memebers than the enemy, the player wins and continues on their path
    // the player also gets the enemy's money, crew, shield power, and strength
    // if the player looses the interaction, the player's ship is destroyed and they have to start again
    
}

// Game::setPlasmaCharge(double p)
// {
//     plasmaCharge = p;
// }

// Game::setPowerCore(double power)
// {
//     powerCore = power;
// }

// Game::setCrew(double cr)
// {
//     crew = cr;
// }

double Game::getDistance()
{
    return distanceTraveled;
}

double Game::getDistanceLeft()
{
    return distanceLeft;
}

// double Game::getPlazmaCharge()
// {
//     return plasmaCharge;
// }

// double Game::getPowerCore()
// {
//     return power;
// }

// double Game::getCrewSize()
// {
//     return crew;
// }

int main()
{
    Game game1;
    game1.Play();
}