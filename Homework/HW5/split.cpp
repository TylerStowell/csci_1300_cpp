// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 3

#include <iostream>
#include <string>
using namespace std;

/*
* Algorithm: 
* 1. take in a string
* 2. find the position of the c character
* 3. use the number for the position of the c character to split the string into a substring
* 4. count the number of substrings and print that and the seperate substrings
* Input parameters: str (string), c (char)
* Output (prints to screen): the words split by the delimiter on their oen line
* Returns: count (int) the number of words after the string has been split
*/

int split(string str, char ch) // function and parameters
{
    int len = str.length(); // length of the string
    int count = 1; // initial count value
    int i; // variable declared
    if(len > 1) // checks for a longer than 1 string
    {
       for(i = 0; i < len; i++) // loops throught the string
       {
           if(str[i] == ch && ch != str[i-1] && i != 0 && i != len - 1) // checks for all of the valid positions for the delimiter
           {
                count++; // increase the count of words
                cout << endl; // splits the string and prints the first word on it's own line when the delimiter is hit
            }
            else if(str[i] != ch) // if the character doesn't equat the delimiter, the word is printed
            {
                cout << str[i]; // prints the word up untill the delimiter
            }
        }
    }
    else // if the condition isn't met it will only have a count of 0
    {
        count = 0;
    }
    cout << endl; // gets the returned count on it's own line
    return count; // returns the number of words
}

int main(){
    //test 1
    //expected output
    //one
    //small
    //step
    //3
    cout << split("one small step",' ') << endl;
    
    
    //test 2
    //expected output
    //pig
    //dog
    //cat
    //3
    cout << split("pig/dog/cat", '/');
    
    
}