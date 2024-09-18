/*
  demonstrating a function with three parameters
*/ 
#include <iostream>
using namespace std;

void deeper() {
  cout << "I am now inside the funciton deeper.\n";
}

void deep() {
  cout << "I am not inside the function deep.\n";
  deeper();
  cout << "Now I am back in deep.\n";
}


int main () {
  cout << "I am starting in funciton main.\n";
  deep();
  cout << "Back in function main again.\n";
  return 0;
}
