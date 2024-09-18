/*
  Daisy Barajas
  CS 121
  30 October 2023
  Program that prompts two players to play rock, paper, scissors using the
  switch branching to constuct such game
*/

#include <cctype>
#include <iostream>
using namespace std;
int main() {

  char player1, player2;

  for (int i = 0; i < 5; i++) // Loop 5 times
  {
    cout << "Round " << i + 1 << endl; // Display round number

    cout << "Player 1: rock (R or r), paper (P or p), scissors (S or s), "
            "shoot: "; // display prompt for player 1
    cin >> player1;    // input a lower or upper case letter
    switch (player1)   // only for player1
    {
    case 'R':
    case 'r':
      break;
    case 'P':
    case 'p':
      break;
    case 'S':
    case 's':
      break;
    default:
      cout
          << "Try again. Enter R, r, P, p, S, or s.\n"
          << endl; // if input is not R, r, P, p, S, or s, display error message
    }

    cout << "Player 2: rock (R or r), paper (P or p), scissors (S or s), "
            "shoot: "; // display prompt for player 2
    cin >> player2;    // input a lower or upper case letter
    switch (player2)   // only for player2
    {
    case 'R':
    case 'r': // inputing this will result in one of the condiitons
      // conditions only ture within the break
      if (player1 == 'R' || player1 == 'r') // conditions
        cout << "It's a tie!\n" << endl;
      else if (player1 == 'S' || player1 == 's')
        cout << "Player 2 wins!\n" << endl;
      else if (player1 == 'P' || player1 == 'p')
        cout << "Player 1 wins!\n" << endl;
      break;

    case 'P':
    case 'p': // inputing this will result in one of the conditions
      if (player1 == 'P' || player1 == 'p') // conditions
        cout << "It's a tie!\n" << endl;
      else if (player1 == 'R' || player1 == 'r')
        cout << "Player 2 wins!\n" << endl;
      else if (player1 == 'S' || player1 == 's')
        cout << "Player 1 wins!\n" << endl;
      break;

    case 'S':
    case 's': // inputing this will result in one of the conditions
      if (player1 == 'S' || player1 == 's') // conditions
        cout << "It's a tie!\n" << endl;
      else if (player1 == 'P' || player1 == 'p')
        cout << "Player 2 wins!\n" << endl;
      else if (player1 == 'R' || player1 == 'r')
        cout << "Player 1 wins!\n" << endl;
      break;

    default:
      cout
          << "Try again. Enter R, r, P, p, S, or s.\n"
          << endl; // if input is not R, r, P, p, S, or s, display error message
    }
  }
  return 0;
}