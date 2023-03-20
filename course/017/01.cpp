#include <iostream>
using namespace std;

int main()
{
  cout << "---------------------------"
       << "\n";
  cout << "|-------------------------|"
       << "\n";
  cout << "|-- Kilobytes Convertor --|"
       << "\n";
  cout << "|-------------------------|"
       << "\n";
  cout << "---------------------------"
       << "\n";

  int kiloCount;
  cout << "Enter num of Kilobytes: ";
  cin >> kiloCount;

  int byteCount = kiloCount * 1024;
  int bitCount = byteCount * 8;

  cout << "[1] The Number Of Kilobytes: "
       << kiloCount << "\n";
  cout << "[2] The Number Of Bytes: "
       << byteCount << "\n";
  cout << "[3] The Number Of Bits: "
       << bitCount << "\n";

  return 0;
}