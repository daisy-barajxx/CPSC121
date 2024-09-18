#include <iostream>
using namespace std;
int main() {
  int numbers[] = {5, 2, 8, 1, 9,};
  int count;
  int lowest; 
  lowest = numbers[0];
  for (count = 1; count < sizeof(numbers)/sizeof(numbers[0]); count++) {
    if (numbers[count] < lowest) 
      lowest = numbers[count];
  }
  return 0;

}