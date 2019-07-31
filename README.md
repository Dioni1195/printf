# int _printf(const char *format, ...)
---
## Dionisio Arango
## Jaime Velez Rojas
Project in C about the development of printf command. This project is about the develop of own version of the function `printf`. Our version is similar, but it is a simpler version.

###  Download
Download from the repository [here](https://github.com/Dioni1195/printf), or use the git command to clone it:
```sh
$ git clone https://github.com/Dioni1195/printf.git
```
```sh
$ cd _printf
```

### Run the code
All files are written in C language.
The filesm must be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic, as following:
```sh
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
### Description of the code
```sh
$ int _printf(const char *format, ...)
```
The command `_printf.c` receive two parameters a const char pointer `*format` and the aguments `...`, the function will return  the count of chars printed and print the string inside the format and the additional arguments.

##### example

printf("hello %s", "world")

output:

"hello world"

### Notes
In this repository there are this files
 - _printf.c - main function that receive the parameters and give them to file cases
 - _str_print.c - print a char pointer
 - _str_len.c - count the length of a string
 - _putchar.c - print a character
 - _cases.c - evaluate the format and choose the correct case
 - _cases_r.c - function that receive the case and reverse a string
 - _cases_R.c - function that receive the case and translate a string to ROT13
 - _print_int.c - function that print an integer
 - holberton.h - header file that contains all the function prototypes
 - man_3_printf - manual of the command
 - README.md - documentation of the project

You have to create your `main.c` to test every case and include the header file `#include "holberton.h"`

