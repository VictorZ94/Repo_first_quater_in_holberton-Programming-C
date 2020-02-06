#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lalp;

	for (lalp = 'a'; lalp <= 'z'; lalp++)
	{
	putchar(lalp);
	}
	for (lalp = 'A'; lalp <= 'Z'; lalp++)
	{
	putchar(lalp);
	}
	putchar('\n');
return (0);
}
