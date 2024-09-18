/*
  this program calculates the number of points a soccer team has earned over a series of games. The user enters a series of point values, then -1 when finished.
*/

#include <iostream>
using namespace std;

int main() 
{
  int game = 1; 
  int points; 
  int total = 0; 
  cout << "Enter the nubmer of points your team had earned\n";
  cout << "so far in the season, then enter -1 when finished.\n\n";
  cout << "Enter the points of game " << game << ": ";
  cin >> points;

  while (points != -1) 
    {
      total += points;
      game++;
      cout << "Enter the points for the game " << game << ": ";
      cin >> points;
    }
  cout << "\nThe total points are " << total << endl;
  return 0; 
}