#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;


void printMatrix(int n) {
  srand(time(0));
  for (int i = 0; i < n; ++i) {
    int ranNum = rand() % 2;
    cout << ranNum << " ";
  }
  cout << endl;
}


int main() {
  int n = 5; 
  cout << "Random Matrix (" << n << "x" << n << "):" << endl;
  printMatrix(n);

  return 0;
}
