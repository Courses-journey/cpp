<div align="center">
<img src="https://elzero.org/wp-content/themes/elzero/imgs/logo.png" alt='source' width="200"/>

# Elzero Web School

### [C++ Course](https://www.youtube.com/playlist?list=PLDoPjvoNmBAwy-rS6WKudwVeb_x63EzgS)

</div>

# 003 - Install Visual Studio Code, Debugger And Compiler

```
#include <iostream>

int main()
{
  std::cout << "Iam Here";
  return 0;
}
```

```
pacman -Syu
pacman -Su
pacman -Ss gcc
pacman -S mingw-w64-x86_64-gcc
pacman -Ss gdb
pacman -S mingw-w64-x86_64-gdb

gcc --version
g++ --version
gdb --version

```

# 008 - Comments And Use Cases

```
// Include Iostream
#include <iostream>

/* Elzero */

// This Is Main Function
int main()
{
  std::cout << "Line 1\n"; // Comment
  std::cout /* <= This Is Character Out */ << "Line 2\n";
  std::cout << "Line 3\n";
  // Comment
  std::cout << "std::cout";
  return 0;
} // Comment

// Search Google For "Iostream"

// ========== Elzero ========== //

//////////// Elzero ////////////

/*
  ==================
    Elzero
  ==================
*/

/*==================
    Elzero
  ==================*/
```

# 009 - Variables Basic Knowledge

Variables Basic Knowledge

- Data Container With Unique Name "Identifier"
- Declare With Value + Change Later

Syntax

- [Data_Type] [Variable_Name] = [Value]

```
#include <iostream>
using namespace std;

int main()
{
  int price = 200;
  cout << "Price Is: " << price;
  cout << "\nPrice After Adding 15 Is: " << price + 15;
  cout << "\nPrice After Adding 50 Is: " << price + 50;
  price = 150;
  cout << "\nThe New Price Is: " << price;
  return 0;
}
```

# 010 - Variables Naming Rules And Best Practices

- Naming Rules
  -- Must Be Unique
  -- Case Sensitive
  -- Cannot Start With Numbers
  -- Nums Or Letters Or Underscore
  -- No White Space Or Special Characters
  -- Reserved Keywords "Class, Public"

- Best Practices
  -- Related Names
  -- Writing Style

```
#include <iostream>
using namespace std;

int main()
{
  int price = 100; // Declare A New Variable
  price = 200;     // Update The Value
  int Price = 400;
  cout << price;
  cout << "\n===============\n";
  int n1um1111 = 10;
  cout << n1um1111;
  cout << "\n===============\n";
  int _num_bers_ = 100;
  cout << _num_bers_;
  cout << "\n===============\n";
  int publics = 1000;
  cout << publics;
  cout << "\n===============\n";
  int OSAMA = 500; // Bad Style
  cout << OSAMA;
  cout << "\n===============\n";
  int x = 1000;
  cout << x;
  return 0;
}
```

# 011 - Variables Advanced Knowledge

- Variables Advanced Knowledge
  -- Declare Variable Without Value + Change Later
  -- Declare Multiple Variables Without Value + Change Later
  -- Declare Multiple Variables With Same Value

```
#include <iostream>
using namespace std;

int main()
{
  int a;
  a = 100;
  cout << a; // 100

  cout << "\n================\n";

  int b, c, d;
  b = 10, c = 20, d = 30;
  cout << b + c + d; // 60 => [10 + 20 + 30]

  cout << "\n================\n";

  int e, f = 40, g;
  e = 20, g = 60;
  cout << e + f + g; // 120

  cout << "\n================\n";

  int h, i, j;
  // h = 10, i = 10, j = 10;
  h = i = j = 10;
  cout << h + i + j; // 30

  return 0;
}
```

# 012 - Variables Scope

- Variables Scope
  -- Global Variable
  -- Local Variable

```
#include <iostream>
using namespace std;

int a = 100; // Global Variable

int second()
{
  int b = 200; // Local Variable
  cout << a << " Coming From Second Function\n";
  cout << b << " Coming From Second Function\n";
  return 0;
}

int main()
{
  cout << a << " Coming From Main Function\n";
  // cout << b << " Coming From Main Function\n"; // Undefined
  second();
  return 0;
}
```

# 013 - Variables – Constant Variable

- Constant Variable
  -- Read Only Value
  -- Can't Declare Without Value

```
#include <iostream>
using namespace std;
#define DAYS 9

int main()
{
  const int day = 8;
  // int salary = 15000;
  const int num = 100;
  // num = 200;
  cout << num;
  // const int x;
  cout << "\n" << DAYS;
  return 0;
}
```

# 014 - Calculate Your Age Application

```
#include <iostream>
using namespace std;

int main()
{
  cout << "====================================\n";
  cout << "== Calculate Your Age Application ==\n";
  cout << "====================================\n";

  int age;
  cin >> age;

  int age_in_days = age * 365;
  int age_in_hours = age_in_days * 24;

  cout << "Age In Days Is: " << age_in_days << " Days\n";
  cout << "Age In Hours Is: " << age_in_hours << " Hours\n";

  return 0;
}
```

# 015 - Escape Sequences Characters

Escape Sequences Characters

- Special Non Printing Characters
- Control Printing Behaviour
- Start With Back Slash "\"
- Can Be Inserted In Any Position
- Chars:
  -- \n
  -- \\
  -- \"
  -- \'
  -- \t => Tab Equal 8 Spaces
  -- \b
  -- \a => Alert => Play Beep During Execution
  -- \r => Carriage Return

```
#include <iostream>
using namespace std;

int main()
{
  cout << "Line 1\n";
  cout << "Line 2\n";
  cout << "Line 3\\\n";
  cout << "Line \"4\"\n";
  cout << "Line 5\n";
  cout << "Line\t6\n";
  cout << "Line\b7\n"; // Lin7
  cout << "Line 8\a\n";
  cout << "Osama\rLzero\n"; // Lzero
  cout << "Line"; // This Is Line \\
  return 0;
}
```
