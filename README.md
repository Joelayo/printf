## 0x11. C - printf

This project is for replicate the C standard library printf() function

What you should learn from this project:

- Application of variadic functions
- The complexities of printf function
- How to use git in a team setting
- How to work in a team


Printf function with  the printing features of characters (c), strings (s), % (%), octales (0), hexadecimals ( x and X), string in rot13 and we also did a binary function (b)

We create a mini function printf like that of the C language, we document with the book the secrets of printf.
We use the putchar function of the syscall writer function. and we work with data structures,
with a structure called from the main.h


- All codes will be compiled this way: gcc -Wall -Werror -Wextra -pedantic *.c


file   |   Description
--|--
main.h | A file for call to prototypes and structurs
_putchar.c | A file for call to syscall (writer)  putchar print  in _printf
_printf.c | A file  for call base structur from main.h
print_chars.c | A file for printing a char, string, Ascii value in uppercase, string and nonprintable character ascii values also string in reverse
print_hex.c | A file for print hexa numbers and also an address
man_3_printf | A file man type for printf function
print_rot13.c | A file for print encripted numbers in rot13
print_numbers.c | A file for print integers and decimal
handle_flags.c | A file that finds the flag function, modifier function also clears struct fields and reset buf
print_unsigned_int.c | A file for print an unsigned in in decimal notation, takes an unsigned int and prints it in octal notation, takes an unsigned int and prints it in binary notation.

## Prototype
``` int _printf(const char *format, ...);```

## Usage
* Prints a string to the standard output, according to a given format
* ALl files were created and compiled on Ubuntu 14.04.4 LTS USING  GCC 4.8.4 with the command ```gcc -Wall -Werror -Wextra -Pedantic *.c```
All files were linted for syntax and style with [Betty]
* Returns the number of characteres in the output string on succes, -1 otherwise
* Call it this way: ```_printf("format string", arguments...)```where format string``` can contain conversion specifiers and flags, alog with regular characteres.





### Authors
* **Joel Oduyemi** - @Joelayo.
* **Shittu Sulaimon** - @sadebare.
