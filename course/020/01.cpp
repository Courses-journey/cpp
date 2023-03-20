#include <iostream>
using namespace std;

int main()
{
  cout << "----------------------" << endl;
  cout << "- ASCII To Character -" << endl;
  cout << "----------------------" << endl;

  int ascii;
  cout << "Input ASCII value: ";
  cin >> ascii;

  char rChar = char(ascii);
  cout << "Character is: " << rChar;
}