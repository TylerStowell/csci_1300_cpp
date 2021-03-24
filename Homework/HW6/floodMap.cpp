// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
* Algorithm: prints out the depths that are covered in water
* 1. take in parameters
* 2. if the depth is lower than the lever, print out * else print _
* 3. 
* Input parameters: map[][] (double), rows (int), currentlevel (double)
* Output (prints to screen): * or _ (string)
* Returns: none
*/



double floodMap(double map[][4], int rows, double currentLevel) // function to find depth at locations
{
    
    
     for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(map[i][j] <= currentLevel) // checks if height is under current level
            {
                cout << "*"; // print out if the statement is true
            }
            else
            {
                cout << "_"; // other pring out if the other statement is false
            }
        }
        cout << endl;
    }
}

int main()
{
    
}