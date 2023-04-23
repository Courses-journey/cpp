#include <iostream>
#include <vector>

int main()
{

  std::vector<int> vec;

  for (int i = 0; i < vec.size(); i++)
  {
    std::cout << vec[i] << "\n"; // don't do that use .at(index)
  }
}