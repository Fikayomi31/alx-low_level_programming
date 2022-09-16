#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line of _ n long
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		putchar('_');
		line++;
	}
	putchar('\n');
}
