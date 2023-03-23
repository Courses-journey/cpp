#include <iostream>
using namespace std;

int main()
{
  for (int i = 30; i > 0; i -= 3)
  {
    cout << i << "\n";
  }

  // 9
  cout << "\nWithout Even Numbers\n";
  for (int i = 30; i > 0; i -= 3)
  {
    if (i % 2 == 0)
    {
      continue;
    }

    cout << i << "\n";
  }
}

// Output Needed
// 30
// 27
// 24
// 21
// 18
// 15
// 12
// 9
// 6
// 3

// Without Even Numbers
// 27
// 21
// 15
// 9
// 3