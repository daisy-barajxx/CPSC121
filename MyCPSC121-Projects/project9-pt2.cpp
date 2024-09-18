/*
  Daisy Barajas
  CS 121 
  20 November 2023
  Program that will take an hexadecimal integer from user and return the equivalent integer binary value. 
*/

#include <iostream>
#include <string> 
using namespace std;

int main() 
{
  string hex; // hexadecimal number
  for (int i = 0; i < 5; i++) { // Loop to repeat 5 times
  cout << "\nEnter a hexidecimal integer up to 5 digits: ";
  cin >> hex;
  cout << "The binary equvalent to the hexdecimal integer is: ";
    // switch statement to convert hexadecimal to binary
    switch (hex[i]) { 
      case '0': 
      cout << "0000\n"; 
      break; 
      case '1': 
      cout << "0001\n";
      break;
      case '2': 
      cout << "0010\n"; 
      break; 
      case '3':
      cout << "0011\n";
      break; 
      case '4': 
      cout << "0100\n";
      break;
      case '5':
      cout << "0101\n";
      break;
      case '6': 
      cout << "0110\n"; 
      break;
      case '7':
      cout << "0111\n";
      break;
      case '8':
      cout << "1000\n";
      break;
      case '9':
      cout << "1001\n";
      break;
      case 'A':
      case 'a':
      cout << "1010\n";
      break;
      case 'B':
      case 'b':
      cout << "1011\n";
      break;
      case 'C':
      case 'c':
      cout << "1100\n";
      break;
      case 'D':
      case 'd':
      cout << "1101\n";
      break;
      case 'E':
      case 'e':
      cout << "1110\n";
      break;
      case 'F':
      case 'f':
      cout << "1111\n";
      break;
      // if user enters invalid input, prompts user to enter a hexadecimal integer up to 5 digits.
      default: cout << "\nInvalid input. Please enter a hexadecimal integer up to 5 digits.\n"; 
      break;
    }
  }
  return 0;
}