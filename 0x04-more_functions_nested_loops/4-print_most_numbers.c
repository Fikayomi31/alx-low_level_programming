#include "main.h"

/**
 * print_most_numbers - print number 0-9 exceot 2,4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
