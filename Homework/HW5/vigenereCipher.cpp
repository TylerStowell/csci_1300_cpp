// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 5

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
* Algorithm: 
* 1. 
* 2. 
* 3. 
* Input parameters: ()
* Output (prints to screen): 
* Returns: 
*/

string vigenereCipher(string message, string key, bool flag)
{
     if(key >= 0 && key < 25)
    {
        if(flag == true) // encrypt the input message
        {
            for(int i = 0; i < message.length(); i++) // loops throught the message
            {
                if(message[i] == ' ')
                {
                    message[i] = message[i]; // keeps space characters as spaces
                }
                
                else if(message[0] == 'B')
                {
                    message[i] = 84 + (message[i] + key);
                    
                    if(message[i] > 'Z') // if new character is past Z it loops back throught A
                    {
                        message[i] = (message[i] - 26;
                    }
                }
                
                else if(message[2] == 'A')
                {
                    message[i] = 73 + (message[i] + key);
                    
                    if(message[i] > 'Z') // if new character is past Z it loops back throught A
                    {
                        message[i] = (message[i] - 26;
                    }
                }
                
                else if(message[3] == 'T')
                {
                    message[i] = 71 + (message[i] + key);
                    
                    if(message[i] > 'Z') // if new character is past Z it loops back throught A
                    {
                        message[i] = (message[i] - 26;
                    }
                }
                
                else if(message[4] == 'M')
                {
                    message[i] = 69 + (message[i] + key);
                    
                    if(message[i] > 'Z') // if new character is past Z it loops back throught A
                    {
                        message[i] = (message[i] - 26;
                    }
                }
                
                else if(message[5] == 'A')
                {
                    message[i] = 82 + (message[i] + key);
                    
                    if(message[i] > 'Z') // if new character is past Z it loops back throught A
                    {
                        message[i] = (message[i] - 26;
                    }
                }
                
                else if(message[6] == 'N')
                {
                    message[i] = 84 + (message[i] + key);
                    
                    if(message[i] > 'Z') // if new character is past Z it loops back throught A
                    {
                        message[i] = (message[i] - 26;
                    }
                }
            }
            return message; // returns the encrypted message
        }
        // if(flag == false)
        // {
        //     for(int i = 0; i < message.length(); i++) // loops throught the message
        //     {
        //         if(message[i] == ' ') // keeps space characters spaces
        //         {
        //             message[i] = message[i];
        //         }
        //         else if(message[i] - key < 'A') // if new character is under A it loops back throught A
        //         {
        //             message[i] = (message[i] - key) + 26;
        //         }
        //         else
        //         {
        //             message[i] = message[i] - key; // default to subtract key from the initial character
        //         }
        //     }
        //     return message; // returns the decrypted message
        // }
    }
    else // if the key is outside the range
    {
        message = "ERROR";
        return message; // returns ERROR 
    }
}

int main()
{
    cout << vigenereCipher("UNICORNS","TIGER",true);
    //test 1
    //expected output
    //
    
    
    //test 2
    //expected output
    //
    
    
}