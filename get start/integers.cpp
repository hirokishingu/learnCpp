#include <iostream>
#include <limits>
using namespace std;

int main(){
  int value = 54645;
  cout << value << endl;
  cout << "Max int value: " << INT_MAX << endl;
  cout << "Min int value: " << INT_MIN << endl;

  int lValue = 132414324;
  cout << lValue << endl;

  short int sValue = 23434;
  cout << sValue << endl;
  cout << "Size of int: " << sizeof(int) << endl;
  cout << "Size of short int: " << sizeof(short int) << endl;

  unsigned int uValue = -2342343;
  cout << uValue << endl;



  return 0;
}