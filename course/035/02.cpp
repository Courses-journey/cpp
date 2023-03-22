#include <iostream>
using namespace std;

int main()
{
  cout << "|=============================|\n";
  cout << "|===== Find the greatest =====|\n";
  cout << "|=============================|\n";

  int a, b, c;

  cout << "Enter three number:\n";
  cin >> a >> b >> c;

  int result;

  if (a > b)
    result = a;
  else
    result = b;

  if (a > c)
    result = a;
  else
    result = c;

  cout << "From numbers: " << a << " | " << b << " | " << c << " the greatest is: " << result;
}