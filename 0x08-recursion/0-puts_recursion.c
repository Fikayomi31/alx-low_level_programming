#include "main.h"
/**
 * _puts_recursion - print a string followed by new line
 * @s: string to be printed
 * reture 0 or 1
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_Putchar('\n');
}
