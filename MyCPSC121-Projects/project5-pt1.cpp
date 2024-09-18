/*
  Daisy Barajas 
  CS 121 
  22 October 2023
  Using if/else and do/while statements that allows me to input integers that are 6 digits or less and output if the integer is valid and palindrome or not.
*/
#include <iostream>
using namespace std; 

int main () {
  int n, num, dig, rev = 0; 


  cout << "Input Integer: "; 
  cin >> num; // input an integer
  if (num <= -1) { // condition that limits the integer to remain positive
    cout << "Try Again! Enter a nonnegative integer." << endl; 
  } 
  if (num > 999999) { // condition that limits the integer to remain less them 6 digits  
    cout << "Try Again! Enter a nonnegative integer with six digits or fewer." << endl; 
  }
  n = num; // n is the same as num
  if (num > -1 && num < 999999) // condiditon that states if the top two conditions don't apply, continue the program
    do // if the integer applies to the condition have the integer go through the instuctions below
    {
      dig = num % 10; // digit is the remainder of num divided by 10
      rev = (rev * 10) + dig; // rev is the reverse of num
      num = num / 10; // num is the quotient of num divided by 10
    } while (num != 0); // condition 

    if (n == rev) // if the reverse of num is the same as num, the number is a palindrome
      cout << "Output: Palindrome." << endl; 
    else // otherwise its not palindrome
      cout << "Output: Not Palindrome." << endl; 
    return 0; 
  } 
