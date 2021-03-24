// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 3 - Problem # 6

#include <iostream>
#include <math.h>
using namespace std;

/*
* Algorithm: calculate surface area of a sphere
* 1. get user input for radius
* 2. call function
* 3. calculate surface area and print to screen
* Input parameters: radius (double)
* Output (prints to screen): surface area
* Returns: none
*/

int sphereSurfaceArea(double radius){ // function for surface area
    double surfaceArea; // variable
    surfaceArea = 4 * M_PI * pow(radius, 2); // calculates surface area
    cout << "surface area: " << surfaceArea << endl; // output message
}
int main(){
    cout << "Enter a radius: " << endl; // output message
    double radius;
    cin >> radius; // user input for radius
    sphereSurfaceArea(radius); // calls function
    
    //test 1
    //expected output
    //surface area: 1.13097e+06
    sphereSurfaceArea(300);
    //test 2
    //expected output
    //surface area: 39408.1
    sphereSurfaceArea(56);
}