#include <iostream>
#include <string>
using namespace std;

#ifndef BOOK_H
#define BOOK_H

class Book
{
public:
    Book();
    Book(string t, string a);
    void setTitle(string t);
    void setAuthor(string a);
    string getTitle() const;
    string getAuthor() const;

private:
    string title;
    string author;
};

#endif