#include <iostream>
using namespace std;

int main()
{

  // Example 1
  // int check = 25;
  // int nums[]{40, 20, 30, 70, 100};

  // Ouput
  // "{40} + {70} = 110"

  // Example 2
  // int check = 25;
  // int nums[]{20, 35, 30, 70, 100};

  // Ouput
  // "{35} + {70} = 105"

  // Example 2
  int check = 25;
  int nums[]{20, 25, 30, 70, 100};

  // Ouput
  // "{30} + {70} = 100"

  if (check < nums[0])
    cout << "{" << nums[0] << "} + {" << nums[3] << "} = " << nums[0] + nums[3];

  else if (check < nums[1])
    cout << "{" << nums[1] << "} + {" << nums[3] << "} = " << nums[1] + nums[3];

  else if (check < nums[2])
    cout << "{" << nums[2] << "} + {" << nums[3] << "} = " << nums[2] + nums[3];

  else if (check < nums[3])
    cout << "{" << nums[3] << "} + {" << nums[3] << "} = " << nums[3] + nums[3];

  else if (check < nums[4])
    cout << "{" << nums[4] << "} + {" << nums[3] << "} = " << nums[4] + nums[3];
}