#include <iostream>
using namespace std;

int main()
{

  int num = 2;
  while (num < 520)
  {
    if (num == 2)
    {
      num = 1;
      continue;
    }

    cout << num << "\n";
    num = num * 2 + 2;
  }
}

// Needed Output
// 1      num/num
// 4      num*2
// 10     num*2+2
// 22     num*2+2
// 46     num*2+2
// 94     num*2+2
// 190
// 382