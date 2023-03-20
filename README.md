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
  -- \b => Backspace
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

# 016 - Data Types – What Is Data ?

Data Types

- What Is Data ?

- Data Examples In Real Life
  - Integer => 5000, 10, -100
  - String => "Elzero Web School", "Osama Elzero", "100A"
  - Boolean => true, false
  - Float => 18.5, 1900.50
  - Array => ["Osama", "Ahmed", "Sayed", "Mahmoud"]
- Why We Choose Data ?

  - Size
  - Operation

- What Is Operand ?

  - The Part Of an Instruction Representing The Data Manipulated by The Operator

- `sizeof(num)` get size in bytes

```
 cout << sizeof(num)
```

# 017 - Data Types, Sizes And Memory

Data Types

- Ram [R]andom [A]ccess [M]emory

  - Computer Memory Has Locations

- Data Sizes

  - Bit => [Bi]nary Digi[t] => Smallest Unit in Storage Store Only 0 Or 1
  - Byte => A Group of 8 => Store Single Character
  - Kilo Byte => 1024 Byte
  - Mega Byte => 1024 Kilobytes
  - Giga Byte => 1024 Megabytes
  - Tera Byte => 1024 Gigabytes

- Data Types With Size
  - int => 2 Or 4 Bytes => Will Cover Later Why
  - float => 4 Bytes [18.5656565656]
  - double => 8 Bytes [18.5656565656]
    - Number . Fractional Component
  - char => 1 Byte => "A" "x" "9"
  - boolean => 1 Byte => true, false
- Double vs Float

- The Story Behind Creating A Variable

  - Declare A Variable
  - Tell Computer That We Need To Reserve X Bytes Of Memory Depend On Data Type
  - Restrict Type Of Data To The Type We Choosed

- Declare Variable Without Type
- See Memory Address &

- Compiler can deduce the type of data

```
auto num = 10;
```

### Quiz

- Application To Create
  - Create App Ask You To Type Number Of Kilobytes
  - Write 3 Lines Contains
    - [1] The Number Of Kilobytes That User Input
    - [2] The Number Of Bytes
    - [3] The Number Of Bits

#018 - Data Types - Integer

Primitive Data Types

- int => Integer

  - Test Numbers
  - Test Floating Point vs Int
  - Store From `-2147483648` To `2147483647`
  - INT_MIN and INT_MAX Constants
  - Check Limits Header File `limits.h`
  - Test Size Of Data Types Without Variables & Use End Line

- `=` Assignment Operator

```
 #include <limits.h>
..
 cout << INT_MIN << endl;
 cout << INT_MAX << endl;
```

#019 - Data Types - Float And Double

Primitive Data Types

- float => Floating Point Number

  - Test Integer Value In Float Variable
  - We Make Sure Its Float Not Double By Adding Suffix "f" Or "F"
  - Test With Auto
  - 7 Decimal Precision

- double => Double The Float
  - 15 Decimal Precision

```
#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  num = 20.5;
  cout << sizeof(num) << endl; // 4
  cout << num << endl;         // 20

  double dob = 10;
  dob = 20.5;
  cout << sizeof(dob) << endl; // 8
  cout << dob << endl;         // 20.5

  float fl = 10.5f + 9.5f;
  cout << sizeof(fl) << endl; // 4
  cout << fl << endl;         // 20

  auto mix = 10.f;

  return 0;
}
```

#020 - Data Types - Char And ASCII

Primitive Data Types

- char => Character

  - Added Inside Single Quotes => Test With Auto
  - ASCII Value
  - ASCII => American Standard Code for Information Interchange.
  - A Way of Representing Characters As Numbers

- Search For Type Casting
- Create App To Convert ASCII To Character
- Create App To Convert Character To ASCII

- **Note** that `'A'` differ from `"A"`
  - `'A'` is single char
  - `"A"` is list of char

```
#include <iostream>
using namespace std;

int main()
{
  char a = 'A';
  cout << sizeof(a) << "\n"; // 1

  auto c = "C";
  cout << sizeof(c) << "\n"; // 8

  char d = 'Z';
  cout << int(d) << "\n"; // 90

  cout << int('%') << "\n"; // 37

  // cout << int("Z") << "\n"; // Error

  cout << char(81) << "\n"; // Q

  return 0;
}
```

#021 - Data Types - Bool And Void

Primitive Data Types

- bool => Boolean

  - Only Two Possible Values [true, false]
  - Value Is Case Sensitive
  - When We Use Boolean Values
    - Anything Has On/Off, Yes/No, True/False
  - Test Boolean In Math
  - Test > And <
  - Test Data [100, 0, -100, ""]

- void => Valueless
  - Without Value

# 022 - Data Types – Modifiers And Type Aliases

Primitive Data Types

- Modifiers

  - Modify The Length Of Data => See Limits

  - ٍSigned [int, char]

    - Store Positive, Negative Integers And 0
    - int Is Signed By Default

  - Unsigned [int, char]

    - Store Positive Only

  - Short [int]
    - Can Be short Instead of short int
  - Long [int, double]
    - Store Maximum Value
    - Can Be long Instead of long int

- Type Alias
  - using identifier = type;
  - typedef unsigned long UL;

```
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  int age = 300;
  cout << sizeof(age) << "\n"; // 4 Bytes

  short int new_age = 300;
  cout << sizeof(new_age) << "\n"; // 2 Bytes

  short last_age = 300;
  cout << sizeof(last_age) << "\n"; // 2 Bytes

  cout << sizeof(short int) << "\n";
  cout << sizeof(short) << "\n";
  cout << sizeof(long int) << "\n";
  cout << sizeof(long) << "\n";
  cout << sizeof(long long int) << "\n";
  cout << sizeof(long long) << "\n";

  int num_one = 100;
  cout << num_one << "\n";

  signed int num_two = 0;
  cout << num_two << "\n";

  unsigned int num_three = 100;
  cout << num_three << "\n";

  // unsigned int num_four = -10; // Problem
  // cout << num_four << "\n";

  // using bignum = long long int;

  typedef long long int bignum;

  bignum my_number = 100010001000;
  cout << my_number << "\n";

  return 0;
}
```

# 023 - Data Types - Type Conversion

Data Types

- Type Conversion

  - Convert Data of One Type To Another

- Implicit Conversion

  - Conversion Is Done Automatically By The Compiler

- Explicit Conversion AKA Type Casting

  - Conversion Is Done By The Programmer

- Data Loss

  - When Larger Type Is Converted To Smaller Type

- Cast `c` to be `int`
  - `int(c)`
    - function like casting
  - `(int)c`
    - casting
