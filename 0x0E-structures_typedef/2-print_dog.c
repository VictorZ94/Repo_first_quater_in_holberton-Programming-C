#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code for Holberton School students.
 * @d: first member
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	struct dog;

	if ((*d).name == NULL)
		d->name = "(nil)";

	if ((*d).owner == NULL)
		d->owner == "(nil)";

	if (d == NULL)
		return;

	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
