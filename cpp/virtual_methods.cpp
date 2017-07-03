#include <string>
#include <iostream>


using namespace std;

class Animal {

  public:
    void getFamily() { cout << "We are animals" << endl; }
    virtual void getClass() { cout << "I'm an Animal" << endl; }
};

class Dog: public Animal {
  public:
    void getClass() { cout << "I'm a Dog" << endl;}
};

void whatClassAreYou(Animal *animal){
  animal->getClass();
}

class GermanShepard : public Dog {
  public:
    void getClass() { cout << "I'm a German Shepard" << endl; }
    void getDerived() { cout << "I'm an Animal and Dog" << endl; }
};

int main(){
  Animal *animal = new Animal;
  Dog *dog = new Dog;

  animal->getClass();
  dog->getClass();
  whatClassAreYou(animal);
  whatClassAreYou(dog);

  Dog spot;
  GermanShepard max;
  
  Animal* ptrDog = &spot;
  Animal* ptrShepard = &max;

  ptrDog->getFamily();
  ptrDog->getClass();

  ptrShepard->getFamily();
  ptrShepard->getClass();

  return 0;
}
