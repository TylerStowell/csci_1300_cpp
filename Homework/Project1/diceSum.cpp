// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 2

#include <iostream>
using namespace std;

/*
* Algorithm: this program rolls a random number (1-6) and take a desired sum of the dice numbers to
*            calculate how many turns it takes to get that desired sum and prints what dice numbers they get each roll
* 1. take in the desired sum
* 2. randomly roll a die twice
* 3. print the die numbers each roll
* 4. adds up the number of rolls it takes to get to the sum
* Input parameters: sum (int)
* Output (prints to screen): "You rolled a (die one) and a (die two). "Got a (sum) in (count) rolls!"
* Returns: none
*/

int rollDie()
{
	return random() % 6 + 1; // random number 1-6
}

void diceSum(int sum)
{
    if(sum >= 2 && sum <= 12) // checks if sum is between 2 and 12
    {
        int total;
        int count;
        count = 0;
        while(total != sum) // stops function after total equals sum
        {
            int a = rollDie(); // die one
            int b = rollDie(); // die two
            cout << "You rolled a " << a << " and a " << b << endl; // output of what the y get
            total = a + b; // adds die values
            count ++; // adds one to the total rolls
        }
        if(total == sum)
        {
            cout << "Got a " << sum << " in " << count << " rolls!" << endl; // output of what dice values they get
        }
    }
    else
    {
        cout << "The desired sum should be between 2 and 12" << endl; // out put if the sum they entered isn't between 2 and 12
    }
}

int main()
{
    //test 1
    //expected output
    //You rolled a 2 and a 5
    //You rolled a 4 and a 2
    //Got a 6 in 2 rolls!
    diceSum(6);
    
    //test 2
    //expected output
    /*You rolled a 6 and a 2
      You rolled a 5 and a 1
      You rolled a 4 and a 2
      You rolled a 3 and a 2
      You rolled a 3 and a 2
      You rolled a 6 and a 5
      You rolled a 1 and a 1
      You rolled a 5 and a 5
      You rolled a 6 and a 3
      You rolled a 4 and a 4
      You rolled a 3 and a 3
      You rolled a 3 and a 2
      You rolled a 2 and a 2
      Got a 4 in 13 rolls!
      */
    diceSum(4);
    
}