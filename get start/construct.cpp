#include <iostream>
using namespace std;

class Machine {
private:
  int id;

public:
  Machine(): id(0) { cout << "Machine no-argument constructor called. " << endl; }
  Machine(int id): id(id) { cout << "Machine no-argument constructor called." << endl; }
  void info() { cout << "ID: " << id << endl; }
};

class Vehicle: public Machine{
public:
  Vehicle(int id): Machine(id) { cout << "Vehicle parameterized constructor called." << endl; }
  Vehicle() { cout << "Vheicle no-argument constructor called." << endl; }
};

class Car: public Vehicle{
public:
  // Car() { cout << "Car no-argument constructor called." << endl; }
  Car(): Vehicle(999) { cout << "Car2" << endl; }
};
int main(){
  Vehicle vehicle;
  vehicle.info();

  Car car;
  car.info();

  Machine machi(123);
  machi.info();


  return 0;
}



