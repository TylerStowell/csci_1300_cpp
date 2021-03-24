// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 7

#include <iostream>
#include <iomanip>
#include <string>
#include "User.h"
#include "User.cpp"
using namespace std;

/*
* Algorithm: reads the uere and their ratting on a book
* 1. open file
* 2. split the lines by the comma
* 3. find rating and output it
* Input parameters: filename[] (string), user[] (string), ratings[][] (int), maxrows (int), maxColumns (int)
* Output (prints to screen): none
* Returns: i (the number of the rating for the book)
*/

int split (string line, char c, string strArray[], int maxStrings)
{
    if (line.length() == 0)
    {
        return 0;
    }
    string word = "";
    int count = 0;
    line = line + c;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == c) 
        {
        	if (word.length() == 0) continue;
            if(count > maxStrings)
            {
                return -1;
            }
            strArray[count] = word;
            count++;
            word = "";
        }
        else
        {
            word = word + line[i];
        }
    }
    return count;
}

int readRatings(string fileName, User user[], int numUsersStored, int userArrSize, int maxCol)
{
    ifstream myfile;
    myfile.open(fileName); // open file
    int lineindex = 0;
    int maxStrings = maxCol + 1;
    int i = numUsersStored;
    
    if(numUsersStored >= userArrSize)
    {
        return -2;
    }
    
    if (myfile.is_open())
    {
        string line = "";
        while(getline(myfile, line)) // loop through the lines in the file
        {
            string strArray[maxCol + 1];
            int num = split(line, ',', strArray, maxStrings); // split the lines by the comma
            if(line == "")
            {
                continue;
            }
            
            if(numUsersStored < userArrSize)
            {
                if(line.length() != 0)
                {
                    user[i].setUsername(strArray[0]);
                    for(int j = 0; j < num - 1 ; j++) // loop through the split line
                    {
                        user[j].setRatingAt(i, stoi(strArray[j + 1])); // answer for the index of the rating
                    }
                
                }
                i++;
                numUsersStored++;
            }
        }
        return i; // returns the number of the rating
    }
    else
    {
        return -1;
    } 
    myfile.close();
}

int main()
{
    
    //test 1
    //expected output
    //
    
    
    //test 2
    //expected output
    //
    
    
}