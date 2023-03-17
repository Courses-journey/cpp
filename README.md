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
