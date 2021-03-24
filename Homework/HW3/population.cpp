// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 3 - Problem # 8

#include <iostream>
using namespace std;

/*
* Algorithm: find the total population of the U.S after one year.
* 1. get user input for initial population
* 2. calculate born, died, and immagrants for the year
* 3. calculate total population after one year and print to screen
* Input parameters: initial population (int)
* Output (prints to screen): total population
* Returns: total population (int)
*/

int population(int initialPopulation){ // function
    int totalPopulation; // variable
    int immigrants; // variable
    int born; // variable
    int dead; // variable
    born = 31536000 / 8; // calculates born
    dead = 31536000 / 12; // calculates dead
    immigrants = 31536000 / 27; // calculates immigrants
    totalPopulation = (initialPopulation + born + immigrants) - dead; // calculates total population
    return totalPopulation; // return
}

int main(){
    int initialPopulation; // variable
    cin >> initialPopulation; // user input
    cout << population(initialPopulation); // output message

    //test 1
    //expected output
    //24865672516500
    cout << population(34500) << endl;

    //test 2
    //expected output
    //3482000
    cout << population(1000000);
}
