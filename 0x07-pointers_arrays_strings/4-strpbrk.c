#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check againt
 * Return: pointer to bytes in s
 * Null if no bytes id found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + 1);
	}
	return (0);
}
