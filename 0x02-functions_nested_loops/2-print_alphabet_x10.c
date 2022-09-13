#include "main.h"
/**
 * main - Entry point
 *
 * Description: 10 times the alphabet in lowercase
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void);
{
	char s;
	int a = 0;

	while (a < 10)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}

		_putchar('\n');
		s++;
	}
}
