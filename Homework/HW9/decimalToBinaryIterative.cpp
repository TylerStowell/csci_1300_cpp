// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 1

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
* 1. Take in integer
* 2. check if the number is already a 1 or 0
* 3. loop through finding the remainder of dividing the number by 2 and divide the number by 2 for the next iteration
* Input parameters: num (int)
* Output (prints to screen): none
* Returns: string of th binary number (string)
*/

string decimalToBinaryIterative(int num)
{
    if(num == 0) // checks for the input number being a 0
    {
        return "0"; // returns a string of the number 0
    }
    else if(num == 1) // checks for the input number being a 0
    {
        return "1"; // returns a string of the number 0
    }
    
    vector <int> binary; // vector of ints for the remainders to go into
    int i = 0;  // initializes i for the for loop
    string newString; // string for the remainders added up for answer
    while(num > 0) // loops untill the number is a 0
    {
        binary.push_back(num % 2); // gets the remainder and puts it in the vector
        num = num / 2; // redefines the number as itself divided by 2
        i++; // adds one to the variable i
        
        // newString = newString + x;
    }
    for(int j = i - 1; j >= 0; j--) // loops through the vector of ints and converts the elements to strings and appends them to the end of the string
    {
        newString = newString + to_string(binary[j]); // adds the next element to the string representing the binary number
    }
    return newString; // returns binary form of the input number
}

int main()
{
    //test 1
    //expected output
    // 101
    cout << decimalToBinaryIterative(5) << endl;
    
    //test 2
    //expected output
    //11010
    cout << decimalToBinaryIterative(26);
    
}