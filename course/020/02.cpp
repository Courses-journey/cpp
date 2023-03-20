#include <iostream>
using namespace std;

int main()
{
  cout << "----------------------" << endl;
  cout << "- Character To ASCII -" << endl;
  cout << "----------------------" << endl;

  char rChar;
  cout << "Input char: ";
  cin >> rChar;

  int ascii = int(rChar);
  cout << "ASCII value is: " << ascii;
}