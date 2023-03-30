#include <iostream>
#include <algorithm>

using namespace std;

int getMax(int left, int right);
int getMax(int list[], int size);

int main()
{
  cout << max(10, -20) << "\n";
  cout << getMax(10, -20) << "\n";
  cout << "==============\n";
  cout << max(10, 20) << "\n";
  cout << getMax(10, 20) << "\n";
  cout << "==============\n";
  cout << max({10, 20, 130, 60, 80, 100, 20}) << "\n";
  int list[] = {10, 20, 130, 60, 80, 100, 20};
  cout << getMax(list, size(list)) << "\n";
}

int getMax(int left, int right)
{
  if (left > right)
  {
    return left;
  }
  else
  {

    return right;
  }
}

int getMax(int list[], int size)
{
  int max = list[0];
  for (int i = 0; i < size; i++)
  {
    if (list[i] > max)
    {
      max = list[i];
    }
  }

  return max;
}