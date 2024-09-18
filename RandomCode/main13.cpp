#include <iostream> 
using namespace std;

// function prototype
void printChars(char ch1, char ch2, int numPerLine) {

  if (ch2 < ch1) {
    return;
  }

  for (char c = ch1; c <= ch2; c++) {
    cout << c;
    if ((c - ch1 + 1) % numPerLine == 0) {
      cout << endl;
    } else {
      cout << " ";
    }
}
}

int main () {
  // declare variables
  cout << "Part a: " << endl;
  printChars('1', 'X', 10);

  cout << "\n\nPart b: " << endl;
  printChars('A', 'z', 15);
    return 0;
}