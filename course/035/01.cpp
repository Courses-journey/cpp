#include <iostream>
using namespace std;

int main()
{

  cout << "|============================|\n";
  cout << "|===== ODD EVEN CHECKER =====|\n";
  cout << "|============================|\n";

  int num;

  cout << "Enter number to check: ";
  cin >> num;

  if (num % 2 == 0)
  {
    cout << num << " is even number";
  }
  else
  {
    cout << num << " is odd number";
  }
}