// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 4 - Problem # 7

#include <iostream>
#include <math.h>
using namespace std;

/*
* Algorithm: This function checks to see if the year since 1582 entered is a leap year or not.
* 1. take a parameter for the year
* 2. add the year to 1582
* 3. if the year is divisable by 400 or 4, return that the year is a leap year
* 4. if the year is divisable by 100 or doesn't fit the other test, return that the year is not a leap year
* Input parameters: year (int)
* Output (prints to screen): none
* Returns: 1 (int for true), 0 (int for false)
*/

int checkLeapYear(int year)
{
    if(year > 1582)
    {
        return ((year%4==0) && ((year%100!=0) || (year%400==0))); // returns a 1 for false
    }
    if (year<1582)
    {
        return (year%4==0); // returns a 1 for true
    }
}

int main()
{
    //test 1
    //expected output
    // 0
    cout << checkLeapYear(1998) << endl;
    
    //test 2
    //expected output
    // 1
    cout << checkLeapYear(1476) << endl;
    
}