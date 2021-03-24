// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 4

#include <iostream>
#include <iomanip>
#include <string.h>
#include <cmath>
using namespace std;

/*
* Algorithm: This function takes in a string mesage and an int key and a flag of true or false to determin if it encrypts or decrypts the string mesage
* 1. check if the key is > 0 and < 25. If the key is not in this range return and error message
* 2. if the flag is true, encrypt the message. Decrypt the message if the flag is false
* 3. for true, keep spaces the same but add the key to the letter or if the letter is past Z after adding the key, subtract 26 from it
  4. for false, keep spaces the same but subtract the key to the letter or if the letter is under A after subtracting the key, add 26 to it
* Input parameters: message (string), key (int), flag (bool)
* Output (prints to screen): none
* Returns: the encrypted or decrypted message or error 
*/


string caesarCipher(string message, int key, bool flag)
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
                else if(message[i] + key > 'Z') // if new character is past Z it loops back throught A
                {
                    message[i] = (message[i] + key) - 26;
                }
                else
                {
                    message[i] = message[i] + key; // default to add key to the initial character
                }
            }
            return message; // returns the encrypted message
        }
        if(flag == false)
        {
            for(int i = 0; i < message.length(); i++) // loops throught the message
            {
                if(message[i] == ' ') // keeps space characters spaces
                {
                    message[i] = message[i];
                }
                else if(message[i] - key < 'A') // if new character is under A it loops back throught A
                {
                    message[i] = (message[i] - key) + 26;
                }
                else
                {
                    message[i] = message[i] - key; // default to subtract key from the initial character
                }
            }
            return message; // returns the decrypted message
        }
    }
    else // if the key is outside the range
    {
        message = "ERROR";
        return message; // returns ERROR 
    }
    
}

int main() // calls function
{
    //test 1
    //expected output
    //EDG D
    cout << caesarCipher("ABC Z",4,true) << endl;
    
    
    //test 2
    //expected output
    //ERROR
    cout << caesarCipher("ABC D", 26, false);
    
}