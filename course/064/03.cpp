#include <iostream>
#include <algorithm>

using namespace std;

int getCount(int list[], int size, int numToCount);

int main()
{
  int list[] = {1, 1, 2, 3, 4, 5, 5, 5, 6, 8, 9, 1, 1};

  cout << getCount(list, size(list), 5);
}

int getCount(int list[], int size, int numToCount)
{
  int counter = 0;
  for (int i = 0; i < size; i++)
  {
    if (list[i] == numToCount)
    {
      counter++;
    }
  }

  return counter;
}