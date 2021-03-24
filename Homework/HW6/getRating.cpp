// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 8

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <locale>
using namespace std;

/*
* Algorithm: tells if the user and the title exist then gives the rating the user gave for that book
* 1. convert to lowercase user name
* 2. find the user and the title
* 3. where they are found, corrilate that to the rating 2D array for the rating they gave on a book
* Input parameters: ()
* Output (prints to screen): 
* Returns: 
*/

string lowerCase(string username)
{
    string user = username;
    for(unsigned int i=0;i<user.length();i++) // loops through the string
    {
        user[i] = tolower(username[i]); // converts uppercase to lowercase letters
    }
    return user;
}

int getRating(string username, string title, string users[], string titles[], int rattings[100][50], int numUsers, int numBooks)
{
    int pos1 = 0;
    int pos2 = 0;
    bool found1;
    bool found2;
    string user = lowerCase(username); // calls function to make the stringall lowercase

    while(pos1 < numUsers && !found1)  // keeps loop going untill found
    {
        if(lowerCase(users[pos1]) == user) // what to do once found
        {
            found1 = true; // bool value if found
        }
        else
        {
            pos1++; // if not found keep looping through each name
        }
    }
    while(pos2 < numBooks && !found2) // same as the first one but with the tiles
    {
        if(lowerCase(titles[pos2]) == lowerCase(title)) // lowercase letters for titles too
        {
            found2 = true; // bool value if it is in the array
        }
        else
        {
            pos2++; // if not keep going throught the titles untill found
        }
    }

    if((found1 == true) && (found2 == true)) // what to do once you found both the user and the title
    {
        return rattings[pos1][pos2]; // find the rating for that book by the user
    }
    else
    {
        return -3;
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