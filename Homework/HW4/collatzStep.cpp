// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 4 - Problem # 2

#include <iostream>
using namespace std;

/*
* Algorithm: This function tests if the number intered is positive and then checks if it is even or odd.
             If it is even then the function returns the number divided by 2. If the number is odd, the function returns ((3 * number) + 1).
* 1. take an imput of an integer
* 2. check if it is positive
* 3. if positive, check if the number is even
* 4. if even, return number/2
* 5. if odd, return ((3 * number) + 1)
* Input parameters: number (int)
* Output (prints to screen): none
* Returns: number/2 or ((3 * number) + 1)
*/

int collatzStep(int number){
    if (number > 0){
        if ((number % 2) == 0){
            return number/2; // return for even number
        }
        else{
            return (3 * number) + 1; // return for odd number
        }
    }
    
    else{
        return 0;
    }
}

int main()
{
    collatzStep(4);
    //test 1
    //expected output
    //21
    cout << collatzStep(42) << endl;
    
    //test 2
    //expected output
    //106
    cout << collatzStep(35);
    
}