#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* new_dog - fin
* @name: Primer miembro
* @age: Segundo miembro
* @owner: 3th member
*
* Return: pointer a dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog *doggy;

	doggy = malloc(sizeof(struct dog));

	if (doggy == NULL)
	{
		return (NULL);
		free(doggy);
	}
	free(doggy);

	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

return (doggy);
}
