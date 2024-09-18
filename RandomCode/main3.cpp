#include <iostream>
using namespace std;

int mid(int, int, int);

int main() {
  int n1 =0, n2=0, n3=0; 
  int medianResult = mid(n1, n2, n3);
  cout << "Enter three integer numbers: ";
  cin >> n1 >> n2 >> n3;
  medianResult = mid(n1, n2, n3);
  cout << "The median integer is " << medianResult << endl;
  return 0;
}

int mid(int val1, int val2, int val3) {
  int median;
  median = max(min(val1, val2), min(max(val1, val2), val3));
  return median;
}