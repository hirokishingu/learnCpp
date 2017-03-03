#include <iostream>
#include "Person.h"
using namespace std;

int main(){

  Person person1;
  cout << person1.toString() << endl;

  Person person2("Bob");
  cout << person2.toString() << endl;

  Person person3("Sue", 35);
  cout << person3.toString() << endl;

  // Person person;

  // person.setName("Georging");

  // cout << person.toString() << endl;

  // cout << "Name of person with get method: " << person.getName() << endl;



  return 0;
}
















