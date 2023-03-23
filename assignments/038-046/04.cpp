#include <iostream>
using namespace std;

int main()
{

  // Example 1
  // int vals[]{100, 200, 250, 400, 200};

  // Needed Output
  // "First Number + Last Number Is Larger Than Middle Number"
  // "100 + 200 = 300"
  // "300 > 250"

  // Example 2
  // int vals[]{100, 200, 500, 400, 200};

  // Needed Output
  // "Second Number + Before Last Number Is Larger Than Middle Number"
  // "200 + 400 = 600"
  // "600 > 500"

  // Example 3
  int vals[]{100, 200, 600, 400, 200};

  // Needed Output
  // "Middle Number Is The Largest"
  // "600"

  int middle = vals[2];

  if (vals[0] + vals[4] > middle)
  {
    int sum = vals[0] + vals[4];
    cout << "" << vals[0] << " + " << vals[4] << " = " << sum << "\n";
    cout << sum << " > " << middle;
  }

  else if (vals[1] + vals[3] > middle)
  {
    int sum = vals[1] + vals[3];
    cout << "" << vals[1] << " + " << vals[3] << " = " << sum << "\n";
    cout << sum << " > " << middle;
  }
  else
  {
    cout << "Middle Number Is The Largest\n";
    cout << middle;
  }
}