// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 3 - Problem # 10

#include <iostream>
#include <math.h>
using namespace std;

/*
* Algorithm: calculate the distance needed to stop begore hitting a kart.
* 1. get user input for both inital speed and distance to kart
* 2. use formula to find distance needed to stop
* 3. print the distance needed
* Input parameters: initial speed (double) and distance (double)
* Output (prints to screen): distance needed to stop
* Returns: deceleration (double)
*/

double marioKart(double initialSpeed, double distance){ // function
    double deceleration = (pow(initialSpeed, 2))/(2*distance); // calculates deceleration
    return deceleration; // return
}
int main(){
    cout << "Enter initial speed: " << endl; // output message
    double initialSpeed; // variable
    cin >> initialSpeed; // user input
    cout << "Enter distance from broken kart: " << endl; // output message
    double distance; // variable
    cin >> distance; // user input
    cout << marioKart(initialSpeed,distance); // calls function
    
    //test 1
    //expected output
    //101080
    cout << marioKart(100,500);
    
    //test 2
    //expected output
    //801080
    cout << marioKart(400,1000);
}