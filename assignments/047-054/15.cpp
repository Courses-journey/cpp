#include <iostream>
using namespace std;

int main()
{

  int help_num = 4;
  int nums[] = {2, 4, 5, 6, 10};

  int numsSize = size(nums);

  while (help_num >= help_num - help_num)
  {
    int firstNumIndex = numsSize - help_num - help_num / help_num;
    cout << "\""
         << nums[firstNumIndex]
         << " + "
         << nums[help_num]
         << " = "
         << nums[firstNumIndex] + nums[help_num]
         << "\"\n";

    help_num--;
  }
}

// Output Needed
// "2 + 10 = 12"
// "4 + 6 = 10"
// "5 + 5 = 10"
// "6 + 4 = 10"
// "10 + 2 = 12"