/*
  Daisy Barajas
  CS 121
  14 November 2023
  Program that prompts user to enter nonnegative integers from a range of at most 5 positive digits and compute the sum of digits. 
  The program will include if/else-if branching, while loop, and a boolean condition while including two inputs that are illegal (positive digits outside of specified range)
*/

#include <iostream>
using namespace std;

int main() 
{
  int num = 0; 
  int sum = 0; 

  while (num != -1) // loop that will exit if user enters -1 
  {
    sum += num; // add the number to the sum
    cout << "\nEnter an integer ranging from 0 - 99999: "; 
    cin >> num; // input a digit that isn't -1 

    if (num > 99999) // or higher than five digits becuase then it's illegal
    {
      cout << "Invalid input. Number must be from 0 - 99999.\n\n";
      sum -= num; // subtract the number from the sum if it's illegal
    }
  }
  cout << "\nThe sum is: " << sum << endl; // print the sum
  return 0; 
}