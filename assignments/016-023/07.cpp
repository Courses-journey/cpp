#include <iostream>
using namespace std;

int main()
{
  int a = 1;
  int b = 13;
  int c = 17;
  int d = 70;

  /*
  "E" => ASCII => 69
  "W" => ASCII => 87
  "S" => ASCII => 83
  */

  cout << char(d - a) << char(d + c) << char(d + b);

  return 0;
}

/*// Output Needed
  "EWS"
*/
