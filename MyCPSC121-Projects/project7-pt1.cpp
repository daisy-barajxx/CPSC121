/*
  Daisy Barajas
  CS 121
  06 November 2023
  Program that displays random coordinates that are inside the rectangle
*/

#include <iostream>
#include <cstdlib>
#include <cmath> 
using namespace std;
int main() 
{
  int width = 100, 
      height = 200;

  // Displays the rectangle's dimensions
  cout << "The rectangle is centered at (0,0) with a width of " << width << " and a height of " << height << "." << endl; 
  // Displays the coordinates that are inside the rectangle
  cout << "The top left corner of the rectangle is (-" << width/2 << "," << height/2 << ")" << endl;

  cout << "The top right corner of the rectangle is (" << width/2 << "," << height/2 << ")" << endl;

  cout << "The bottom left corner of the rectangle is (-" << width/2 << "," << -height/2 << ")" << endl;

  cout << "The bottom right corner of the rectangle is (" << width/2 << "," << -height/2 << ")" << endl;

  // Generates random coordinates and repeat it 5 times
  for (int i = 0; i < 5; i++)
  {
    int x = width/2 + (rand() % (width - width/2));
    int y = height/2 + (rand() % (height - height/2));
    cout << "\nRandom Coordinate " << i+1 << ": (";
    cout << x << "," << y << ")" << endl;
  }
  return 0; 
}