/*
  Daisy Barajas
  CS 121
  14 November 2023
  Program that prompts user to four values and find the min using comparisons and if/else-if branching 
*/

#include <iostream>
#include <algorithm>
#include <cmath> 
using namespace std;

int main() 
{
  (int i = 0; i < 5; i++)
  {
  int val1, val2, val3, val4;  
  cin >> val1; 

  cout << "\t\t"; 
  cin >> val2;

  cout << "\t\t";
  cin >> val3; 

  cout << "\t\t"; 
  cin >> val4; 

  if (min(min(val1, val2) < min(val3, val4)) {
    cout << "The minimum value is " << min(val1, val2) << endl;
  } else if (min(min(val3, val4) < min(val1, val2)) {
    cout << "The minimum value is " << min(val3, val4) << endl; 
  }
  }
  return 0;
}