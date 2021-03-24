// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 1

#include <iostream>
#include <string>
using namespace std;

/*
* Algorithm: this function counts the didgers fount in a string
* 1. find length of the string
* 2. loop throught the string
* 3. check if the character is a number
  4. return how many numbers there are in the string
* Input parameters: str (string)
* Output (prints to screen): none
* Returns: number of didgits
*/

int getDigitCount(string str) // function name and parameters
{
    int count = 0; // initial count value
    int len = str.length(); // gets the length of the string
    for(int i = 0; i < len; i++) // loops through the string
    {
        if(str[i] == '0')
        {
            count++;
        }
        if(str[i] == '1')
        {
            count++;
        }
        if(str[i] == '2')
        {
            count++;
        }
        if(str[i] == '3')
        {
            count++;
        }
        if(str[i] == '4')
        {
            count++;
        }
        if(str[i] == '5')
        {
            count++;
        }
        if(str[i] == '6')
        {
            count++;
        }
        if(str[i] == '7')
        {
            count++;
        }
        if(str[i] == '8')
        {
            count++;
        }
        if(str[i] == '9')
        {
            count++;
        }
    }
    return count; // returns the final count of the didgits found
}

int main() // calls function
{
    //test 1
    //expected output");
    //4
    cout << getDigitCount("hello1 world122") << endl;
    
    //test 2
    //expected output
    //1
    cout << getDigitCount("1I like pie");
    
}