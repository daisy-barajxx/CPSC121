/*
  Daisy Barajas
  CS 121 
  15 November 2023
  -------------------
  Program of the Rock, Paper, Scissors game that propmts the user to vs the computer, where the computer makes equally prabable random choices. The program will end once a player (user or computer) have reached 3 wins.  
  The user will have the choice to end the program by entering -1 or if there has been 1000 games of the user and computer still playing. 
*/

#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main() 
{
  srand( (char) time(0));
  char userChoice; 
  int compPoint = 0, userPoint = 0; 
  int continueGame = 0, total = 0;  
  int r;
  char compChoice;

  cout << "Welcome to the Rock (R,r), Paper(P,p), Scissors (S,s) Game!\n";
  cout << "This game will be played between you (Player 1) and the computer.";
  cout << " Lets begin!!\n";
  for (int i = 0; i < 5; i++) {
    while (continueGame != -1 || total <= 1000) { // condition that will end the game if the user enters -1 or if the total number of games played is greater than 1000

    // take user's choice 
    cout << "\nPlayer 1 - Enter rock (R,r), paper (P,p), scissors (S,s): ";
    cin >> userChoice; 
    userChoice = toupper(userChoice);
    total += 1;

    switch (userChoice) 
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

      default: cout << "Invaild input. Enter rock (R,r), paper (P,p), scissors (S,s).\n";
    }

    // take computer's choice
    char choice[] = {'R', 'P', 'S'}; // array of choices
    r = rand() % 3; // random number generator
    compChoice = choice[r]; // computer's choice
    cout << "Computer Choice: " << compChoice << endl;
    // switch statement to determine the winner
    switch (compChoice) { 
      case 'R':
      case 'r':
        if (userChoice == 'R' || userChoice == 'r') {
          cout << "\nIt's a tie!\n";
        } if (userChoice == 'P' || userChoice == 'p') {
          cout << "\nPaper covers rock. Player 1 wins!\n";
          cout << "Plus 1 point to Player 1!\n";
          userPoint += 1;
        } if (userChoice == 'S' || userChoice == 's') {
          cout << "\nRock smashes scissors. Computer wins.\n";
          cout << "Plus 1 point to Computer.\n";
          compPoint += 1;
        }
        break;

      case 'P':
      case 'p':
        if (userChoice == 'R' || userChoice == 'r') {
          cout << "\nPaper covers rock. Computer wins.\n";
          cout << "Plus 1 point to Computer.\n";
          compPoint += 1;
        } if (userChoice == 'P' || userChoice == 'p') {
          cout << "\nIt's a tie!\n";
        } if (userChoice == 'S' || userChoice == 's') {
          cout << "\nScissors cuts paper. Player 1 wins!\n";
          cout << "Plus 1 point to Player 1!\n";
          userPoint += 1;
        }
        break;

      case 'S':
      case 's':
        if (userChoice == 'R' || userChoice == 'r') {
          cout << "\nRock smashes scissors. Player 1 wins!\n";
        cout << "Plus 1 point to Player 1!\n";
        userPoint += 1;
        } if (userChoice == 'P' || userChoice == 'p') {
          cout << "\nScissors cuts paper. Computer wins.\n";
          cout << "Plus 1 point to Computer.\n";
          compPoint += 1;
        } if (userChoice == 'S' || userChoice == 's') {
          cout << "\nIt's a tie!\n";
        }
        break;
      // if the user enters an invalid input
      default: cout << "Invalid input. Enter rock, paper, scissors.\n";   
    }
    // once the player has three points, display that they have won and also the amount of games played 
    if (userPoint == 3) { // once user win 3 games it will be annouced and the playing will end unless player wants to play again
      cout << "\nCongrats, you have won the game!" << endl;
      continueGame = -1;
      // prompting the user to have the choice of continuing to play the game or not
      cout << "It took " << total << " games for you to win!\n" << endl;
      return 0;
      } 
      // if the computer has three points, display that the computer has won and also the amount of games played
    else if (compPoint == 3) {
      cout << "\nComputer won. Better luck next time." << endl;
      continueGame = -1;
      // prompting the user to have the choice of continuing to play the game or not
      cout << "It took " << total << " games for the computer to win!\n" << endl;
      return 0; 
    }
  }
    }
  }
