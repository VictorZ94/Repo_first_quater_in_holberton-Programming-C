#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
	putchar(i / 10 + 48); /* it can itput '0' or 48 both it refer code ascii*/
	putchar(i % 10 + 48);
		if (i != 99)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
