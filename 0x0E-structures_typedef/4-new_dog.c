#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int a, dname, downer;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || name == NULL || owner == NULL)
	{
		free(p_dog);
		return (NULL);
	}
	for (dname = 0; *(name + dname); dname++)
		;
	for (downer = 0; *(owner + downer); downer++)
		;

	p_dog->name = malloc(dname + 1);
	p_dog->owner = malloc(downer + 1);
	if ((p_dog->name) == NULL || (p_dog->owner) == NULL)
	{
		free(p_dog->name);
		free(p_dog->owner);
		free(p_dog);
		return (NULL);
	}
	for (a = 0; a < dname; a++)
		p_dog->name[a] = *(name + a);
	p_dog->name[a] = '\0';

	p_dog->age = age;

	for (a = 0; a < downer; a++)
		p_dog->owner[a] = *(owner + a);
	p_dog->owner[a] = '\0';

	return (p_dog);
}
