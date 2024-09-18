/*
  Daisy Barajas
  CS 121
  06 November 2023
  Program that allows to input letter in the English alphabet and notify the user if it is a vowel or a consonant.
*/

#include <iostream>
#include <cctype>
using namespace std;
int main() 
{
  for (int i=1; i<=5;i++) { // loop the program 5 times 
  char inputLetter; 
  bool isValid = false; // Flag variable

  while (!isValid) // Loop until the user enters a valid letter
  {
    cout << "Enter a letter: ";
    cin >> inputLetter; 

    if (isalpha(inputLetter)) { // if the input is a letter
      isValid = true; // set the flag to true
    } else { // if the input is not a letter
      cout << "Try again. Input a valid letter." << endl;
    }
  }
  char lCase = tolower(inputLetter); // convert the letter to lowercase
  switch (lCase) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      switch (char uCase = toupper(inputLetter)) // convert the letter to uppercase
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
          cout << "You entered a vowel." << endl;
          break; // break out of the switch statement
        default: // if the letter is not a vowel
          cout << "You entered a consonant." << endl;
          break; 
  }
  }
  return 0;
}