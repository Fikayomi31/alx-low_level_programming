#include "main.h"

/**
 * _strcmp - function that compares two string
 * @s1: first string
 * @s2: second string
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1 += 1;
		s2 += 1;
	}
	return (0);
}
