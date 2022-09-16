#include <stdio.h>
#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 *     should be printed
 */

void print_line(int n)
{
	
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');

}
