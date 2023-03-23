#include <iostream>
using namespace std;

int main()
{
  // 01
  // for (int i = 0; i < 4; i++)
  // {
  //   int num = 10;

  //   for (int j = 0; j < i; j++)
  //   {
  //     num *= num;
  //   }

  //   cout
  //       << num << "\n";
  // }

  // 02
  int lCount = 0;
  while (true)
  {
    int num = 10;

    for (int j = 0; j < lCount; j++)
    {
      num *= num;
    }

    cout
        << num << "\n";

    lCount++;
    if (lCount == 4)
    {
      break;
    }
  }
}

// Output Needed
// 10 100 10000 100000000