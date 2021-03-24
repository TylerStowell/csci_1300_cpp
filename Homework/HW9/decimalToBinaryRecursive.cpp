// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 2

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <fstream>
using namespace std;

/*
* Algorithm: This program takes in a integer and converts it to the binary representation of the number. 
* 1. get input number
* 2. divide number by 2 and save the remainder
* 3. loop throught untill the number is a 1 or 0
* Input parameters: num (int)
* Output (prints to screen): none
* Returns: string of the binary number
*/

string decimalToBinaryRecursive(int num)
{
    if(num == 0) // checks for the input number being a 0
    {
        return "0"; // returns a string of the number 0
    }
    else if(num == 1) // checks for the input number being a 0
    {
        return "1"; // returns a string of the number 0
    }
    else // what to do if the number isn't a 1 or 0
    {
        return decimalToBinaryRecursive(num/2) + to_string((num%2)); // calls the function as to loop throught the number each time dividing it by 2 and saving the remainder. Returns the string of the remainders
    }
}

int main()
{
    //test 1
    //expected output
    //1100100
    cout << decimalToBinaryRecursive(100) << endl;
    
    //test 2
    //expected output
    //1100
    cout << decimalToBinaryRecursive(12);
    
}