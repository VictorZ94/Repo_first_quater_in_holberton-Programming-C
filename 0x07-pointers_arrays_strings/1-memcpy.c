#include "holberton.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: main value that recieve
 * @src: src value chance
 * @n: particular value
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
