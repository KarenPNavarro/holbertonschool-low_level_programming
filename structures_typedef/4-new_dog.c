#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;
	int len_name;
	int len_owner;

	len_name = 0;
	len_owner = 0;

	while (name[len_name] != '\0')
		len_name++;
	while (owner[len_owner] != '\0')
		len_owner++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	i = 0;
	while (i < len_name)
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->name[i] = '\0';

	i = 0;
	while (i < len_owner)
	{
		dog->owner[i] = owner[i];
		i++;
	}
	dog->owner[i] = '\0';

	dog->age = age;
	return (dog);
}
