#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
  double weight, height, kilogram, meters, bodyMassIndex;
  for (int i = 1; i < 6; i++) {
    cout << "Round " << i << ": " << endl;
    cout << "Enter a weight in pounds: ";
    cin >> weight;

    cout << "Enter a height in inches: ";
    cin >> height;

    kilogram = weight * 0.45359237;
    meters = height * 0.0254;
    bodyMassIndex = kilogram / (meters * meters);

    cout << "The BMI is " << setprecision(3) << bodyMassIndex << " kg/meters^2" << endl;
  }
  return 0;
}