// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 2

#include <iostream>
#include <iomanip>
#include <string>
#include "Planet.h"
using namespace std;

/*
* Algorithm: compairs the planets in the planets array to find the one with the largest radius
* 1. check if the radius is larger than the size
* 2. update a variable with the largest radius
* 3. if another planet is larger, replace the value in the variable with the new radius
* Input parameters: Planet planets[] (array or objects), size (int)
* Output (prints to screen): none
* Returns: idx
*/

double maxRadius(Planet planets[], int size)
{
    double greatest = 0.0; // initial value of greatest
    int idx = -1; // inital value of idx
    
    if(size < 1)
    {
        return -1; // return if the size is less than one
    }
    
    for(int i = 0; i < size; i++) // loops through the planets
    {
        if(planets[i].getRadius() > greatest)  // check if larger
        {
            greatest = planets[i].getRadius(); // 
            idx = i;
        }
    }
    return idx;
}

int main()
{
    
    //test 1
    //expected output
    //
    
    
    //test 2
    //expected output
    //
    
    
}