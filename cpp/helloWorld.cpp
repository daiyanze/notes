#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	cout << "Hello World" << endl;

	const double PI = 3.1415926535;

	char myName = 'tai';

	bool isOpen = true;

	int myAge = 28;

	float favNum = 7.232323;

	double otherFavNum = 123123.34;

	cout << "Favroite Number " << favNum << endl;

  int five = 5;

  five += 6; five++;

  cout << "five is " << five << endl;

  cout << "4 / 5 ~ " << 4/5 << endl;

  cout << "4 / 5 = " << (float) 4/5 << endl;

  int age = 70;
  int ageAtLastExam = 16;
  bool isNotIntoxicated = true;

  if ((age >= 70) && (age < 16)) {
    cout << "You can't drive" << endl;
  } else if (!isNotIntoxicated) {
    cout << "You can't drive" << endl;
  } else {
    cout << "You may dirve" << endl;
  }

  const string variable = 1 > 2 ? "1 is bigger" : "2 is bigger";
  cout << variable << endl;

  int NumsArray[5];
  int newSet[5] = {1,2,3,4,5};
  cout << "New set number 1 is : " << newSet[0] << endl;
  char name[5][5] = {{'d', 'a', 'i'}, {'y', 'a', 'n', 'z', 'e'}};
  cout << "2nd letter in 2nd array " << name[1][1] << endl;

  for(int i = 1; i <= 10; i++)
  {
    cout << i << endl;
  }

  for (int j = 0; j < 5; j++) {
    for (int k = 0; k < 5; k++) {
      cout << name[j][k];
    }
  }

	return 0;
}
