// CSCI1300 Spring 2019
// Author: <Your name>
// Recitation: <123> – <Your TA name>
// Cloud9 Workspace Editor Link: <https://ide.c9.io/ .....>
// hmwk6 


#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;



//////////////////////////////////////////////////////////////////////////
// other helper functions... split 

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
//////////////////////////////////////////////////////////////////////////


/* readBooks function
 * the function reads a book file from the text into book and author arrays
 *
 * @param: fileName, string, name of the book file
 * @param: titles, string array, titles of the books are stored
 * @param: authors, string array, authors of the books are stored
 * @param: numBookStored, int, the number of books currently stored in the arrays
 * @param: size, int, the size of the arrays (titles and authors)
 * @return: the number of books read into the array (number of lines in the file)
 *          or appropriate return code
 */

//////////////////////////////////////////////////////////////////////////
// ToDo: implement readBooksfunction
// your readBooks function goes here

int readBooks(string fileName, string titles[], string authors[], int numBookStored, int size)
{
    ifstream myfile;
    myfile.open(fileName);
    int lineindex = 0;
    int maxStrings = 2;
    int i = numBookStored;
    
    if (myfile.is_open())
    {
        string line = "";
        
        if(numBookStored == size)
        {
            return -2;
        }
        
        while(getline(myfile, line))
        {
            string strArray[2];
            split(line, ',', strArray, maxStrings);
           
           if(line == "")
           {
               continue;
           }
            
           else if(i < size)
           {
               authors[i] = strArray[0];
               titles[i] = strArray[1];
               numBookStored++;
               i++;
           }
        }
        return i;
    }
    
    else
    {
        return -1;
    } 
    myfile.close();
}
//////////////////////////////////////////////////////////////////////////


/* readRatings function
 * Read the user ratings from the file and store them
 * into users array and ratings array
 *
 * @param: fileName, string, the name of user rating file
 * @param: users, string array, the array of users
 * @param: ratings, int 2D array, the ratings of each user
 *         row i is user, and column j is a book.
 *         ratings[i][j] is the user_i rated book_j
 * @param: numUsers, int, the number of users currently stored in the array
 * @param: sizeRow, int, the number of rows in the 2D array (capacity)
 * @param: sizeCol, int, the number of column in the 2D array (capacity)
 * @return: the number of users in total or appropriate return code
 */

 //////////////////////////////////////////////////////////////////////////
 // ToDo: implement readRatings function
 // your readBooks function goes here

int readRatings(string fileName, string user[], int ratings[][50], int numUsers, int maxRows, int maxColumns)
{
    ifstream myfile;
    myfile.open(fileName);
    int lineindex = 0;
    int maxStrings = maxColumns + 1;
    int i = numUsers;
    
    if(numUsers == maxRows)
    {
        return -2;
    }
    
    if (myfile.is_open())
    {
        string line = "";
        while(getline(myfile, line))
        {
            string strArray[maxColumns + 1];
            int num = split(line, ',', strArray, maxStrings);
            if(line == "")
            {
                continue;
            }
            
            if(numUsers < maxRows)
            {
                if(line.length() != 0)
                {
                    user[i] = strArray[0];
                    for(int j = 0; j < num - 1 ; j++)
                    {
                        ratings[i][j] = stoi(strArray[j + 1]);
                    }
                
                }
                i++;
                numUsers++;
            }
        }
        return i;
    }
    else
    {
        return -1;
    } 
    myfile.close();
}
 //////////////////////////////////////////////////////////////////////////

/* printBookList function (helper function)
 * print the list of books in the array
 *
 * @param: titles, string, the title of books
 * @param: authors, string, the author of books
 * @param: numBooks, int, the number of books
 * @return: void
 */


//////////////////////////////////////////////////////////////////////////
// ToDo: implement printAllBooks function
// your printAllBooks function goes here
void printAllBooks(string titles[], string authors[], int numBooks)
{
    int i = 0;
    if(numBooks <= 0)
    {
        cout << "No books are stored";
    }
    else
    {
        cout << "Here is a list of books" << endl;
        
        for(int i = 0; i < numBooks; i++)
        {
            cout << titles[i] << " by " << authors[i] << endl;

        }
    }
}
//////////////////////////////////////////////////////////////////////////

/* getRating function 
 * Search for a rating given the user's name and 
 * book's title and return that value
 *
 * @param: string, username 
 * @param: string, title of the book 
 * @param: string, array, user names
 * @param: string, array, titles
 * @param: 2D int array, list of ratings for each user
 * @param: int, number of users whose names/ratings are currently 
 *         stored in the string array/2D array respectively
 * @param: int, number of books whose titles/ratings are currently 
 *         stored in the string array/2D array respectively
 * @return: int, users's rating value or appropriate return code
 */

//////////////////////////////////////////////////////////////////////////
// ToDo: implement getRating function
// your getRating function goes here
string lowerCase(string username)
{
    string user = username;
    for(unsigned int i=0;i<user.length();i++)
    {
        user[i] = tolower(username[i]);
    }
    return user;
}

