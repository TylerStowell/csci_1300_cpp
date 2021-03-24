#include <iostream>
#include <iomanip>
#include <string>
#include "User.h"
using namespace std;

Library::Library()
{
    numBooks = 0;
    numUsers = 0;
    sizeBook = 50;
    sizeUser = 100;
}
int Library::getSizeBook() // returns the size of the book aray
{
    return sizeBook;
}

int Library::getSizeUser() // returns the size of the user array
{
    return sizeUser;
}

int Library::getNumBooks() // returns the number of books stored
{
    return numBooks;
}

int Library::getNumUsers() // returns the number of users stored
{
    return numUsers;
}

int split (string line, char c, string strArray[], int maxStrings) // splits the lines of the text file
    {
        if (line.length() == 0)
        {
            return 0;
        }
        string word = "";
        int count = 0;
        line = line + c;
        for (int i = 0; i < line.length(); i++) // loops through the line
        {
            if (line[i] == c) // checks for the delimiter
            {
            	if (word.length() == 0) continue; // skips enpty lines
                if(count > maxStrings) // if the count is already too big it exits and returns -1
                {
                    return -1;
                }
                strArray[count] = word; // puts the word that was split into a temperary array
                count++; // goes to the next word
                word = ""; // recets the wors for the next array input
            }
            else
            {
                word = word + line[i]; // adds the letters to the word untill it hits the delimiter again
            }
        }
        return count; // the number of words the line was split into
    }
    
    string lowerCase(string t) // makes every letter of a string lower case
    {
        string user = t;
        for(unsigned int i=0;i<user.length();i++) // loops through the string
        {
            user[i] = tolower(t[i]); // converts uppercase to lowercase letters
        }
        return user; // returns the new lower case word
    }
    
