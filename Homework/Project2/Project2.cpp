// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Project2

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "User.h"
#include "User.cpp"
#include "Book.h"
#include "Book.cpp"
#include "Library.h"
#include "Library.cpp"
using namespace std;

/*
* Algorithm: This project takes a user's input for choosing an option from the menue. then they can do different things. The first calls
  the readBooks function from Library class and reads the books. Number 2 does the same as number 1 but it gets the users. Number 3
  prints all of the books in the books array. Number 4 gets the ratings for a book by a user. Number 5 adds up the number of books that the user had read. Number 6
  shows the ratings for a book a user raited. Number 7 adds up the number of books and divides them by the number of books a user rated and gives the average of them.
  Number 8 adds a user and their books and ratings to the users array. Number 9 checks out a book and returns the new rating the user left. Number 10 gives the user
  recomendations of books to read baised on the books they rated high. Number 11 exits the menue and program saying good bye.
*/

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
	cout << "5. Find number of books user rated" << endl;
	cout << "6. View ratings" << endl;
	cout << "7. Get average rating" << endl;
	cout << "8. Add a user" << endl;
	cout << "9. Checkout a book" << endl;
	cout << "10. Get recommendations" << endl;
	cout << "11. Quit" << endl;
}


int main(int argc, char const *argv[]) {


	// temp variables
    string choice;
    string bookFileName;
    string userFileName;
    string userName, bookTitle;
    string strRating;
    Library myLibrary;


    while (choice != "11") {
        displayMenu();

        // take a menu opton
        getline(cin, choice);

        // convert the `choice` to an integer
        int menuChoice = stoi(choice);

        switch (menuChoice) {

            case 1:
                // Initialize library -- readBooks
                cout << "Enter a book file name:" << endl;
                getline(cin, bookFileName);

                //////////////////////////////////////////////////////////////////////////
                // Your code here. Call the appropriate function(s).
                
                myLibrary.readBooks(bookFileName);
                //////////////////////////////////////////////////////////////////////////

                // Use the below messages and match them to the return code.
                // readBooks returned -1
                // cout << "No books saved to the database." << endl;
                // readBooks returned -2
                // cout << "Database is already full. No books were added." << endl;
                // readBooks returned book arr size
                // cout << "Database is full. Some books may have not been added." << endl;
                // readBooks returned otherwise
                // cout << "Total books in the database: " << numBook << endl;



                cout << endl;
                break;

            case 2:
                //  Initialize user catalog -- readRatings

                cout << "Enter a user file name:" << endl;
                getline(cin, userFileName);


                //////////////////////////////////////////////////////////////////////////
                // Your code here. Call the appropriate function(s).
                
                myLibrary.readRatings(userFileName);
                //////////////////////////////////////////////////////////////////////////

                // Use the below messages and match them to the return code.
                // readRatings returned -1
                // cout << "No users saved to the database." << endl;
                // readRatings returned -2
                // cout << "Database is already full. No users were added." << endl;
                // readRatings returned user arr size
                // cout << "Database is full. Some users may have not been added." << endl;
                // readRatings returned otherwise
                // cout << "Total users in the database: " << numUser << endl;

                cout << endl;
                break;

            case 3:
                // Display library -- printAllBooks

                //////////////////////////////////////////////////////////////////////////
                // Your code here. Call the appropriate function(s).
                
                myLibrary.printAllBooks();
                //////////////////////////////////////////////////////////////////////////


                // If the database has not been initialized
                // cout << "Database has not been fully initialized." << endl;


                cout << endl;
                break;

            case 4:
                //  Get a rating -- getRating

                //////////////////////////////////////////////////////////////////////////
                // Your code here. Call the appropriate function(s).
                
                myLibrary.getRating(userName, bookTitle);
                //////////////////////////////////////////////////////////////////////////

                // Use the below messages and match them to the return code. Update variables as needed.


                // If the database has not been initialized
                // cout << "Database has not been fully initialized." << endl;

        		// take user name
                cout << "Enter username:" << endl;
                getline(cin, userName);

                // take book title
                cout << "Enter book title:" << endl;
                getline(cin, bookTitle);

                // getRating returned 0
                // cout << userName << " has not rated " << bookTitle << endl;
                // getRating returned -3
                // cout << userName << " or " << bookTitle << " does not exist." << endl;
                // getRating returned other than 0 or -3
                // cout << userName << " rated " << bookTitle << " with " << rate << endl;

                cout << endl;
                break;

            case 5:
                // Get number of books the user has rated -- getCountReadBooks
                
                // If the database has not been initialized
                // cout << "Database has not been fully initialized." << endl;

                cout << "Enter username:" << endl;
                getline(cin, userName);
                
                
                myLibrary.getCountReadBooks(userName);

                // getCountReadBooks returned 0
                // cout << userName << " has not rated any books." << endl;
                // getCountReadBooks returned -3
                // cout << userName << " does not exist." << endl;
                // getCountReadBooks returned other than 0 or -3
                // cout << userName << " rated " << numRated << " books." << endl;


            	cout << endl;
                break;

            case 6:
                // View user’s ratings -- viewRatings

                // If the database has not been initialized
                // cout << "Database has not been fully initialized." << endl;

        		// take user name
                cout << "Enter username:" << endl;
                getline(cin, userName);

                
                myLibrary.viewRatings(userName);

            	cout << endl;
                break;

            case 7:
                // Calculate the average rating for the book -- calcAvgRating

                // If the database has not been initialized
                // cout << "Database has not been fully initialized." << endl;

        		// take book title
                // cout << "Enter book title:" << endl;
                getline(cin, bookTitle);


                // myLibrary.calcAvgRating(bookTitle);
                if(myLibrary.calcAvgRating(bookTitle) == -3);
                {
                    cout << "Database has not been fully initialized." << endl;
                }

                // calcAvgRating returned -3
                // cout << bookTitle << " does not exist." << endl;
                // calcAvgRating returned other than -3
                // cout << "The average rating for " << bookTitle << " is " << avgRating << endl;

            	cout << endl;
                break;
            case 8:
                // Add a user to the database -- addUser
        		// take user name
                cout << "Enter username:" << endl;
                getline(cin, userName);

               
                myLibrary.addUser(userName);

                // addUser returned 1
                // cout << "Welcome to the library " << userName << endl;
                // addUser returned 0
                // cout << userName << " already exists in the database." << endl;
                // addUser returned -2
                // cout << "Database is already full. " << userName << " was not added." << endl;

            	cout << endl;
                break;
            case 9:
                // Check out the book -- checkOutBook

                // If the database has not been initialized
                // cout << "Database has not been fully initialized." << endl;

        		// take user name
                cout << "Enter username:" << endl;
                getline(cin, userName);

                // take book title
                cout << "Enter book title:" << endl;
                getline(cin, bookTitle);

                // take rating
                cout<<"Enter rating for the book:"<<endl;
                getline(cin, strRating);

                
                myLibrary.checkOutBook(userName, bookTitle, stoi(strRating));

                // checkOutBook returned 1
                // cout << "We hope you enjoyed your book. The rating has been updated." << endl;
                // checkOutBook returned -4
                // cout << strRating << " is not valid." << endl; 
                // checkOutBook returned -3
                // cout << userName << " or " << bookTitle << " does not exist." << endl;

            	cout << endl;
                break;
            case 10:
                // get recommendations  -- getRecommendations

                // If the database has not been initialized
                // cout << "Database has not been fully initialized." << endl;

        		// take user name
                cout << "Enter username:" << endl;
                getline(cin, userName);

                
                myLibrary.getRecommendations(userName);

            	cout << endl;
                break;

            case 11:
                // quit
                cout << "good bye!" << endl;
                break;

            default:
                cout << "invalid input" << endl;
                cout << endl;
        }
    }

    return 0;
}