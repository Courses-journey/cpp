#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
  {
    // Edit What You Need And Add Your Code
    i += 100;
    if (i >= 1000)
    {
      break;
    }

    cout << i << "\n";
  }
}

// Output Needed
// 100
// 200
// 300
// 400
// 600
// 700
// 800
// 900