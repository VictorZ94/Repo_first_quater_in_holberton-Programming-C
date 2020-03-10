#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* new_dog - fin
* @name: Primer miembro
* @age: Segundo miembro
* @owner: 3th member
*
*/
dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog *dog_t;

	dog_t = malloc(sizeof(struct dog));

	if (dog_t == NULL)
		return (NULL);

	dog_t->name = name;
	dog_t->age = age;
	dog_t->owner = owner;

	return (dog_t);
}
