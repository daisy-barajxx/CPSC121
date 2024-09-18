#include <iostream>
#include <string>
using namespace std;
int main() {
  string city1, city2;
  cout << "Enter the first city: ";
  getline(cin, city1);
  cout << "Enter the second city: ";
  getline(cin, city2);

  if (city1 < city2)
    cout << "The cities in alphabetical order are: " << city1 << ", " << city2
         << endl;
  else
    cout << "The cities in alphabetical order are: " << city2 << ", " << city1
         << endl;
  return 0;
}