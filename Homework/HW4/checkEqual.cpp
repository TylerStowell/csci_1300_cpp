// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 4 - Problem # 3

#include <iostream>
#include <math.h>
using namespace std;

/*
* Algorithm: this function checks if the three numbers inputed all equal eachother, all not equal, or neither combination.
* 1. get input of three numbers
* 2. check if the three numbers are all equal. If so print "All same"
* 3. check if the three numbers are all unequal. If so print "All different"
* 4. check if the three numbers are neither combination. If so print "neither"
* Input parameters: num1 (int), num2 (int), num3 (int)
* Output (prints to screen): "All same","All different", or "Neither"
* Returns: none
*/

void checkEqual(int num1 , int num2 , int num3){
    if (num1 == num2 && num1 == num3){
        cout << "All same" << endl; // output statement
    }
    else if ((num1 != num2) && (num1 != num3) && (num2 != num3)){
        cout << "All different" << endl; // output statement
    }
    else{
        cout << "Neither" << endl; // output statement
    }
}

int main()
{
    //test 1
    //expected output
    //All same
    checkEqual(2,2,2);
    
    //test 2
    //expected output
    //All different
    checkEqual(23,54,78);
    
}