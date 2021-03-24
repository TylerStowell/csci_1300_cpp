// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 1

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
* Algorithm: this function prints different arrays I made
* 1. build all of the arays
* 2. print out the arrays
* 3. 
* Input parameters: none
* Output (prints to screen): all of the arrays 
* Returns: none
*/


int main()
{
    double temps[10] = {-459.67,-459.67,-459.67,-459.67,-459.67,-459.67,-459.67,-459.67,-459.67,-459.67}; // array of temps
    
    for(int i = 0; i < 10; i++) // prints the temps array
    {
        cout << temps[i] << endl;
    }
    cout << endl;
    
    string colors[5] = {"Red","Blue","Green","Cyan","Magenta"}; // array of colors


    int sequence[100]; // array of numbers 1-100
    for(int i = 0; i < 100; i++)
    {
        sequence[i] = i + 1;
    }

    char letters[26][2]; // 2D array of capital and lowecase letters
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(j == 0)
            {
                letters[i][j] = i + 65;
            }
            else
            {
                letters[i][j] = i + 97;
            }
        }
    }
    

    for(int i = 0; i < 5; i++)
    {
        cout << colors[i] << endl; // prints colors array
    }
    cout << endl;

    for(int i = 0; i < 100; i++)
    {
        cout << sequence[i] << endl; // prints sequence array
    }
    cout << endl;

    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << letters[i][j]; // prints the
            cout << ' ';
        }
        cout << endl;
    }
}