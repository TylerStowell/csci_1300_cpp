// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 3 - Problem # 4

#include <iostream>
#include <math.h>
using namespace std;

/*
* Algorithm: calculate volume and surface area of a sphere
* 1. get user input for radius
* 2. calculate volume and print it to the screen
* 3. calculate surface area and print it to the screen
* 4.
* Input parameters: none
* Output (prints to screen): volume and surface area
* Returns: none
*/

int main(){
    cout << "Enter a radius: " << endl;
    double radius;
    cin >> radius; // user's input of radius
    double volume;
    volume = (4.0/3.0) * M_PI * pow(radius, 3); // calculation of volume
    cout << "volume: " << volume << endl; // output text for volume

    double surfaceArea;
    surfaceArea = 4 * M_PI * pow(radius, 2); // calculation of surface area
    cout << "surface area: " << surfaceArea; // output text for surface area

}
