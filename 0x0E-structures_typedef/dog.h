#ifndef DOGS
#define DOGS
/**
*struct dog - Descripción breve
* @name: Primer miembro
* @age: Segundo miembro
* @owner: 3th member
*
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* DOG */
