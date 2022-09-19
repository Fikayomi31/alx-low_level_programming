#include "main.h"
#include <stdio.h>
/**
 * swap_int - swapping the value of two integer
 * @a: first integer
 * @b: second integer
 * Return: failure
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
