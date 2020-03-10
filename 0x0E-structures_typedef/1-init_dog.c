#include "dog.h"
/**
 * init_dog - Descripción breve
 * struct dog - structure
 * @name: Primer miembro
 * @age: Segundo miembro
 * @owner: 3th member
 * @d: struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	(*d).owner = owner;
	}
}
