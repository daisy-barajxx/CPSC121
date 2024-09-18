#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main() {
  srand(time(0));

  cout << "Randome number between 1 and 10: " << rand() % 10 + 1 << endl;
  return 0; 
}