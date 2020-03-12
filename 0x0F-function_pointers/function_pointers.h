#ifndef POINTER_FUNCTION_H
#define POINTER_FUNCTION_H

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));



#endif /* POINTER_FUNCTION_H */
