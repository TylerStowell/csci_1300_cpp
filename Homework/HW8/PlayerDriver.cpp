// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 2

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

int main()
{
    //test 1
    //expected output
    //Tyler
    //12.0
    Player tyler;
    Player("Tyler",12.0);
    tyler.setName("Tyler");
    cout << tyler.getName() << endl;
    tyler.setPoints(12.0);
    cout << tyler.getPoints() << endl;
    
    cout << endl;
    //test 2
    //expected output
    //Taylor
    //122880
    Player taylor;
    Player("Taylor",122880);
    taylor.setName("Taylor");
    cout << taylor.getName() << endl;
    taylor.setPoints(122880);
    cout << taylor.getPoints() << endl;
}



