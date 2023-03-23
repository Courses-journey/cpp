#include <iostream>
using namespace std;

int main()
{
  string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};

  int namesSize = size(names);

  for (int i = 0; i < namesSize; i++)
  {
    string name = names[i];
    if (size(name) == 5)
    {
      cout << name << "\n";
    }
  }
}
// Output Needed
// "Osama"
// "Ahmed"
// "Hagar"
// "Salwa"