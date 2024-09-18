#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
  int n, num, reverse = 0, d;
    cout << "Enter a digit: ";
    cin >> num; 
    if (num <= -1 || num > 999999) {
      cout << "Try again. Enter a digit that is not less than 0 ";
      cout << "or greater than 999999: ";
      cin >> num;
    }
    n = num;
    if (num > -1 && num <= 999999)
      do {
        d = num % 10;
        reverse = reverse * 10 + d;
        num /= 10;
      } while (num != 0); 
    if (n == reverse) {
      cout << "The number entered is a palindrone.\n"; 
    } else {
      cout << "The number entered is NOT a palindrome.\n";
    }
  return 0;
  }
