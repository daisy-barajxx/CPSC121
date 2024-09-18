/*
  Daisy Barajas
  CS 121
  12 November 2023
  Program that prompts user to enter three floating point number and find the median of the given
*/

#include <iostream> 
using namespace std;

int main() 
{
  for (int i = 0; i < 5; i++) { // loop for 5 times
  double num1, num2, num3; // variables are decimal inputs
  cin >> num1 >> num2 >> num3;
  if (num1 >= num2 && num1 < num3) // focusing on the value of num1 
  {
    cout << "\nThe median is: " << num1;

  } else if (num2 >= num1 && num2 < num3) // focusing on the value of num2 
  {
    cout << "\nThe median is: " << num2;

  } else if (num3 >= num1 && num3 < num2) // focusing on the value of num3 
  {
    cout << "\nThe median is: " << num3;
  }
  }
  return 0;
}