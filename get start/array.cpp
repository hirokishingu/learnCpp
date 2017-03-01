#include <iostream>
using namespace std;

int main(){
  int values[3];
  values[0] = 88;
  cout << values[0] << endl;

  cout << endl << "Array of doubles" << endl;
  cout << "===================" << endl;

  double numbers[4] = {4.5, 2.3, 7.2, 8.1};
  for(int i=0; i<4; i++){
    cout << "Element at index" << i << ": " << numbers[i] << endl;
  }
  int numberArray[8] = {};
  for(int i = 0; i<8; i++){
    cout << "Element at index" << i << " : " << numberArray[i] << endl;
  }
  return 0;
}