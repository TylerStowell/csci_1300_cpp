// CS1300 Spring 2019
// Author: Tyler Stowell
// Recitation: 201 - Supriya Naidu
// Cloud9 Workspace Editor Link: https://ide.c9.io/stowelltm/csci1300
// Homework - Problem # 3

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <stdio.h>
using namespace std; 

/*
* Algorithm: this program plays a game of jeopardy
* 1. 
* 2. 
* 3. 
* Input parameters: none
* Output (prints to screen): result of game
* Returns: none
*/

int rollDie()
{
	return random() % 6 + 1; 
}

int player1Total = 0;
int player2Total = 0;

int choice(int player1Total, int player2Total)
{
    char answer;
    cout << "Continue rolling or Hold? (y/n)";
    cin >> answer;
    if(answer == 'y')
    {
      int player1(player1Total);
    }
    else if(answer == 'n')
    {
        int player2(player2Total);
    }
}
// int choice()
// {
//     char answer;
//     cout << "Continue rolling or Hold? (y/n)";
//     cin >> answer;
//     return answer;
    
// }

int player1(int player1Total)
{
    // choice();
    int turnTotal1;
    int roll = rollDie();
    if(roll == 2)
    {
        turnTotal1 = 0;
    }
    else if(roll == 5)
    {
        turnTotal1 = 0;
    }
    else if(roll == 4)
    {
        turnTotal1 == 15;
    }
    else if(roll == 1)
    {
        turnTotal1 = turnTotal1 + roll;
    }
    else if(roll == 3)
    {
        turnTotal1 = turnTotal1 + roll;
    }
    else if(roll == 6)
    {
        turnTotal1 = turnTotal1 + roll;
    }
        
    player1Total = player1Total + turnTotal1;
    return player1Total;
}

int player2(int player2Total)
{
    int turnTotal2 = 0;
    while(turnTotal2 <= 10)
        {
            int roll = rollDie();
            if(roll == 2 || roll == 5)
            {
                turnTotal2 = 0;
            }
            else if(roll == 4)
            {
                turnTotal2 == 15;
            }
            else if(roll == 1 || roll == 3 || roll == 6)
            {
                turnTotal2 = turnTotal2 + roll;
            }
        }
    player2Total = player2Total + turnTotal2;
    return player2Total;
}
void end()
{
    cout << "End of game. Thank you for playing" << endl;
}

void game()
{
    while(player1Total <= 80 || player2Total <= 80)
    {
        // choice(player1Total, player2Total);
        player1();
        if(player1Total >= 80)
        {
            end();
        }
        // player2(player2Total);
        if(player2Total >= 80)
        {
            end();
        }
    }
}


int main(){
    game();
    //test 1
    //expected output
    //
    
    
    //test 2
    //expected output
    //
    
    
}