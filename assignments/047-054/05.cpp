#include <iostream>
using namespace std;

int main()
{

  // 01
  // for (int i = 0; i <= 27; i++)
  // {
  //   if (i % 3 == 0)
  //   {
  //     cout << i << "\n";
  //   }
  // }

  //
  int num = 0;
  while (num <= 27)
  {
    if (num % 3 == 0)
    {
      cout << num << "\n";
    }
    num++;
  }
}

// Output Needed
// 0 3 6 9 12 15 18 21 24 27