// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 4

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

/*
* Algorithm: takes in the lines from the inputed file
* 1. open file
* 2. loop through lines
* 3. add elements to the array
* Input parameters: str (string), c (char), sreArray[] (string), maxStrings (int)
* Output (prints to screen): none
* Returns: lineindex (int)
*/


int split (string str, char c, string strArray[], int maxStrings)
{
    if (str.length() == 0)
    {
        return 0;
    }
    string word = "";
    int count = 0;
    str = str + c;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c) 
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
            word = word + str[i];
        }
    }
    return count;
}



int getLinesFromFile(string fileName, int arr[], int length)
{
    ifstream myfile;
    myfile.open(fileName); // opens the file
    int lineindex = 0;
    if (myfile.is_open()) // do things if the file is open
    {
        string line = "";
        while(getline(myfile, line)) // loop throught the lines of the file
        {
            if(line != "")
            {
                if(lineindex < length) // add to the array aslong as the index is less than the length
                {
                    arr[lineindex] = stoi(line);
                    lineindex++;
                }
            }
        }
    }
    
    else // what to do if the file doesn't open
    {
        return -1;
    } 
    return lineindex; // number of elements in the array
    myfile.close(); // closes file
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