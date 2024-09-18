#include <iostream>
using namespace std;
int main() {
  for (int i = 3; i <= 10; i++) {
    if (i == 9) 
      break;
    cout << i << " ";
  }
  return 0;
}