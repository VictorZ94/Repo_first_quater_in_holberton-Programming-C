### I/O files 

![](https://img.shields.io/badge/Victor_Zuluaga-Holberton_School-red) ![](https://img.shields.io/badge/Structures_data-C%20lenguaje-violet) ![](https://img.shields.io/badge/Shell-Linux-black) ![](https://img.shields.io/badge/bash-Linux-black)


Most Unix file I/O can be performed with six functions:
- open
- close
- read
- write

#### 0. Tread lightly, she is near 

Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: ssize_t read_textfile(const char *filename, size_t letters);
- where letters is the number of letters it should read and print
- returns the actual number of letters it could read and print
- if the file can not be opened or read, return 0
- if filename is NULL return 0
- if write fails or does not write the expected amount of bytes, return 0