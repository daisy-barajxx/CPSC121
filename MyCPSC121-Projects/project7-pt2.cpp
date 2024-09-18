/* 
  Daisy Barajas
  CS 121 
  07 November 2023
  Program that displays random coordinates that are inside the rectangle (including being on its boundary) and the outside with x and y on a given range
*/
#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() 
{
  srand(time(0));
  int width = 100,
      height = 200;
  double x, y;
  // Displays the rectangle's dimensions
  cout << "The rectangle is centered at (0,0) with a width of " << width << " and a height of " << height << "." << endl; 

  // Displays the coordinates that are inside the rectangle
  cout << "\nThe top left corner: (-" << width/2 << "," << height/2 << ")" << endl;

  cout << "The top right corner: (" << width/2 << "," << height/2 << ")" << endl;

  cout << "The bottom left corner: (-" << width/2 << "," << -height/2 << ")" << endl;

  cout << "The bottom right corner: (" << width/2 << "," << -height/2 << ")\n" << endl;

  for (int i = 0; i < 5; i++) // for loop that loops 5 times
  {
    // Generates random coordinates that cast double  
    x = static_cast<double>(rand())/ RAND_MAX * 1000 - 500; // x coordinate
    y = static_cast<double>(rand()) / RAND_MAX * 1000 - 500; // y coordinate

    if (x < -width || y < -height && x > width || y > height)  // Displays the coordinates that are outside the rectangle
    {
      cout << "Randome Coordinate " << i+1 << ": (" << x << "," << y << ")\n"; 
      cout << "The coordinates is outside the rectangle.\n\n" << endl;
    }
      else if (x < width || x > -width && y < height || y > -height) // Displays the coordinates that are inside the rectangle
      {
        cout << "Randome Coordinate " << i+1 << ": (" << x << "," << y << ")\n"; 
        cout << "The coordinates is inside the rectangle.\n\n" << endl;
      }
      else if (x == width || x == -width && y == height || y == -height) // Displays the coordinates that are on the rectangle's boundary
      {
        cout << "Randome Coordinate " << i+1 << ": (" << x << "," << y << ")\n"; 
        cout << "The coordinates are on the rectangle's boundary.\n\n" << endl;
      }
  }
  return 0;
}