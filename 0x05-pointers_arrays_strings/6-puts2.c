#include "main.h"

/**
 * puts2 - print every other character of a string starting with the
 * first character followed by new line
 * @str: the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
