/* 
  Daisy Barajas
  CS 121
  06 December 2023
  This program will determine the number of primes between 2 - 10000. 
*/

#include <iostream>
using namespace std;

 // Function to determine if number is prime
 // function header
bool isPrime(int number) { 
  if (number <= 1) {
    return false;
    // if number is less than or equal to 1 return false meaning it is not prime
}
  if (number == 2 || number == 3) {
    return true; 
    // if number is 2 or 3 return true meaning it is prime
  }
  if (number % 2 == 0 || number % 3 == 0) {
    return false;
    // if number is divisible by 2 or 3 return false meaning it is not prime
  }
  for (int i = 5; i * i <= number; i += 6) { 
    if (number % i == 0 || number % (i + 2) == 0) 
      // if number is divisible by i or i + 2 return false meaning it is not prime
    {
      return false; 
    }
  }
      return true; 
  // if number is not divisible by any of the above return true meaning it is prime
}


int main() {
  int count = 0; 
  for (int i = 2; i <=10000; i++) { 
    // loop through numbers 2 - 10000
    if (isPrime(i)) { // function call
      // if number is prime add to count
      count++;
    }
}
  cout << "The number of primes between 2 and 10,000 are: " << count << endl; 
  return 0;
}