// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 1

#include <iostream>
using namespace std;

/*
* Algorithm: this function prints out the odd numbers from 1 to the desired number
* 1. intake the desired number to count to
* 2. calculates the odd numbers from 1 to the desired number
* 3. prints the odd numbers on their own line
* Input parameters: number (int)
* Output (prints to screen): numbers from 1 to desired number
* Returns: none
*/

int printOddNums(int number)
{
    int i = 1; // starting number
    while(i<=number) // calculates the odd numbers starting with one
    {
        cout << i << endl; // prints the odd numbers
        i= i + 2; // adds 2 to the previous number to avoid even numbers
    }
}

int main(){
    //test 1
    //expected output
    /* 1
     * 3
     * 5
     * 7
     * 9
     * 11
     */
    printOddNums(11);
    
    //test 2
    //expected output
    /* 1
     * 3
     * 5
     * 7
     * 9
     * 11
     * 13
     * 15
     * 17
     * 19
     */
    printOddNums(20);
    
}