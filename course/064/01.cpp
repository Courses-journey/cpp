#include <iostream>
#include <algorithm>

using namespace std;

int getMin(int left, int right);
int getMin(int list[], int size);

int main()
{
  cout << min(10, -20) << "\n";
  cout << getMin(10, -20) << "\n";
  cout << "==============\n";
  cout << min(10, 20) << "\n";
  cout << getMin(10, 20) << "\n";
  cout << "==============\n";
  cout << min({10, 20, 130, 60, 80, 100, 20}) << "\n";
  int list[] = {10, 20, 130, 60, 80, 100, 20};
  cout << getMin(list, size(list)) << "\n";
}

int getMin(int left, int right)
{
  if (left < right)
  {
    return left;
  }
  else
  {

    return right;
  }
}

int getMin(int list[], int size)
{
  int min = list[0];
  for (int i = 0; i < size; i++)
  {
    if (list[i] < min)
    {
      min = list[i];
    }
  }

  return min;
}