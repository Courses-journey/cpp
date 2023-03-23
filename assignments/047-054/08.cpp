#include <iostream>
using namespace std;

int main()
{
  // 01
  // int lNum = 0;
  // for (int i = 0; i < 6; i++)
  // {
  //   (lNum *= 2) += 2;

  //   cout
  //       << lNum << "\n";
  // }

  // 02
  int lNum = 0;
  int lCount = 0;

  while (true)
  {
    (lNum *= 2) += 2;
    cout
        << lNum << "\n";

    lCount++;
    if (lCount == 6)
    {
      break;
    }
  }
}

// Output Needed
// 2
// 6
// 14
// 30
// 62
// 126