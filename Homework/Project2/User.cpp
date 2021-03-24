#include <iostream>
#include <iomanip>
#include <string>
#include "User.h"
using namespace std;

User::User() // default constructor
{
    username = ""; // inital value
    numRatings = 0; // initial value
    size = 50; // initial value
    ratings[50]; // initial value
    for(int i = 0; i < 50; i++) // loops throught array
    {
        ratings[i] = 0; // sets all 50 values to 0 initialy
    }
}

User::User(string u, int _ratings[50], int num)  // paraiterized constructor
{
    username = u; // sets name
    if(num < size)
    {
        numRatings = num; // sets the value of ratings
    }
    
    for(int i = 0; i < 50; i++) // loops through ratings array
    {
        if(i < num)
        {
            ratings[i] = _ratings[i]; // sets the ratings array to be the input values
            numRatings++; // increase the value of numRatings
        }
        else
        {
            ratings[i] = 0;
        }
    }
}


string User::getUsername() const // returns username
{
    return username;
}

void User::setUsername(string u) // sets the username
{
    username = u;
}

int User::getRatingAt(int index) // gets the rating at a specified point
{
    if(index >= 50)
    {
        return -1;
    }
    if(true)
    {
        return ratings[index]; // returns the rating at that index
    }
    else if(false)
    {
        return -1;
    }
}

bool User::setRatingAt(int index, int value) // sets the rating
{
    if((index <= 50) && (value >= 0 && value <= 5)) // checks the index and value to be valid
    {
        ratings[index] = value; // puts a value in the index of the array
        return true; // true if this works
    }
    else
    {
        return false; // false if it doesn't work
    }
}

int User::getNumRatings() const // gets the number of ratings
{
    return numRatings;
}

void User::setNumRatings(int num) // sets the number of ratings
{
    numRatings = num;
}

int User::getSize() const // gets the size of the array
{
    return size;
}
