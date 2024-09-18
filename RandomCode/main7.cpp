/* 
  makes a funciton call for each selection made
*/
#include <iostream>
#include <iomanip>
using namespace std;

void showDouble(int);

int main () {
  int val1;
  for (val1 = 0; val1 < 10; val1++) 
    showDouble (val1);
  return 0;
}


void showDouble(int num) {
  cout << num << "\t" << (num * 2);
  cout << endl;
}