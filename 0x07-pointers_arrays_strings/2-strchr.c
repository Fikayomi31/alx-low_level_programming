#include "main.h"
/**
 * _strchr - function that locate a character in a string
 * @c: the character
 * @s: string of the character
 * Return: first occurrence of c
 * NULL character if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
