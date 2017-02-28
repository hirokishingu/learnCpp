#include <iostream>
using namespace std;

int main(){

  int numberCats = 5;
  int numberDogs = 7;
  int numberAni = numberCats + numberDogs;
  cout << "Number of cats: " << numberCats << endl;
  cout << "Total number of animals: " << numberCats * numberDogs << endl;
  cout << "number of dogs" << endl;
  cout << "number of animals: " << numberAni << endl;
  cout << "new dog acqired!" << endl;

  numberDogs ++;
  numberAni = numberCats + numberDogs;
  cout << "New number of dogs: " << numberDogs << endl;
  cout << "new number of animals: " << numberAni << endl;


  return 0;
}










