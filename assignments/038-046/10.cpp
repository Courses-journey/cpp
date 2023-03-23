#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

  int lastIndex = size(nums) - 1;

  // Method 1
  // "First: 10"
  // "Last: 50"
  cout << "First: " << nums[0] << "\n";
  cout << "Last: " << nums[lastIndex] << "\n";

  // Method 2
  // "First: 10"
  // "Last: 50"
  cout << "First: " << nums.at(0) << "\n";
  cout << "Last: " << nums.at(lastIndex) << "\n";

  // Method 3
  // "First: 10"
  // "Last: 50"
  cout << "First: " << nums.front() << "\n";
  cout << "Last: " << nums.back() << "\n";

  return 0;
}