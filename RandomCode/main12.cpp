#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a, b;
  a = 6; 
  b = a--;
  cout << a << endl;
  cout << b << endl;
  a = 6; 
  b = --a; 
  cout << a << endl;
  cout << b << endl;
  return 0;
}