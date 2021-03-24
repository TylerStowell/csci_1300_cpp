// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 5

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

/*
* Algorithm: stores the authors in an array and the tiles in another array
* 1. open file
* 2. split the libes by the comma
* 3. put the elements in their respective array
* Input parameters: fileName (string), titles[] (string), authors[] (string), numbBookStored (int), size (int)
* Output (prints to screen): none
* Returns: i (int)
*/

int split (string line, char c, string strArray[], int maxStrings)
{
    if (line.length() == 0)
    {
        return 0;
    }
    string word = "";
    int count = 0;
    line = line + c;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == c) 
        {
        	if (word.length() == 0) continue;
            if(count > maxStrings)
            {
                return -1;
            }
            strArray[count] = word;
            count++;
            word = "";
        }
        else
        {
            word = word + line[i];
        }
    }
    return count;
}

int readBooks(string fileName, string titles[], string authors[], int numBookStored, int size)
{
    ifstream myfile;
    myfile.open(fileName); // open files
    int lineindex = 0;
    int maxStrings = 2;
    int i = numBookStored; // inital number of books in the array
    
    if (myfile.is_open()) // what to do when the file is open
    {
        string line = "";
        
        if(numBookStored == size)
        {
            return -2;
        }
        
        while(getline(myfile, line)) // loop throught the lines of the text document
        {
            string strArray[2];
            split(line, ',', strArray, maxStrings); // split the lines by ","
           
           if(line == "")
           {
               continue;
           }
            
           else if(i < size)
           {
               authors[i] = strArray[0]; // first split string gets appended to the authors array
               titles[i] = strArray[1]; // rest of the string gets appended to the titles array
               numBookStored++; // books stored gets updated
               i++; // itterator updated
           }
        }
        return i; // number of authors and titles in the arrays
    }
    
    else // what to do if the file doesn't open
    {
        return -1;
    } 
    myfile.close(); // closes the file
}


// split. the array you pass is size 51
// 0th intry into user
// single loop go through the ratings

int main()
{
    string authors[50];
    string titles[50];
    cout << readBooks("books.txt", titles, authors, 50, 5);
    
    //test 1
    //expected output
    //
    
    
    //test 2
    //expected output
    //
    
    
}