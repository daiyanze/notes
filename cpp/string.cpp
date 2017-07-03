#include <string>
#include <iostream>

using namespace std;

int main()
{
  char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};

  string birthdayString = " Birthday";

  cout << happyArray + birthdayString << endl;

  string yourName;

  cout << "What is your name ";

  getline(cin, yourName);

  cout << "hello " << yourName << endl;

  double eulersConstant = .57721;

  string eulerGuess;
  double eulerGuessDouble;

  cout << "What is Eulers's Constant? ";
  getline(cin, eulerGuess);

  eulerGuessDouble = stod(eulerGuess);

  if(eulerGuessDouble == eulersConstant)
  {
    cout << "You are right!!!!"  << endl;
  } else {
    cout<< "You are wrong!!!" << endl;
  }

  cout << "Size of String " << eulerGuess.size() << endl;
  cout << "Is String Empty " << eulerGuess.empty() << endl;
  cout << eulerGuess.append(" was your guess") << endl;

  string dogString = "dog";
  string catString = "cat";

  cout << dogString.compare(catString) << endl;
  cout << dogString.compare(dogString) << endl;
  cout << catString.compare(dogString) << endl;

  string wholeName = yourName.assign(yourName);
  cout << wholeName << endl;

  string firstName = wholeName.assign(wholeName, 0, 5);
  int lastNameIndex = yourName.find("dai", 0);
  cout << "Index for last name " << lastNameIndex << endl;

  yourName.insert(5, " ()");
  cout << yourName << endl;

  yourName.erase(6,7);
  cout << yourName << endl;

  yourName.replace(6,5, "tai");
  cout << yourName << endl;


  return 0;
}
