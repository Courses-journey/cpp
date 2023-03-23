#include <iostream>
using namespace std;

int main()
{
  cout << "|*******************|\n";
  cout << "|** List Reverser **|\n";
  cout << "|*******************|\n";

  int iList[5];
  int iListSize = size(iList);
  cout
      << "\nInput 5 numbers:\n";
  for (int i = 0; i < iListSize; i++)
  {
    cin >> iList[i];
  }

  cout << "\n|**** The reversed List ****|\n";
  for (int i = iListSize - 1; i > 0; i--)
  {
    cout << "|**** " << iList[i] << "\n";
  }
  cout << "|**** ***************** ****|\n";
}