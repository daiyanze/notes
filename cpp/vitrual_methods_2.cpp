#include <iostream>
#include <string>

using namespace std;

class Animal {
  public:
    virtual void makeSound() {
      cout << "The Animal says grr" << endl;
    }
};

class Dog : public Animal {
  public:
    void makeSound(){ cout << "The dog says woof!" << endl; }
};

class Cat : public Animal {
  public:
    void makeSound(){ cout << "The cat says meow!" << endl; }
};

class Car {
  public:
    virtual int getNumWheels() = 0; // Pure virutal method
    virtual int getNumDoors() = 0;
};

class StationWagon : public Car{
  public:
    int getNumWheels() { cout << "Station wagon has 4 wheels" << endl; }
    int getNumDoors() { cout << "Station wagon has 4 doors" << endl; }
    StationWagon(){}
    ~StationWagon();
};

int main() {
  Animal* ptrCat = new Cat;
  Animal* ptrDog = new Dog;

  ptrCat->makeSound();
  ptrDog->makeSound();
  Car* stationWagon = new StationWagon();
  Car* wagon = new StationWagon;
  stationWagon->getNumWheels();
  wagon->getNumWheels();

  return 0;
}
