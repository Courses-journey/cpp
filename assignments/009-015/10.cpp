#include <iostream>
using namespace std;

int main()
{

  // Write Your Code Here

  cout << "\n|===============================|";
  cout << "\n|== Two number multiplication ==|";
  cout << "\n|===============================|";

  int num1;
  int num2;

  cout << "\n"
       << "Enter the first number: ";
  cin >> num1;
  cout << "\n"
       << "Enter the second number: ";
  cin >> num2;

  // Number One => 10
  cout << "\n"
       << "Number One => " << num1;

  // Number Two => 100
  cout << "\n"
       << "Number Two => " << num2;

  // Needed Output 1000 [10 * 100]
  cout << "\n"
       << "Needed Output " << num1 * num2 << " ["
       << num1
       << " * "
       << num2
       << "]";

  return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here

  // Number One => 10
  // Number Two => 100
  // Needed Output 1000 [10 * 100]
  return 0;
}
*/