int Library::readBooks(string fileName) // reads the books of the file
{
    ifstream myfile;
    myfile.open(fileName); // open files
    int lineindex = 0;
    int maxStrings = 2;
    int i = numBooks; // inital number of books in the array
    
    if (myfile.is_open()) // what to do when the file is open
    {
        string line = "";
        
        if(numBooks == sizeBook)
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
            
          if(i < sizeBook)
          {
              books[i].setAuthor(strArray[0]); // first split string gets appended to the authors array
              books[i].setTitle(strArray[1]); // rest of the string gets appended to the titles array
              numBooks++; // books stored gets updated
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

int Library::readRatings(string fileName) // reads the ratings of the file and puts it in the user array
{
    int maxCol = 50;
    
    ifstream myfile;
    myfile.open(fileName); // open file
    int lineindex = 0;
    int maxStrings = maxCol + 1;
    // int i = 0; 
    int i = numUsers;
    
    if(numUsers >= sizeUser)
    {
        return -2;
    }
    
    if (myfile.is_open())
    {
        string line = "";
        while(getline(myfile, line)) // loop through the lines in the file
        {
            string strArray[maxCol + 1];
            int num = split(line, ',', strArray, maxStrings); // split the lines by the comma
            if(line == "")
            {
                continue;
            }
            
            if(numUsers < sizeUser)
            {
                if(line.length() != 0)
                {
                    users[i].setUsername(strArray[0]);
                    for(int j = 0; j < num - 1 ; j++) // loop through the split line
                    {
                        users[j].setRatingAt(i, stoi(strArray[j + 1])); // answer for the index of the rating
                    }
                
                }
                i++;
                numUsers++;
            }
        }
        return i; // returns the number of the rating
    }
    else
    {
        return -1;
    } 
    myfile.close();
}

void Library::printAllBooks() // prints out all of the books
{
    // Book books[];
    // int numBooks;
    
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
            cout << books[i].getTitle() << " by ";
            cout << books[i].getAuthor() << endl; // output for the books and authors on their own lines

        }
    }
}

int Library::getCountReadBooks(string u) // gets how many books a user has read
{
    int pos1 = 0;
    bool found1;
    // string title = t;
    double sum = 0;
    double count = 0;

    while(pos1 < numUsers && !found1) // same as the first one but with the tiles
    {
        if(lowerCase(books[pos1].getTitle()) == lowerCase(u)) // lowercase letters for titles too
        {
            found1 = true; // bool value if it is in the array
        }
        else
        {
            pos1++; // if not keep going throught the titles untill found
        }
    }

    if(found1 == true) // what to do once you found the title
    {
        for(int i = 0; i < numBooks; i++)
        {
            if(users[pos1].getRatingAt(i) == '0') continue;
            else
            {
                count++;
            }
        }
        return count;
        // return users[pos1].getRatingAt(pos1); // find the rating for that book by the user
    }
    else
    {
        return -3;
    }
}

    
double Library::calcAvgRating(string t) // calculates the user's average rating of the books they read
{
    int pos1 = 0;
    bool found1;
    string title = t;
    double sum = 0;
    double count = 0;

    while(pos1 < numBooks && !found1) // same as the first one but with the tiles
    {
        if(lowerCase(books[pos1].getTitle()) == lowerCase(title)) // lowercase letters for titles too
        {
            found1 = true; // bool value if it is in the array
        }
        else
        {
            pos1++; // if not keep going throught the titles untill found
        }
    }

    if(found1 == true) // what to do once you found the title
    {
        for(int i = 0; i < numUsers; i++)
        {
            if(users[i].getRatingAt(pos1) == '0') continue;
            else
            {
                sum = sum + users[i].getRatingAt(pos1);
                // sum = sum + stod(users[i].getRatingAt(pos1));
                count++;
            }
        }
        return sum / count;
        // return users[pos1].getRatingAt(pos1); // find the rating for that book by the user
    }
    else
    {
        return -3;
    }
}

int Library::addUser(string u) // adds a user to the users array and their books and ratings for their books
{
    int i;
    // bool answer;
    int currentSize = getNumUsers();
    
    for(i = 0; i < numUsers; i++)
    {
        if(users[i].getUsername() == u)
        {
            // answer = True
            return 0;
        }
        else continue;
    }
    if(currentSize < numUsers)
    {
        users[i].setUsername(u);
        numUsers++;
        return 1;
    }
    else
    {
        return -2;
    }
}

int Library::checkOutBook(string u, string t, int rating) // checks out a book and returns the user's rating for the book
{
    int pos1 = 0;
    int pos2 = 0;
    bool found1;
    bool found2;
    // string user = lowerCase(u); // calls function to make the stringall lowercase  

    while(pos1 < numUsers && !found1)  // keeps loop going untill found
    {
        if(lowerCase(users[pos1].getUsername()) == lowerCase(u)) // what to do once found
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
        if(lowerCase(books[pos2].getTitle()) == lowerCase(t)) // lowercase letters for titles too
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
        if((rating >= 0) && (rating >= 5))
        {
            users[pos1].setRatingAt(pos1, rating);
            return 1;
        }
        else
        {
            return -4;
        }
    }
    else
    {
        return -3;
    }
}

void Library::viewRatings(string u) // finds a user and their books the y have read
{
    int pos1 = 0;
    int pos2 = 0;
    int count = 0;
    bool found1;
    bool found2;
    string user = lowerCase(u); // calls function to make the stringall lowercase  

    while(pos1 < numUsers && !found1)  // keeps loop going untill found
    {
        if(lowerCase(users[pos1].getUsername()) == user) // what to do once found
        {
            found1 = true; // bool value if found
        }
        else
        {
            pos1++; // if not found keep looping through each name
        }
    }

    if((found1 == true)) // what to do once you found both the user and the title
    {
        for(int i = 0; i < numBooks; i++)
        {
            if(users[pos1].getRatingAt(i) != 0)
            {
                count++;
            }
        }
        if(count == 0)
        {
            cout << u << " has not rated any books yet." << endl;
        }
        
        else
        {
            cout << "Here are the books that megan rated" << endl;
            for(int i = 0; i < numBooks; i++)
            {
                if(users[pos1].getRatingAt(i) != 0)
                {
                    cout << "Title : " << books[i].getTitle() << endl;
                    cout << "Rating : " << users[pos1].getRatingAt(i) << endl;
                    cout << "-----" << endl;
                }
            }
        }
    }
    else
    {
        cout << u << " does not exist." << endl;
    }
}

int Library::getRating(string u, string t) // gives the user recomendations on books to read baised off of their ratings for books
{
    int pos1 = 0;
    int pos2 = 0;
    // string title = t;
    bool found1;
    bool found2;
    // string user = lowerCase(u); // calls function to make the stringall lowercase  
    
    while(pos1 < numUsers && !found1)  // keeps loop going untill found
    {
        if(lowerCase(users[pos1].getUsername()) == lowerCase(u)) // what to do once found
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
        if(lowerCase(books[pos2].getTitle()) == lowerCase(t)) // lowercase letters for titles too
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
        return users[pos1].getRatingAt(pos2); // find the rating for that book by the user
    }
    else
    {
        return -3;
    }
}
void Library::getRecommendations(string u)
{
    int pos1 = 0;
    bool found1;
    double sum = 0;
    double count = 0;

    while(pos1 < numUsers && !found1) // same as the first one but with the tiles
    {
        if(lowerCase(users[pos1].getUsername()) == lowerCase(u)) // lowercase letters for titles too
        {
            found1 = true; // bool value if it is in the array
        }
        else
        {
            pos1++; // if not keep going throught the titles untill found
        }
    }

    if(found1 == true) // what to do once you found the title
    {
        for(int i = 0; i < numUsers; i++)
        {
            if(users[i].getRatingAt(pos1) == '0') continue;
            else
            {
                sum = sum + users[i].getRatingAt(pos1);
                count++;
            }
        }
        // return users[pos1].getRatingAt(pos1); // find the rating for that book by the user
    }
    else
    {
        cout << u << " does not exist.";
    }
}