#include "main.h"
/**
 * strspn - function that get the length of a prefix substring
 * @s: string to be search
 * @accept: the prefix to be measured
 * Return: byes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
