#include <iostream>
#include <iomanip>
using namespace std;

struct Material {
  string code, name;
  float mark;
};

void printResult(Material materials[], int materialsArrLength) {
  cout << "---------|--------------------------------|---------|" << endl;
  cout << "  Code   |              Name              |  Mark   |" << endl;
  cout << "---------|--------------------------------|---------|" << endl;

  for (int i = 0; i < materialsArrLength; i++) {
    cout << setw(9) << materials[i].code << '|' << setw(32) << materials[i].name
         << '|' << setw(9) << materials[i].mark << "|\n";
  }
}

int main() {
  Material materials[3];

  materials[0].code = "cs101";
  materials[0].name = "Introduction to computer scince";
  materials[0].mark = 90.45f;

  materials[1].code = "cs102";
  materials[1].name = "Computer hardware";
  materials[1].mark = 85.0f;

  materials[2].code = "cs10427b";
  materials[2].name = "Networks";
  materials[2].mark = 70.6f;

  printResult(materials, 3);

  return 0;
}
