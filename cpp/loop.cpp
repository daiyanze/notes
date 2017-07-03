#include <iostream>

using namespace std;

int main()
{
  int a = 2;

  for (int i = 1; i <= 10; i++) {
    cout << i << endl;
  }

  int randNum = (rand() % 100) + 1;

  while(randNum != 100)
  {
    cout << randNum << ", ";
    randNum = (rand() % 100) + 1;
  }

  cout << endl;

  string numberGuessed;
  int intNumberGuessed = 0;

  do {
    cout << "Guess between 1 and 10: ";
    getline(cin, numberGuessed);
    intNumberGuessed = stoi(numberGuessed);

    cout << intNumberGuessed << endl;
    
  } while(intNumberGuessed != 4);

  cout << "you win" << endl;

  return 0;
}
