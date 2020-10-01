![Holberton school logo](https://secure.meetupstatic.com/photos/event/b/c/5/6/highres_475548214.jpeg)
# C - printf


This repository contains the files for Holberton's **How create a printf**. It can be compiled using GCC and will produce an expected output given certain parameters.

# Introduction

Before you can create a printf, you must first consider that it makes the function printf. The printf is language function to do formatted printing

# Pre-requisites

### Requirements:
-   `Allowed editors:`  (`vi, vim, emacs`)
-   `All your files will be compiled on Ubuntu 14.04 LTS`
- `Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic`
- `All your files should end with a new line`
- `A README.md file, at the root of the folder of the project is mandatory`
- `Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl`
- `No more than 5 functions per file`
- `All your header files should be include guarded`
- `Note that we will not provide the _putchar function for this project`
`Use system calls only when you need to (why?)`
#### Data structure for this project:
```

The C Standard Library is a set of C built-in functions, constants and header files like ```<stdio.h>```, ```<stdlib.h>```, ```<math.h>```, etc. This library will work as a reference manual for C programmers.

For this program I have used:


- #include <stdlib.h>

- #include <string.h>

- #include <stdio.h>

- #include <stdarg.h>

- #include <unistd.h>






GCC command to compile:
```
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c

```


### Main.c Task 0: template to test output:
```
cat main.c
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
```

Contact Info:
Git: <a href="https://github.com/matcls" target="_blank">Manuel Torres</a>

Git: <a href="https://github.com/danielj32" target="_blank">Juan Daniel Lopez</a>

