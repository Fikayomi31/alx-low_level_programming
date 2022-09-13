#include "main.h"

/**
 *print_alphabet - Alphabet in lowercase
 *
 *Return:0
 *
 */
void print_alphabet(void)
{
	char rg;

	for (rg = 'a'; rg <= 'z'; rg++)
	{
		_putchar(rg);
	}
	_putchar('\n');
}
