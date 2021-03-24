// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 4 - Problem # 5

#include <iostream>
#include <math.h>
using namespace std;

/*
* Algorithm: This function takes an integer and tells the user how many digits the number has as long as the number is less than 1000 and greater than -1000. 
* 1. take the integer input. if the number is negative, multiply the number by (-1)
* 2. test the number to see if it is less than 9, if so return 1
* 3. test the number to see if it is less than 99, if so return 2
* 4. test the number to see if it is less than 999, if so return 3
* 5. if the number doesn't pass the other tests, return 4
* Input parameters: integer (int)
* Output (prints to screen): none
* Returns: 1 2,3, or 4
*/

int countDigits(int integer)
{
    if(integer < 0)
    {
        integer = integer * (-1);
    }
    if (integer <= 9)
    {
        return 1;
    }
    else if(integer <= 99)
    {
        return 2;
    }
    else if(integer <= 999)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}

int main(){
   //test 1
    //expected output
    //2
    cout << countDigits(12) << endl;
    
    //test 2
    //expected output
    //4
    cout << countDigits(2345) << endl;
    
}