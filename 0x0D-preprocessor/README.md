Topyc preprocessor

0. Object-like Macro mandatory
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-preprocessor
File: 0-object_like_macro.h

================================================================


