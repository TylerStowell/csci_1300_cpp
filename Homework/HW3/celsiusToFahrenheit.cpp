// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 3 - Problem # 9

#include <iostream>
#include <iomanip>
using namespace std;

/*
* Algorithm: convert temp. in celcius to fahrenheight.
* 1. get user input for temp. in celcius
* 2. use formula to calculate temp. in fahrenheight
* 3. pring the statement with the two equivalant temperatures
* Input parameters: celcius (int)
* Output (prints to screen): statement with both temps.
* Returns: none
*/

float celsiusToFahrenheit(int celsius){ // function
    double fahrenheight; // variable
    fahrenheight = (9.0/5.0) * celsius + 32; // calculates fahrenheight
    // this makes the answer have two decimal points that it rounds to
    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << "The temperature of " << celsius << " in Fahrenheit is " << fahrenheight << endl; // output message
}

int main(){
    float celsius; // variable
    cout << "Enter temperature in celsius: "; // output message
    cin >> celsius; // user input
    celsiusToFahrenheit(celsius); // calls function
    
    //test 1
    //expected output
    //The temperature of 45 in Fahrenheit is 113.00
    celsiusToFahrenheit(45);
    
    //test 2
    //expected output
    //The temperature of 80 in Fahrenheit is 176.00
    celsiusToFahrenheit(80);
}