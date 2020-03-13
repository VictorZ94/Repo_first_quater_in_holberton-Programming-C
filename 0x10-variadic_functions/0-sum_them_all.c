#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: parameter sum all arguments
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list num;
	int sum = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}

va_end(num);

return (sum);
}
