#include <iostream>
using namespace std;

int main()
{
  cout << "|********************|\n";
  cout << "|**** Calculator ****|\n";
  cout << "|********************|\n\n";

  int num1, num2;
  char op;
  cout << "Input operation like 2 + 3:\n";
  cin >> num1 >> op >> num2;

  double result;

  switch (op)
  {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    result = num1 / num2;
    break;
  default:
    cout << "U have entered a not supported operation.";
    return 0;
  }

  cout << num1 << " " << op << " " << num2 << " = " << result;
}