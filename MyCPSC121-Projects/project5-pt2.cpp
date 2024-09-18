/*
  Daisy Barajas
  CS 121
  21 October 2023
  Using if/else logic to capture cases of temperatures reactions
*/
#include <iostream>
using namespace std; 

int main() 
{
  double temp; // degrees can be more than integers 
  cout << "The temperature outside is: "; 

  cin >> temp; // degrees in farenheit

  if (temp < 30 && temp >= -20) // if temp is between -20 and 30
    cout << "It's Cold!\n" << endl; 
    else if (temp > 100) // if temp is greater than 100
    cout << "This is darn Hot!\n" << endl; 
    // these if/else are conditions that if one doesn't meet the compiler will skip it and go to the next possible condition
  if (temp > 30 && temp < 100) // if temp is in between 30 and 100 degrees
    cout << "I can live with that.\n" << endl; 
    else if (temp < -20) // if temp is less than -20 degrees
    cout << "It's too cold even for Stoli.\n" << endl; 


  cout << "The temperature outside is: "; // #2 case 

  cin >> temp; // degrees in farenheit

  if (temp < 30 && temp >= -20) 
    cout << "It's Cold!\n" << endl; 
    else if (temp > 100) 
    cout << "This is darn Hot!\n" << endl; 

  if (temp > 30 && temp < 100) 
    cout << "I can live with that.\n" << endl; 
    else if (temp < -20) 
    cout << "It's too cold even for Stoli.\n" << endl; 


  cout << "The temperature outside is: "; // #3 case 

  cin >> temp; // degrees in farenheit

  if (temp < 30 && temp >= -20) 
    cout << "It's Cold!\n" << endl; 
    else if (temp > 100) 
    cout << "This is darn Hot!\n" << endl; 

  if (temp > 30 && temp < 100) 
    cout << "I can live with that.\n" << endl; 
    else if (temp < -20) 
    cout << "It's too cold even for Stoli.\n" << endl; 


  cout << "The temperature outside is: "; // #4 case 

  cin >> temp; // degrees in farenheit

  if (temp < 30 && temp >= -20) 
    cout << "It's Cold!\n" << endl; 
    else if (temp > 100) 
    cout << "This is darn Hot!\n" << endl; 

  if (temp > 30 && temp < 100) 
    cout << "I can live with that.\n" << endl; 
    else if (temp < -20) 
    cout << "It's too cold even for Stoli.\n" << endl; 


  cout << "The temperature outside is: "; // #5 case (last case)

  cin >> temp; // degrees in farenheit

  if (temp < 30 && temp >= -20) 
    cout << "It's Cold!\n" << endl; 
    else if (temp > 100) 
    cout << "This is darn Hot!\n" << endl; 

  if (temp > 30 && temp < 100) 
    cout << "I can live with that.\n" << endl; 
    else if (temp < -20) 
    cout << "It's too cold even for Stoli.\n" << endl; 
  return 0; // done with the program 
    }