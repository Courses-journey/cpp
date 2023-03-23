#include <iostream>
using namespace std;

int main()
{
  int nums[] = {10, 20, 30, 40, 20, 50};

  // Method 1
  // 6
  cout << sizeof(nums) / sizeof(nums[0]) << "\n";

  // Method 2
  // 6
  cout << size(nums) << '\n';

  // Method 3
  // 6

  cout << end(nums) - begin(nums);
}