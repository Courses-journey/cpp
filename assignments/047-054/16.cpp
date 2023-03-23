#include <iostream>
using namespace std;

int main()
{
  int index = 10;
  int jump = 2;

  for (;;)
  {
    cout << index << "\n";

    if (index == 4)
    {
      break;
    }
    index -= jump;
  }
}

// Output Needed
// 10
// 8
// 6
// 4