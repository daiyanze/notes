#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Animal {
  private:
    int height;
    int weight;
    string name;

    static int numOfAnimals;
    
  public:
    int getHeight(){ return height; }
    int getWeight(){ return weight; }
    string getName(){ return name; }
    void setHeight(int cm){ height = cm; }
    void setWeight(int kg){ weight = kg; }
    void setName(string animalName){ name = animalName; }

    void setAll(int, int, string); // Prototype of function

    Animal(int, int, string);

    ~Animal(); // Destructor

    Animal();

    static int getNumOfAnimals() { return numOfAnimals;}

    void toString();
};

int Animal::numOfAnimals = 0;
// Use prototype functions to setup object
void Animal::setAll(int height, int weight, string name){
  this->height = height;
  this->weight = weight;
  this->name = name;
  Animal::numOfAnimals++;
}
// Use destructor to delete object
Animal::~Animal(){
  cout << "Animal " << this->name << " destroyed" << endl;
}
// Implement Animal()
Animal::Animal(){
    Animal::numOfAnimals++;
}
// Use constructor to setup object
Animal::Animal(int height, int weight, string name){
  this->height = height;
  this->weight = weight;
  this->name = name;
  Animal::numOfAnimals++;
}

void Animal::toString(){
  cout << this->name << " is " << this->height << 
     " cms tall and " << this->weight << " kgs in weight" << endl;
}

class Dog: public Animal {

  private:
    string sound = "Woof";
  public:
    void getSound() { cout << sound << endl;}

    Dog(int, int , string, string);
    Dog() : Animal(){};

    void toString();
};

Dog::Dog(int height, int weight , string name, string bark):
  Animal(height, weight, name){
    this->sound = bark;

  }

void Dog::toString(){
  cout << this->getName() << " is " << this->getHeight() <<
    " cms tall and " << this->getWeight() << " kgs in weight and sound like " << this->sound;
}

int main()
{
    Animal fred;
    fred.setHeight(33);
    fred.setWeight(19);
    fred.setName("Fred");

    cout << fred.getName() << " is " << fred.getHeight() << 
      " cms tall and " << fred.getWeight() << "kgs n weight" << endl;

    Animal tom(3, 23, "Tom");

    cout << tom.getName() << " is " << tom.getHeight() << 
      " cms tall and " << tom.getWeight() << "kgs n weight" << endl;

    Dog spot(11, 23, "Spot", "Woof");

    cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;

    spot.getSound();
    tom.toString();
    spot.toString();

    // call super class method
    spot.Animal::toString();

    return 0;
}
