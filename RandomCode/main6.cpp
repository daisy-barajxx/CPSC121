#include <iostream>
using namespace std;

float minNum(float, float, float, float);

int main () {
  float num = 0.0, num2 = 0.0, num3 = 0.0, num4 = 0.0;
  float result = (minNum(num, num2, num3, num4));
  do {
    cout << "Enter four float numbers: ";
    cin >> num >> num2 >> num3 >> num4;
    result = (minNum(num, num2, num3, num4));
    cout << "The smallest number is: " << result << endl;
  } while (result <= 100);
}

float minNum (float n1, float n2, float n3, float n4) {
  float mini;
  mini = min(min(min(n1,n2), n3), n4);
  return mini;
}