#include <iostream>
#include <cmath> 
using namespace std; 

// put function defintion before any code that calls the function 
// compiler needs to know aobu thte function before it can execute it when it encounters a function call

// function header
int f(int x) {
  int y; 

  y = pow(x, 2.0) - 4 * x + 4; 
  return y; 
}


int main() {
  int result = 0; 

  result = f(3); // function call
  cout << result << endl;

  result = f(2); 
  cout << result << endl;

  result = f(4); 
  cout << result << endl;

  return 0;
}