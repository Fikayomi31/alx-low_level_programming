#include "main.h"

/**
 * print_rev - function that print string in reverse
 * @s: the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	/* to get string */
	for (i = 0; s[i]; i++)
		continue;
	/* to reverse the string */
	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
