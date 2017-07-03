#include <string>
#include <iostream>

using namespace std;

int main()
{
  int a = 1;
  float f = 123.123;
  string* s = new string();
  int& b = a;
  int &c = a;
  int&d=a;
  int *p;
  p = &a;
  cout << &b << endl;
  cout << &c << endl;
  cout << d << endl;
  cout << p << endl;
  cout << s << endl;
  delete s;
  return 0;
}
