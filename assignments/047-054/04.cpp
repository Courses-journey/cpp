#include <iostream>
using namespace std;

int main()
{
  // 01
  // for (int i = 0; i <= 18; i++)
  // {
  //   if (i % 2 != 0 || i == 10 || i == 12)
  //   {
  //     continue;
  //   }

  //   cout << i << "\n";
  // }

  // 02
  int i = 0;
  while (true)
  {
    if (i % 2 == 0 && i != 10 && i != 12)
    {
      cout << i << "\n";
    }

    if (i == 18)
    {
      break;
    }

    i++;
  }
}

// Output Needed
// 0 2 4 6 8 14 16 18