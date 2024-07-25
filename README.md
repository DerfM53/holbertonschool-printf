# _printf

`_printf` is a custom implementation of the `printf` function in C, which allows formatted text output to the standard output.
It supports several format specifiers.

## Table of Contents
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Contributors](#contributors)
- [License](#license)

## Features

The `_printf` function supports the following format specifiers:

- `%%`      : Prints the character `%`.
- `%d` `%i` : Prints an integer.
- `%s`      : Prints a string.
- `%c`      : Prints a character.
- `%o`      : Prints an octal number.
- `%x` `%X` : Prints a hexadecimal number (lowercase or uppercase).
- `%u`      : Prints an unsigned integer.
- `%p`      : Prints a pointer address.

## Installation

To use `_printf`, you first need to compile the source file.

1. Clone the repository:

    ```bash
    git clone https://github.com/your-username/holbertonschool-printf.git
    ```

2. Navigate to the project directory:

    ```bash
    cd holbertonschool-printf/
    ```

3. Compile the source file:

    ```bash
    gcc -o _printf main.c _printf.c
    ```

## Usage

Include the header file `main.h` in your code to use the `_printf` function.

## Examples

```c
#include "main.h"

int main (void) {
    int a = 2, b = 3;
    _printf("The result of %d + %d is %d\n", a, b, a + b);
    return 0;
}
Here are some examples of using the _printf function:

Printing an integer:
_printf("Number: %d\n", 42);

Printing a string:
_printf("Text: %s\n", "Hello");

Printing a character:
_printf("Character: %c\n", 'A');

```

## Contributors
Stef R,
Fred M.

### License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.
