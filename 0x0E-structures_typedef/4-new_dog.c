#include "dog.h"
#include <stdlib.h>
/**
* new_dog - fin
* @name: Primer miembro
* @age: Segundo miembro
* @owner: 3th member
* Return: pointer a dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, o, n;

	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	for (n = 0; name[n] != '\0'; n++)
	{
	}
	doggy->name = malloc((n + 1) * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	for (o = 0; owner[o] != '\0'; o++)
	{
	}
	doggy->owner = malloc((o + 1) * sizeof(char));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	for (i = 0; i < n + 1; i++)
		doggy->name[i] = name[i];

	for (j = 0; j < o + 1; j++)
		doggy->owner[j] = owner[j];

	doggy->age = age;

return (doggy);
}
