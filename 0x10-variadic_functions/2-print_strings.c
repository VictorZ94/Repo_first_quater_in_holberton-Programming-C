#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - check the code for Holberton School students.
 * @separator: first parameter
 * @n: second parameter
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list str;
	char *string;

	va_start(str, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);

		if (string != '\0')
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && string != '\0')
		printf("%s", separator);
	}

va_end(str);
printf("\n");
}
