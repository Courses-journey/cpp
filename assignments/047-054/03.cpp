#include <iostream>
using namespace std;

int main()
{
  cout << "|***************************|\n";
  cout << "|**** ODD Range Printer ****|\n";
  cout << "|***************************|\n";

  int inputs[2];
  int rangeStart;
  int rangeEnd;

  cout << "Input range start: ";
  cin >> inputs[0];
  cout << "Input range end: ";
  cin >> inputs[1];

  if (inputs[0] > inputs[1])
  {
    rangeStart = inputs[1];
    rangeEnd = inputs[0];
  }
  else
  {
    rangeStart = inputs[0];
    rangeEnd = inputs[1];
  }

  cout << "\nODD Numbers between " << rangeStart << " and " << rangeEnd << "\n";

  for (int i = rangeStart + 1; i < rangeEnd; i++)
  {
    if (i % 2 == 0)
    {
      continue;
    }

    cout << i << "\n";
  }
}
