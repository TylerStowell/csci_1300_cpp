// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 3 - Problem # 5

#include <iostream>
#include <math.h>
using namespace std;

/*
* Algorithm: calculate sphere volume
* 1. get user input for radius
* 2. calculate volume and print to screen
* Input parameters: radius (double)
* Output (prints to screen): volume
* Returns: none
*/

int sphereVolume(double radius){ // function for the volume
    double volume;
    volume = (4.0/3.0) * M_PI * pow(radius, 3); // calculation of volume
    cout << "volume: " << volume << endl; // output of volume
}
int main(){
    cout << "Enter a radius: " << endl;
    double radius;
    cin >> radius; // user input for radius
    sphereVolume(radius); // calls function to calculate volume of sphere
    
    //test 1
    //expected output
    //volume 3.35103e+07
    sphereVolume(200);
    
    //test 2
    //expected output
    //volume: 2.07733e+11
    sphereVolume(3674);
}