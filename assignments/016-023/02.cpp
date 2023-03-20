#include <iostream>
using namespace std;

int main()
{

  double salary = 5000.98;
  // 8 Bytes
  // 64 Bits

  int bytes = sizeof(salary);
  cout << bytes << " Bytes\n";
  cout << bytes * 8 << " Bits\n";

  return 0;
}