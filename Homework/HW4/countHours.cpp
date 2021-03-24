// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 4 - Problem # 6

#include <iostream>
#include <math.h>
using namespace std;

/*
* Algorithm: This function uses the switch function to tell the user the number of minutes in a month baised on what month (1-12) they want to know about
* 1. take the input of the month being tested
* 2. return the number of minutes in that month
* Input parameters: month (int)
* Output (prints to screen): none
* Returns: 672 (int),744 (int), 720 (int)
*/

int countHours(int month)
{
    switch(month)
    {
       case 2: return 672; break;
       case 1: return 744;break;
       case 3: return 744;break;
       case 5: return 744;break;
       case 7: return 744;break;
       case 8: return 744;break;
       case 10: return 744;break;
       case 12: return 744;break;
       case 4: return 720; break;
       case 6: return 720; break;
       case 9: return 720; break;
       case 11: return 720; break;
    }
}

int main()
{
   //test 1
    //expected output
    //672
    cout << countHours(2) << endl;
    
    //test 2
    //expected output
    //744
    cout << countHours(8) << endl;
    
}