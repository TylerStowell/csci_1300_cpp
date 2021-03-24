#include <iostream>
#include <string>
using namespace std;

#ifndef USER_H
#define USER_H

class User
{
public:
    User();
    User(string u, int array[], int num);
    string getUsername() const;
    void setUsername(string u);
    int getRatingAt(int index);
    bool setRatingAt(int index, int value);
    int getNumRatings() const;
    void setNumRatings(int r);
    int getSize() const;

private:
    string username;
    int ratings[];
    int numRatings;
    int size;
};

#endif