// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 1

#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"
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

Book::Book()
{
    title = "";
    author = "";
}

Book::Book(string t, string a)
{
    title = t;
    author = a;
}

void Book::setTitle(string t)
{
    title = t;
}

void Book::setAuthor(string a)
{
    author = a;
}

string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}
