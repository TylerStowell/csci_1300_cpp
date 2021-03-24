// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 1

#include <iostream>
#include <iomanip>
#include <string>
#include "Player.h"
using namespace std;

/*
* Algorithm: 
* 1. 
* 2. 
* 3. 
* Input parameters: ()
* Output (prints to screen): 
* Returns: 
*/

Player::Player()
{
    name = "";
    points = 0;
}

Player::Player(string n, double p)
{
    name = n;
    points = p;
}

void Player::setName(string n)
{
    name = n;
}

void Player::setPoints(double p)
{
    points = p;
}

string Player::getName() const
{
    return name;
}

double Player::getPoints() const
{
    return points;
}
