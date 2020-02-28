#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - function name
 * @dest: parameter that receive the function
 * @src: - second parameter that receive the function
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{

	int j;
	int i = 0;

	while (dest[i] != '\0')
	{
	i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
	dest[i] = src[j];
	i++;
	}
return (dest);
}
