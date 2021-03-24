// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 3 - Problem # 3

#include <iostream>
using namespace std;

/*
* Algorithm: puts user's class number in the statement, "Hello, CS (course_number) World!"
* 1. take user input for course number
* 2. call function to do process
* 3. print statement
* Input parameters: course_number (int)
* Output (prints to screen): "Hello, CS (course_number) World!"
* Returns: none
*/

// this function takes a parameter of course_number and prints out, "Hello, CS course_number World!"
void classGreeting(int course_number){ // function
    cout << "Hello, CS " << course_number << " World!" << endl;
}

// this is the main function and takes the users input and puts it in as a parameter for the classGreeting function
int main(){
    int course_number = 0; // variable
    cin >> course_number; // user input
    classGreeting(course_number); // calls function
    
    //test 1
    //expected output
    // "Hello, CS 1400 " World!"
    classGreeting(1400);
    
    //test 2
    //expected output
    // "Hello, CS 1500 World!"
    classGreeting(1500);
}