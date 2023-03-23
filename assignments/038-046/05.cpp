#include <iostream>
using namespace std;

int main()
{

  // Example 1
  // int vals[] = {100, 200, 600, 200, 100};

  // Output
  // "Array Is Palindrome"

  // Example 2
  // int vals[] = {100, 200, 200, 100};

  // Output
  // "Array Is Palindrome"

  // Example 3
  int vals[] = {100, 300, 600, 200, 100};

  // Output
  // "Array Is Not Palindrome"

  int vals_length = sizeof(vals) / sizeof(vals[0]);

  if (vals[0] == vals[vals_length - 1] && vals[1] == vals[vals_length - 2] && vals[2] == vals[vals_length - 3])
    cout << "Array Is Palindrome";

  else
    cout << "Array Is Not Palindrome";
}