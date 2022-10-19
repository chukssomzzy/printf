# 0x11. C - printf

## printf 
A subroutine written in C that takes a format string as argument and a variable argument,
each format is presided by a `%` indicating the beginning of a format string. The format
string is used to determine the type of the current variable argument, end of string is 
determined by a null string terminating character `\0`.

## File Structure  📁
>  The test folder contains the test main.c and main.h 
>  file used to test the _printf function

| File     | Folder    | Description          |
| :--:     |    :--:       |                :--      |
| [_putchar](./_putchar.c) | <Mark>printf</Mark> | Used to print a char to stdout |
| [printf.h](./printf.h)   | <Mark>printf</Mark> | Holds the datastructures and type defination for `_printf` |
| [_printf.c](./_printf.c) | <Mark>printf</Mark> | Print formated string to stdout |

## Function Prototypes

| **Prototype** | **file src** | Description |
| :--           | :--:         | :--:        |
| `void _printf(char *fmt, ...)` | [_printf.c](./_printf.c) | Takes a format string and what to print to stdout |


## Todos ⏳
- [x] Setup template for starting project
- [x] Write prototypes for required functions
- [x] Add `_putchar` function and prototype
- [x] Add `_printf` that would be the control or main function
- [ ] Write function and prototype to format string with format `s`
    Plug 'ashisha/image.vim'
- [ ] Write function and prototype to format char `c`
- [ ] write function and protype to format `%`


