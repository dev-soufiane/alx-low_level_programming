#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_size - Calculates the size of a string
 * @s: The input string
 *
 * Return: The size of the string
 */

int str_size(char *s)
{
	int s_size = 0;

	while (s[s_size] != '\0')
		s_size++;

	return (s_size);
}

/**
 * str_cpy - Copies a string from source to destination
 * @dest: Pointer to the destination string
 * @s: Pointer to the source string
 *
 * Return: Pointer to the destination string
 */

char *str_cpy(char *dest, char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		dest[i] = s[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Return: Pointer to the newly created dog_t structure
 * or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (str_size(name)) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (str_size(owner) + 1));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = str_cpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = str_cpy(new_dog->owner, owner);

	return (new_dog);
}
