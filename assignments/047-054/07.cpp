#include <iostream>
using namespace std;

int main()
{
  // 01
  // for (int i = 0; i < 7; i++)
  // {
  //   int num = 2;
  //   for (int j = 0; j < i; j++)
  //   {
  //     num *= 2;
  //   }

  //   cout << num << "\n";
  // }

  // 02
  int lCount = 0;

  while (true)
  {
    int num = 2;
    for (int j = 0; j < lCount; j++)
    {
      num *= 2;
    }

    cout << num << "\n";

    lCount++;
    if (lCount == 7)
    {
      break;
    }
  }
}

// Output Needed
// 2 4 8 16 32 64 128