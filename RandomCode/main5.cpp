#include <iostream>
#include <algorithm>
using namespace std;

int* sortArray(int arr[3]) {
  int* sortedArr = new int[3];
  copy(arr, arr + 3, sortedArr);

  sort(sortedArr, sortedArr + 3);

  return sortedArr; 
}

int main() {
  int arr[] = {3, 1, 2};
  int* sortedArr = sortArray(arr);

  cout << "Sorted Array: ";
  for (int i = 0; i < 3; ++i) {
    cout << sortedArr[i] << " ";
  }
  cout << endl;
  delete[] sortedArr;
}