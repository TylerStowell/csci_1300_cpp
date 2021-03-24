// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 6

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
* Algorithm: prints  all of the books in the file
* 1. check if there are books
* 2. if not tell the user
* 3. if there are books, print them on their own line
* Input parameters: titles[]  (string), authors[] (string), numBooks (int)
* Output (prints to screen): title and the author of the books
* Returns: 
*/

void printAllBooks(string titles[], string authors[], int numBooks)
{
    int i = 0;
    if(numBooks <= 0) // checks for books
    {
        cout << "No books are stored"; // output if no books present
    }
    else
    {
        cout << "Here is a list of books" << endl; // output before printing books
        
        for(int i = 0; i < numBooks; i++) // loop through the books
        {
            cout << titles[i] << " by " << authors[i] << endl; // output for the books and authors on their own lines

        }
    }
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