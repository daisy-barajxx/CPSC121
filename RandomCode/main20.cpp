#include <iostream>
using namespace std;
// Declare the enumerated type
enum Roster { tom = 1, sharon, bill, teresa, john };
// sharon - john will be assigned default values 2-5
int main() {
  int who;

  cout << "This program will give you a student's birthday.\n";
  cout << "Whose birthday do you want to know?\n";
  cout << "1 = Tom\n";
  cout << "2 = Sharon\n";
  cout << "3 = Bill\n";
  cout << "4 = Teresa\n";
  cout << "5 = John\n";
  cin >> who;

  switch (who) {
  case tom:
    cout << "\nTom's birthday is Januaray 3.\n";
    break;
  case sharon:
    cout << "\nSharon's birthday is April 22.\n";
    break;
  case bill:
    cout << "\nBill's birthday is December 19.\n";
    break;
  case teresa:
    cout << "\nTeresa's birthday is February 2.\n";
    break;
  case john:
    cout << "\nJohn's birthday is June 17.\n";
    break;
  default:
    cout << "\nInvaild selection\n";
  }
  return 0;
}
