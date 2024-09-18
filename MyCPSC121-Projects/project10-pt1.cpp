/*
  Daisy Barajas
  CS 121 
  06 December 2023
  This program prints characters with specified number of characters per line from a range of characters.\
*/

#include <iostream> 
using namespace std;

// function prototype
void printChars(char ch1, char ch2, int numPerLine) {

  if (ch2 < ch1) { // function prints nothing 
    return;
  }
  // prints characters
  for (char c = ch1; c <= ch2; c++) { 
    cout << c; 
    if ((c - ch1 + 1) % numPerLine == 0) { // prints new line
      cout << endl;
    } else {
      cout << " ";
    }
}
}

int main () {
  // declare variables
  cout << "Part a: " << endl;
  printChars('1', 'X', 10); // prints characters from 1 to X with 10 characters per line

  cout << "\n\nPart b: " << endl;
  printChars('A', 'z', 15); // prints characters from A to z with 15 characters per line
    return 0;
}