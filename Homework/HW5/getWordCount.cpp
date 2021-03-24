// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 2

#include <iostream>
using namespace std;

/*
* Algorithm: 
* 1. take in string
* 2. split the words by the spaces.
* 3. count the spaces and add one.
* Input parameters: ()
* Output (prints to screen): 
* Returns: 
*/

int getWordCount(string s)
{
    int count = 0;
    int len = s.length();
    if(len == 0)
    {
        return 0;
    }
    else
    {
        for(int i = 0; i < len; i++)
        {
            if(s[i] == ' ')
            {
                count++;
            }
        }
        return count + 1;
    }
    
}

int main(){
    cout << getWordCount("I went");
    //test 1
    //expected output
    //
    
    
    //test 2
    //expected output
    //
    
    
}