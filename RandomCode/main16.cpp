#include <iostream>
#include <string>
using namespace std; 
void myFunction (string fName = "Fulisha", int num = 5) {
  cout << fName << " Caca. " << num << " years old. \n";
}

int main() {
  myFunction ("Liam", 8);
  myFunction ("Aylar", 18);
  myFunction ("JJ", 28);
  myFunction ();
  myFunction ("Jaakola", 62);
  return 0;
}