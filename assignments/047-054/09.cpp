#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
  int friendsSize = size(friends);
  // 01
  // for (int i = 0; i < friendsSize; i++)
  // {
  //   if (i == 1 || i == 2)
  //   {
  //     cout << friends[i] << "\n";
  //   }
  // }

  // 02
  int lCount = 0;

  while (true)
  {
    if (lCount == 1 || lCount == 2)
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
// "Mohamed"
// "Sayed"