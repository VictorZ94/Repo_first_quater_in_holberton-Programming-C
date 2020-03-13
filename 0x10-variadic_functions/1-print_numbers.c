#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *  print_numbers - check the code for Holberton School students.
 * @separator: parameter
 * @n: parameter second
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list arguments;
	int num = 0;

	va_start(arguments, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		num = va_arg(arguments, int);
		printf("%d", num);

		if (i < (n - 1))
			printf("%s", separator);
	}

va_end(arguments);
printf("\n");
}
