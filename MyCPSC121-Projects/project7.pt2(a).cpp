/* 
  Daisy Barajas
  CS 121 
  06 November 2023
  Program that displays random coordinates that are inside the rectangle (including being on its boundary) and the outside with x and y on a given range
*/
#include <iostream>
#include <cstdlib> 
#include <cmath> 
using namespace std;
int main() 
{
  srand(time(0));
  int width = 100,
      height = 200;
  double x = 0.0, y = 0.0;
  // Displays the rectangle's dimensions
  cout << "The rectangle is centered at (0,0) with a width of " << width << " and a height of " << height << "." << endl; 

  // Displays the coordinates that are inside the rectangle
  cout << "\nThe top left corner: (-" << width/2 << "," << height/2 << ")" << endl;

  cout << "The top right corner: (" << width/2 << "," << height/2 << ")" << endl;

  cout << "The bottom left corner: (-" << width/2 << "," << -height/2 << ")" << endl;

  cout << "The bottom right corner: (" << width/2 << "," << -height/2 << ")" << endl;

  for (int i = 0; i < 5; i++) 
  {
    // Generates random coordinates
    x = rand() % (500 - (-500) + 1) + (-500);
    y = rand() % (500 - (-500) + 1) + (-500);
    cout << "\nRandom Coordinate " << i+1 << ": (" << x << "," << y << ")" << endl;

    if (x > width && y > height)
    cout << "The coordinates are outside the rectangle." << endl;
    else if (x == width && y == height)
      cout << "The coordinates are on the rectangle's boundary." << endl;
    else if (x < width && y < height)
      cout << "The coordinates are inside the rectangle." << endl;
  }
  return 0;
}