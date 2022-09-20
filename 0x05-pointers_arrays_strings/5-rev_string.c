#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int len;
	int i;
	int half;
	char temp;

	/* get the length of the string */
	for (len = 0; s[len] != '\0'; len++);

	i = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
