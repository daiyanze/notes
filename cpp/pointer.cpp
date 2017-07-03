#include <string>
#include <iostream>

using namespace std;

int main(){
  
  int sum = 5;
  int* sumPtr = &sum;
  cout << "Address of the pointer is " << sumPtr << endl;

  cout << "Data at memory address is " << *sumPtr << endl;

  int badNums[5] = {4, 13, 4 ,1, 3};

  int* numArrayPtr = badNums;
  
  cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
  
  numArrayPtr++;

  cout << "Address " << numArrayPtr << " Value " << numArrayPtr << endl;

  return 0;
}
