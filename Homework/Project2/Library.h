#include <iostream>
#include <string>
using namespace std;

#ifndef LIBRARY_H
#define LIBRARY_H

class Library
{
public:
    Library();
    int getSizeBook();
    int getSizeUser();
    int getNumBooks();
    int getNumUsers();
    int readBooks(string fileName);
    int readRatings(string fileName);
    void printAllBooks();
    int getCountReadBooks(string u);
    double calcAvgRating(string t);
    int addUser(string u);
    int checkOutBook(string u, string t, int rating);
    void viewRatings(string u);
    int getRating(string u, string t);
    void getRecommendations(string u);

private:
    int sizeBook;
    int sizeUser;
    Book books[50];
    User users[100];
    int numBooks;
    int numUsers;
};

#endif