// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 1

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

/*
* Algorithm: this function takes two input vectors and shuffles the values into a new vector in different ways.
* 1. check if both input vectors are of size zero. If so, return the empty vector.
* 2. check if the vectors are equal size. If so, add values from the first vector first then alternating between vec1 and vec2
* 3. check if the first vector is smaller than the second vector. If so add values from the second vector first then alternating between vec1 and vec2
     Same for if the second vector is smaller than the first vector but start with the vec2 value then alternating between vec2 and vec1.
* Input parameters: vec1 (vector<int>), vec2 (vector<int>)
* Output (prints to screen): none.
* Returns: new vector of the values of the input vectors in it (int).
*/

vector<int>shuffle(vector<int>vec1, vector<int>vec2) // function with two vector<int> inputs and a vector<int> return value
{
    vector<int>new_vec; // makes new vector to update with values
    if(vec1.size() == 0 && vec2.size() == 0) // checks for both vectors being empty
    {
        return new_vec; // returns an enpty new_vec vector
    }
    else if(vec1.size() == vec2.size()) // checks if both vectors are the same size
    {
        for(int i = 0; i < vec1.size(); i++) // loop throught the vectors
        {
            new_vec.push_back(vec1[i]); // starts with vec1's first value
            new_vec.push_back(vec2[i]); // vec2 value put in back after vec1 value
        }
    }
    else if(vec1.size() < vec2.size()) // checks if vec1 is smaller than vec2
    {
        for(int i = 0; i < vec2.size(); i++) // loop through vec2's size
        {
            if(i < vec1.size()) // prevents adding zeros after the values of the smaller vector are inputed into the new vector
            {
                new_vec.push_back(vec2[i]); // starts with vec2's first value
                new_vec.push_back(vec1[i]); // vec1 value put in back after vec2 value
            }
            else
            {
                new_vec.push_back(vec2[i]); // if the smaller vector's values have all been inputed, just adding the values from vec2 to fill the rest of the new vector
            }
        }
    }
    else if(vec2.size() < vec1.size()) //checks if vec2 is smaller than vec1
    {
        for(int i = 0; i < vec1.size(); i++) // loop through vec1's size
        {
            if(i < vec2.size()) // prevents adding zeros after the values of the smaller vector are inputed into the new vector
            {
                new_vec.push_back(vec1[i]); // starts with vec1's first value
                new_vec.push_back(vec2[i]); // vec2 value put in back after vec1 value
            }
            else
            {
                new_vec.push_back(vec1[i]); // if the smaller vector's values have all been inputed, just adding the values from vec2 to fill the rest of the new vector
            }
        }
    }
    return new_vec; // returns the new vector with the alternating values from vec1 and vec2
}

int main()
{
    //test 1
    //expected output
    // 1 2 3 4 5 6 7
    vector<int>vec1{1,3,5,7};
    vector<int>vec2{2,4,6};
    vector<int>vec3 = shuffle(vec1, vec2);
    for(int i = 0; i < vec3.size(); i++)
    {
        cout << vec3[i] << " ";
    }
    
    cout << endl;
    
    //test 2
    //expected output
    // 1 5 3 -7
    vector<int>vec4{1,3};
    vector<int>vec5{5, -7};
    vector<int>vec6 = shuffle(vec4, vec5);
    for(int i = 0; i < vec6.size(); i++)
    {
        cout << vec6[i] << " ";
    }
}



