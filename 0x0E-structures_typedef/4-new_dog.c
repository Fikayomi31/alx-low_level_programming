#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of the string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copying of string from src to dest
 * @src: the source string
 * @dest: the destination string
 *
 * Return: dest string copy
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}

/**
 * new_dog - function to create a new dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	dog_t *d;

	/* Getting the lenght of the string */
	len_name = _strlen(name);
	len_owner = _strlen(owner);

	/* Allocate memory to the dog_t d */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	/* Allocate memory to d->name */
	d->name = malloc(sizeof(char) * (len_name + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	/* Allocate memory to d->owner */
	d->owner = malloc(sizeof(char) * (len_owner + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	/* copy of the name of the dog to d->name and  d->owner */
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
