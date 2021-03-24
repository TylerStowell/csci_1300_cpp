// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 3 - Problem # 7

#include <iostream>
using namespace std;

/*
* Algorithm: convert seconds into hours, minutes, and seconds.
* 1. get user input for seconds
* 2. calculate minutes
* 3. calculate hours
* 4. print the final answer of hours, minutes, and seconds
* Input parameters: seconds (int)
* Output (prints to screen): hours, minutes, and seconds
* Returns: none
*/

int convertSeconds(int seconds){ // function
    int m = seconds / 60; // calculates minutes
    int h = m / 60; // calculates hours

    cout << h << " hour(s) " << m%60 << " minute(s) " << seconds%60 << " second(s)" << endl; // output message
}

int main(){
    int seconds; // variable
    cin >> seconds; // user input
    convertSeconds(seconds); // calls function
    
    //test 1
    //expected output
    //277 hour(s) 46 minute(s) 40 second(s)
    convertSeconds(1000000);
    
    //test 2
    //expected output
    //962 hour(s) 24 minute(s) 38 second(s)
    convertSeconds(3464678);
}