int getRating(string username, string title, string users[], string titles[], int rattings[100][50], int numUsers, int numBooks)
{
    int pos1 = 0;
    int pos2 = 0;
    bool found1;
    bool found2;
    string user = lowerCase(username);

    while(pos1 < numUsers && !found1)
    {
        if(lowerCase(users[pos1]) == user)
        {
            found1 = true;
        }
        else
        {
            pos1++;
        }
    }
    while(pos2 < numBooks && !found2)
    {
        if(lowerCase(titles[pos2]) == lowerCase(title))
        {
            found2 = true;
        }
        else
        {
            pos2++;
        }
    }

    if((found1 == true) && (found2 == true))
    {
        return rattings[pos1][pos2];
    }
    else
    {
        return -3;
    }
}
//////////////////////////////////////////////////////////////////////////




/* displayMenu:
 * displays a menu with options
 * DO NOT MODIFY THIS FUNCTION
 */
void displayMenu(){
  cout << "Select a numerical option:" << endl;
  cout << "======Main Menu=====" << endl;
  cout << "1. Read book file" << endl;
  cout << "2. Read user file" << endl;
  cout << "3. Print book list" << endl;
  cout << "4. Get rating" << endl;
  cout << "5. Quit" << endl;
}


int main(int argc, char const *argv[]) {

    // taking menu choice 
    string choice;

    // number of books and users stored in the arrays
    int numBooks = 0;
    int numUsers = 0;

    // Use the these values to declare your
    // titles, authors, users and ratings arrays
    const static int  userArrSize = 100;
    const static int  bookArrSize = 50;


    // variables to store user inputs 
    string bookFileName;
    string userFileName;
    string userName, bookTitle;    

    while (choice != "5") {
        displayMenu();

        // take an opton (1, 2, 3, or 4)
        getline(cin, choice);

        // convert the `choice` to an integer 
        int menuChoice = stoi(choice); 
        switch (menuChoice) {
            case 1:
                // read book file
                cout << "Enter a book file name:" << endl;
                getline(cin, bookFileName);

                //////////////////////////////////////////////////////////////////////////
                // Your code here. Call the appropriate function(s).
                readBooks(bookFileName, titles[50], authors[50], numBooks, size);
                //////////////////////////////////////////////////////////////////////////

                // Use the below messages and match them to the return code. Update variables as needed.
                // cout << "No books saved to the database." << endl;
                // cout << "Database is already full. No books were added." << endl;     
                // cout << "Database is full. Some books may have not been added." << endl;     
                // cout << "Total books in the database: " << numBooks << endl;
                
                cout << endl;
                break;

            case 2:
                // read ratings file
                cout << "Enter a user file name:" << endl;
                getline(cin, userFileName);
                string user[50];
                int ratings[][50];
                int numUsers;
                int maxRows;
                int maxColumns;
                

                //////////////////////////////////////////////////////////////////////////
                // Your code here. Call the appropriate function(s).
                readRatings(userFileName, user[50], ratings[][50], numUsers, maxRows, maxColumns);
                //////////////////////////////////////////////////////////////////////////

                // Use the below messages and match them to the return code. Update variables as needed.
                // cout << "No users saved to the database." << endl;
                // cout << "Database is already full. No users were added." << endl; 
                // cout << "Database is full. Some users may have not been added." << endl; 
                // cout << "Total users in the database: " << numUsers << endl;

                cout << endl;
                break;

            case 3:
                // print the list of the books
                // string titles[50];
                // string authors[50];
                // int numBooks;
                //////////////////////////////////////////////////////////////////////////
                // Your code here. Call the appropriate function(s).
                printAllBooks(titles[50], authors[50], numBooks);

                //////////////////////////////////////////////////////////////////////////

                cout << endl;
                break;

            case 4:
                // get user's rating 
                // take user name
                cout << "Enter username:" << endl;
                getline(cin, userName);

                // take book title 
                cout << "Enter book title:" << endl;
                getline(cin, bookTitle);
                
                string username;
                string title;
                string users[50];
                string titles[50];
                int ratings[][50];
                int numUsers;
                int numBooks;
                //////////////////////////////////////////////////////////////////////////
                // Your code here. Call the appropriate function(s).
                getRating(username, title, users[], titles[], ratings[100][50], numUsers, numBooks);

                //////////////////////////////////////////////////////////////////////////

                // Use the below messages and match them to the return code. Update variables as needed.
                // cout << userName << " has not rated " << bookTitle << endl; 
                // cout << userName << " or " << bookTitle << " does not exist" << endl; 
                // cout << userName << " rated " << bookTitle << " with " << rate << endl; 


                cout << endl;
                break;
            case 5:
                // quit
                cout << "good bye!" << endl;
                break;

            default:
                cout << "invalid input" << endl;
        }
    }

    return 0;
}