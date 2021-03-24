// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 3 - Problem # 2


#include <iostream>
using namespace std;

/*
* Algorithm: print "Hello, CS (class number) World!"
* 1. aske user for a class number
* 2. take user input and save to a variavle
* 3. print statement with the class number after "CS"
* Input parameters: none
* Output (prints to screen): "Hello, CS (class number) World!"
* Returns: 0
*/

// this function asks the user for the cs class number they are in and adds it to the print statement
int main(){
    int a = 0;
    cout << "Enter a CS course number:" << endl;
    cin >> a;
    cout << "Hello, CS " << a <<" World!";
    return 0;
}