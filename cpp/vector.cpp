#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
  vector <int> lotteryNumVect(10);

  int lotteryNumArray[5] = {4,13, 14, 23, 32};

  lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);

  lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);


  cout <<lotteryNumVect.at(2) << endl;

  lotteryNumVect.push_back(64);

  cout << "Final Value " << lotteryNumVect.back() << endl;

  lotteryNumVect.pop_back();



  return 0;
}
