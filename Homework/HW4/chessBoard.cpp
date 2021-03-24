// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework 4 - Problem # 4

#include <iostream>
#include <math.h>
using namespace std;

/*
* Algorithm: This function tells the user what color the square on the chess board they are on baised on grid chordenance of a letter a-h and a number 1-8.
* 1. get input of letter and number
* 2. compare to known grid chordenance
* 3. if the chordenances match a black square, print "black"
* 4. if the chordenances match a white square, print "white"
* 5. if the chordenances doesn't fit in the limits for the letter or number, print "Chessboard squares can only have letters between a-h and numbers between 1-8"
* Input parameters: character (char) and integer (int)
* Output (prints to screen): "Chessboard squares can only have letters between a-h and numbers between 1-8","black","white"
* Returns: none
*/


void chessBoard(char character, int integer){
    if(integer%2 == 0 && character == 'b')
    {
        cout << "black";
    }
    else if(integer%2 == 0 && character == 'd')
    {
        cout << "black";
    }
    else if(integer%2 == 0 && character == 'f')
    {
        cout << "black";
    }
    else if(integer%2 == 0 && character == 'h')
    {
        cout << "black";
    }
    else if(integer%2 == 1 && character == 'a')
    {
        cout << "black";
    }
    else if(integer%2 == 1 && character == 'c')
    {
        cout << "black";
    }
    else if(integer%2 == 1 && character == 'e')
    {
        cout << "black";
    }
    else if(integer%2 == 1 && character == 'g')
    {
        cout << "black";
    }
    else if(integer%2 == 0 && character == 'a')
    {
        cout << "white";
    }
    else if(integer%2 == 0 && character == 'c')
    {
        cout << "white";
    }
    else if(integer%2 == 0 && character == 'e')
    {
        cout << "white";
    }
    else if(integer%2 == 0 && character == 'g')
    {
        cout << "white";
    }
    else if(integer == 9 && character == 'b')
    {
        cout << "Chessboard squares can only have letters between a-h and numbers between 1-8";
    }
    else if(integer%2 == 1 && character == 'b')
    {
        cout << "white";
    }
    else if(integer%2 == 1 && character == 'd')
    {
        cout << "white";
    }
    else if(integer%2 == 1 && character == 'f')
    {
        cout << "white";
    }
    else if(integer%2 == 1 && character == 'h')
    {
        cout << "white";
    }
    else if(character != 'a' || character != 'b' || character != 'c' || character != 'd' || character != 'e' || character != 'f' || character != 'g' || character != 'h' && integer != 1 || integer != 2 || integer != 3 || integer != 4 || integer != 5 || integer != 6 || integer != 7 || integer != 8)
    {
         cout << "Chessboard squares can only have letters between a-h and numbers between 1-8";
    }
}

int main(){
   int integer == 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8;
   char character == 'a' || 'b' || 'c' || 'd' || 'e' || 'f' || 'g' || 'h';
   chessBoard(a,3);
   //test 1
    //expected output
    //black
    chessBoard(b,4);
    
    //test 2
    //expected output
    //white
    chessBoard(g,6);
}