#include <iostream>
using namespace std;

int main()
{

  int num;
  cout << "Enter number in range 000 To 150: ";
  cin >> num;

  if (num >= 0 && num <= 150)
  {
    if (num < 10)
      cout << "00" << num;
    else
      cout << num;
  }

  else
    cout << "Please Type A Number Between 0 And 150\n";

  // If Number Smaller Than 10 "Example 5" Output Will Be => 005
  // If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
  // If Number Larger Than 100 "Example 115" Output Will Be => 115
}