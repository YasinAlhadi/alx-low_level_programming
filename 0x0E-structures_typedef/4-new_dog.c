#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  _strcpy - returns a pointer to a newly allocated space in memory
 *  @s: String
 *
 *  Return: string
 */
char *_strcpy(char *s)
{
	int len, i;
	char *ar;

	if (s == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	ar = (char *) malloc(len * sizeof(char) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ar[i] = s[i];
	}
	ar[i] = '\0';

	return (ar);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *N_dog;
	char *N_dog_name, *N_dog_owner;

	N_dog = malloc(sizeof(dog_t));
	if (N_dog == NULL)
		return (NULL);
	N_dog_name = _strcpy(name);
	if (N_dog_name == NULL)
	{
		free(N_dog);
		return (NULL);
	}
	N_dog_owner = _strcpy(owner);
	if (N_dog_owner == NULL)
	{
		free(N_dog_name);
		free(N_dog);
		return (NULL);
	}
	N_dog->name = N_dog_name;
	N_dog->age = age;
	N_dog->owner = N_dog_owner;

	return (N_dog);
}
