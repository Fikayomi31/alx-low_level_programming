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
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return(x * _power_recursion(x, y - 1));
}
