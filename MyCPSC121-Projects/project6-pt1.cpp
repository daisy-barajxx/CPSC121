/*
  Daisy Barajas 
  CS 121 
  30 October 2023
  Program prompting to players to play rock, paper, scissors.
*/

#include <iostream>
#include <cctype> 
using namespace std; 
int main() {

  char player1,
       player2;

  for (int i = 0; i < 5; i++) // Loop 5 times
  {
    cout << "Round " << i+1 << endl; // Display round number

  // start the game of rock, paper, and scissors
  cout << "Player 1: Rock, Paper, Scissors, shoot: "; // display player 1 move
  cin >> player1; // input player 1 move

  if (player1 != 'R' && player1 != 'P' && player1 != 'S') // if the input is not either R, P, or S, it will ask to input again  
  {
    cout << "Try again. Invaid input. Enter R, P, or S.\n";  
  }

  cout << "Player 2: Rock, Paper, Scissors, shoot: "; // display player 2 move
  cin >> player2; // input player 2 move

  if (player2 != 'R' && player2 != 'P' && player2 != 'S') // if the input is not either R, P, or S, it will ask to input again  
  {
    cout << "Try again. Invaid input. Enter R, P, or S.\n"; 
  }

  // possible answers 
  if (player1 == 'R' && player2 == 'P') { // first combo 
    // R < P
    cout << "Player 2 wins!\n" << endl; 
    } else if (player1 == 'R' && player2 == 'S') {
    // R > S
    cout << "Player 1 wins!\n" << endl;
    } else if (player1 == 'R' && player2 == 'R') {
    // R = R
    cout << "It's a tie!\n" << endl; 
    }

    if (player1 == 'P' && player2 == 'S') { // second combo
      // P < S
      cout << "Player 2 wins!\n" << endl;
      } else if (player1 == 'P' && player2 == 'R') {
      // P > R
      cout << "Player 1 wins!\n" << endl;
      } else if (player1 == 'P' && player2 == 'P') {
      // P = P
      cout << "It's a tie!\n" << endl; 
      }

      if (player1 == 'S' && player2 == 'R') { // third combo
        // S < R
        cout << "Player 2 wins!\n" << endl; 
        } else if (player1 == 'S' && player2 == 'P') {
        // S > P
        cout << "Player 1 wins!\n" << endl; 
        } else if (player1 == 'S' && player2 == 'S') {
        // S = S
        cout << "It's a tie!\n" << endl; 
        } 
  }
    return 0; 
}