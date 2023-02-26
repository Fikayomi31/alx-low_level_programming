#include "main.h"

/**
 * print_number - function that prints an integer digit
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -nn
	}
	else
	{
		num = n;
	}

	if (n < num)
	{
		_putchar('0' + num)
	}
	else
	{
		((num / 10) > 0)
		print_number(num / 10);

		_putchar((num % 10) + '0');
	}
}
