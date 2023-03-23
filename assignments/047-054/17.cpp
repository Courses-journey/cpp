#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i <= 102; i++)
  {
    if (i < 10)
    {
      cout << "00";
    }
    else if (i <= 20)
    {
      cout << "0";
    }

    if (i == 20)
    {
      i = 99;
    }

    cout << i << "\n";
  }
}

// Output Needed
// 001
// 002
// 003
// 004
// 005
// 006
// 007
// 008
// 009
// 010

// 011
// 012
// 013
// 014
// 015
// 016
// 017
// 018
// 019
// 020

// 100
// 101
// 102