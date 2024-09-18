/*
  Daisy Barajas
  CS 121 
  06 December 2023
  This program will differentiate between non-leap and leap years. This program will also display the number of days in years 2010-2024.
*/


#include <iostream>
using namespace std;

int numOfDaysInYear(int year) { // function header
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { // leap year
    return 366; // leap year

  } else {
    return 365; // non-leap year
}
}

int main() {
  cout << "Year\t|\tNumber of Days\n";
  for (int year = 2010; year <= 2024; year++) { // loop to display years between 2010 and 2024
    cout << year << "\t|\t" << numOfDaysInYear(year) << endl;
  }
  return 0; 
}
