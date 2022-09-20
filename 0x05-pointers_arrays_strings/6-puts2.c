#include "main.h"
/**
 * puts2 - to prints every other character in a string
 * @s: the string to print
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
