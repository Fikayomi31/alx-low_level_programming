#include "main.h"
/**
 * _pow_recursion - function that return the value of x
 * raised to the power of y
 * @x: the number to be raised.
 * @y: the power
 *
 * Return: value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);
	if (y == 1)
		return (x);

	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
