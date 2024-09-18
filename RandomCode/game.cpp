#include <iostream>
#include <cctype> 
using namespace std; 
int main() {
  cout << "Player 1: rock (R), paper (P), scissors (S), shoot: ";

  char pos1 = 'R'; // rock 
  char pos2 = 'P'; // paper
  char pos3 = 'S'; // scissors
  char choice1; // input either rock, paper or scissors
  cin >> choice1; 
  int player1 = choice1; // player 1 have to make a choice first at random

  if (choice1 != 'R' && choice1 != 'P' && choice1 != 'S') {
    cout << "Try again. Invaid input. Enter R, P, or S.\n"; return 0; }   // game comes to a stop if player enters any letter that isnt R, P or S  

  cout << "Player 2: rock (R), paper (P), scissors (S), shoot: ";

  char choice2; 
  cin >> choice2; // input either rock, paper, or scissors
  int player2 = choice2; // player 2 will make a choice at random as well
  int rounds = 0;
  int players1Score = 0;
  int players2Score = 0;
  while (rounds < 5 && players1Score == 5 && player2Score <= ) { 
    // 5 rounds will be played
  // determine who wins based on the input 
  if (player1 == pos1 && player2 == pos2) { // first combo 
    // R < P
    cout << "Player 2 wins!" << endl; 
    } else if (player1 == pos1 && player2 == pos3) {
    // R > S
    cout << "Player 1 wins!" << endl;
    } else if (player1 == pos1 && player2 == pos1) {
    // R = R
    cout << "It's a tie!" << endl; 
    }

    if (player1 == pos2 && player2 == pos3) { // second combo
      // P < S
      cout << "Player 2 wins!" << endl;
      } else if (player1 == pos2 && player2 == pos1) {
      // P > R
      cout << "Player 1 wins!" << endl;
      } else if (player1 == pos2 && player2 == pos2) {
      // P = P
      cout << "It's a tie!" << endl; 
      }

      if (player1 == pos3 && player2 == pos1) { // third combo
        // S < R
        cout << "Player 2 wins!" << endl; 
        } else if (player1 == pos3 && player2 == pos2) {
        // S > P
        cout << "Player 1 wins!" << endl; 
        } else if (player1 == pos3 && player2 == pos3) {
        // S = S
        cout << "It's a tie!" << endl; 
        }
    rounds++;
  } 
  cout << "Game over!\n"; 
  return 0; 
}