/*
  Daisy Barajas
  CS 121 
  21 October 2023
  Apply Math into my code to check if the coordinates entered are inside the circle at (0,0) with a radius of 10
*/
#include <iostream>
#include <cmath> 
using namespace std; 

int main() 
{
  int xC, yC, r = 10, h = 0, k = 0, circle; // variables used in center in cicle formula 
  cout << "Run and Test if coordinates are inside the cicle centered at (0,0) and with a radius of 10\n" << endl; 
  cout << "\nEnter x coordinate: "; 
  cin >> xC; // input an x-value
  cout << "Enter y coordinate: ";
  cin >> yC; // input a y-value 
  cout << "(" << xC << "," << yC << ")" << endl; // display points inputed as (x,y)  
  circle = sqrt( (pow(xC-h, 2)) + (pow(yC-k, 2)) ); // calculate points in the center of cicle
  if (circle <= 10) // condition that says if the points are inside the circles radius it's true
    cout << "Points are inside the Circle." << endl; 
  else // condition that says if points say otherwise it's false
    cout << "Points aren't inside the Circle." << endl;


  cout << "\nEnter x coordinate: "; // input the second set of values
  cin >> xC; 
  cout << "Enter y coordinate: ";
  cin >> yC; 
  cout << "(" << xC << "," << yC << ")" << endl; 
  circle = sqrt( (pow(xC-h, 2)) + (pow(yC-k, 2)) ); 
  if (circle <= 10)
    cout << "Points are inside the Circle." << endl; 
  else 
    cout << "Points aren't inside the Circle." << endl;


  cout << "\nEnter x coordinate: "; // input the third set of values
  cin >> xC; 
  cout << "Enter y coordinate: ";
  cin >> yC; 
  cout << "(" << xC << "," << yC << ")" << endl; 
  circle = sqrt( (pow(xC-h, 2)) + (pow(yC-k, 2)) ); 
  if (circle <= 10)
    cout << "Points are inside the Circle." << endl; 
  else 
    cout << "Points aren't inside the Circle." << endl;


  cout << "\nEnter x coordinate: "; // input the fourth set of values
  cin >> xC; 
  cout << "Enter y coordinate: ";
  cin >> yC; 
  cout << "(" << xC << "," << yC << ")" << endl; 
  circle = sqrt( (pow(xC-h, 2)) + (pow(yC-k, 2)) ); 
  if (circle <= 10)
    cout << "Points are inside the Circle." << endl; 
  else 
    cout << "Points aren't inside the Circle." << endl;


  cout << "\nEnter x coordinate: "; // input the last set of values
  cin >> xC; 
  cout << "Enter y coordinate: ";
  cin >> yC; 
  cout << "(" << xC << "," << yC << ")" << endl; 
  circle = sqrt( (pow(xC-h, 2)) + (pow(yC-k, 2)) ); 
  if (circle <= 10)
    cout << "Points are inside the Circle." << endl; 
  else 
    cout << "Points aren't inside the Circle.\n" << endl;
  return 0; 
}