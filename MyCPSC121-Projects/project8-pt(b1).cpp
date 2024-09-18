/*
  Daisy Barajas
  CS 121
  14 November 2023
  Program that prompts user to four values and find the min using comparisons and if/else-if branching 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  for (int i = 0; i < 5; i++) { // loop of 5 times 
  int val1, val2, val3, val4; 
  cin >> val1 >> val2 >> val3 >> val4; 

  int min1 = min(val1, val2); // finds the min of val1 and val2
  int min2 = min(val3, val4); // finds the min of val3 and val4

  // based on the min of the top 2 comparisons, prints the min of the following quadruples of integers
  if (min1 < min2) { 
    cout << "The minimum valus is: " << min1 << "\n"<< endl;
  } else if (min2 < min1) {
    cout << "The minimum value is: " << min2 << "\n"<< endl;
  }
  }
  return 0;
}