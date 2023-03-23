#include <iostream>
using namespace std;

int main()
{

  // Friends Array
  string friends[] = {"Ahmed", "Osama", "Ameer"};

  int friendsSize = size(friends);

  for (int i = 0; i < friendsSize; i++)
  {
    cout << "=========\n";
    cout << "= " << friends[i] << " =\n";
    cout << "==================\n";

    int itemSize = size(friends[i]);

    cout << "= ";
    for (int j = 0; j < itemSize; j++)
    {
      cout << friends[i][j];

      if (j != itemSize - 1)
      {
        cout << ", ";
      }
    }
    cout << " =\n";

    cout << "==================\n\n";
  }
}
// Output Needed
// =========
// = Ahmed =
// ==================
// == A, h, m, e, d =
// ==================

// =========
// = Osama =
// ==================
// == O, s, a, m, a =
// ==================

// =========
// = Ameer =
// ==================
// == A, m, e, e, r =
// ==================