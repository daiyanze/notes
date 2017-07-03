#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string steveQuote = "A day without sunshine is like night";

  ofstream writer("stevequote.txt");

  if(!writer){
    cout << "Error opening file" << endl;

    return -1;
  } else {
    writer << steveQuote << endl;
    writer.close();

  }

  ofstream writer2("stevequote.txt", ios::app);

  if(!writer2){
    cout << "Error opening file" << endl;

    return -1;
  } else {
    writer2 << "\n -Steve Martin" << endl;
    writer2.close();

  }
  char letter;

  ifstream reader("stevequote.txt");

  if(!reader)
  {
    cout << "ErrorOpening file" << endl;
    return -1;
  } else {
    for(int i=0; ! reader.eof(); i++)
    {
      reader.get(letter);
      cout << letter;
    }
    cout << endl;
    reader.close();
  }
}
