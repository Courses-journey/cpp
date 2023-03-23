#include <iostream>
using namespace std;

int main()
{

  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

  int friendsSize = size(friends);
  // 01
  // for (int i = 0; i < friendsSize; i++)
  // {
  //   if (friends[i][0] == 'A')
  //   {
  //     cout << friends[i] << "\n";
  //   }
  // }

  // 02
  int lCount = 0;
  while (true)
  {
    if (friends[lCount][0] == 'A')
    {
      cout << friends[lCount] << "\n";
    }

    lCount++;
    if (lCount == friendsSize)
    {
      break;
    }
  }
}

// Output Needed
// "Ahmed"
// "Ashraf"
// "Amany"
