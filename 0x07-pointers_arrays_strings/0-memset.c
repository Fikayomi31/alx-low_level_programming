#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: memory area tobe fiiled
 * @b: char to copy
 * @n: first number of time to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
