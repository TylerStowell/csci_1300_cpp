// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 4 - Problem # 1

#include <iostream>
using namespace std;

/*
* Algorithm: Tells user if the input number is positive, negative, or zero.
* 1. Take input of an integer
* 2. test if the integer is greater than 0, less than zero, or equal to zero.
* 3. output the answer of positive, negative, or zero baised on the calculation.
* Input parameters: number (int)
* Output (prints to screen): statement with answer to calculation
* Returns: none
*/

void numberSign(int number){
    if (number > 0){
        cout << "positive" << endl; // output statement
    }
    else if (number < 0){
        cout << "negative" << endl; // output statement
    }
    else if (number == 0){
        cout << "zero" << endl; // output statement
    }
}

int main(){
    int number;
    //test 1
    //expected output
    //positive
    numberSign(40);
    
    //test 2
    //expected output
    //negative
    numberSign(-123);
    
}