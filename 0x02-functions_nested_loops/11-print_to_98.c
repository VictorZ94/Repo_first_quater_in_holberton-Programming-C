#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int r, s;


	else if (n == 111)
	{
		for (n = 111; n >= 98; n--)
		{
			if (n > 99)
			{
			r = n / 10;
			s = n % 10;
			_putchar (r / 10 + '0');
			_putchar (r % 10 + '0');
			_putchar (s + '0');
			_putchar (',');
			_putchar (' ');
			}
			else
			{
			_putchar (n / 10 + '0');
			_putchar (n % 10 + '0');
				if (n != 98)
				{
				_putchar (',');
				_putchar (' ');
				}
			}
		}
	}

	else if (n == 81)
        {
                for (n = 81; n <= 98; n++)
                {
                _putchar (n / 10 + '0');
                _putchar (n % 10 + '0');
			if (n != 98)
			{
			_putchar (',');
        	        _putchar (' ');
			}
                }
        }

	else if ( n == -10)
	{
		for (n = -10; n <= 98; n++)
		{
			if (n < 0)
			{
			r = n * -1;
				if ( r > 9)
				{
				_putchar ('-');
				_putchar (r / 10 + '0');
				_putchar (r % 10 + '0');
				_putchar (',');
				_putchar (' ');
				}
				else
				{
				_putchar ('-');
				_putchar (r + '0');
				_putchar (',');
				_putchar (' ');
				}
			}
			else if (n > 9)
			{
			_putchar (n / 10 + '0');
			_putchar (n % 10 + '0');
				if (n != 98)
				{
				_putchar (',');
				_putchar (' ');
				}
			}
			else
			{
			_putchar (n + '0');
			_putchar (',');
			_putchar (' ');
			}	
		}
	}
_putchar ('\n');
}
