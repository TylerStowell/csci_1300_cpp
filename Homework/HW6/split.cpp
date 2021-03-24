// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 3

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
* Algorithm: splits a string at a certin character and put the words into an array
* 1. get string and parameters in
* 2. split the string at the delimiter
* 3. put the new individual strings into the array
* Input parameters: str (string), c (char), atrArray[] (string), maxStrings (int)
* Output (prints to screen): none
* Returns: count (int)
*/

int split (string str, char c, string strArray[], int maxStrings) // splits a string at a certin character and put the words into an array
{
    if (str.length() == 0) // if there is nothing in the string return 0 and end
    {
        return 0;
    }
    string word = "";
    int count = 0;
    str = str + c;
    for (int i = 0; i < str.length(); i++) // loop through the big string looking for the delimiter
    {
        if (str[i] == c) // what to do if we find the delimiter
        {
        	if (word.length() == 0) continue;
            if(count > maxStrings) // don't add more to the array if there is no more room
            {
                return -1;
            }
            strArray[count] = word; // append the individual word to the array
            count++; // interater update
            word = ""; // resets the word for the next word
        }
        else
        {
            word = word + str[i]; // adds a character to the word untill the delimiter is reached
        }
    }
    return count; // numbert of strings saved
}

int main()
{
    int maxStrings = 4;
    string strArray[4];
    cout << split("one small step",' ', strArray[3], maxStrings) << endl;
    //test 1
    //expected output
    //
    
    
    //test 2
    //expected output
    //
    
    
}