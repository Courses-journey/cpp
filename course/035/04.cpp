#include <iostream>
using namespace std;

int main()
{
  cout << "|=============================|\n";
  cout << "|===== Simple Calculator =====|\n";
  cout << "|=============================|\n";
  cout << "|======| + | - | / | * |======|\n";

  int num1, num2;
  cout << "Enter two nnumbers:\n";
  cin >> num1 >> num2;

  char operation;
  cout << "Enter the opertaion: ";
  cin >> operation;

  double result;
  if (operation == '+')
    result = num1 + num2;
  else if (operation == '-')
    result = num1 - num2;
  else if (operation == '*')
    result = num1 * num2;
  else
    result = num1 / num2;

  cout << num1 << " " << operation << " " << num2 << " = " << result;
}