#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vNumber = {10, 20, 30, 40, 50};

  for (int i = 0; i < 5; i++) {  // by ref
    cout << vNumber[i] << " ";
    vNumber[i] += 10;
  }

  for (int number : vNumber) {  // by value
    cout << number << " ";
    number += 10;
  }

  for (int &number : vNumber) {  // by ref
    cout << number << " ";
    number += 10;
  }

  for (int const &number : vNumber) {  // by ref, read only
    cout << number << " ";
    // number += 10; // Error
  }

  return 0;
}