#include "variadic_functions.h"
/**
 * sum_them_all - return sum of all parameters
 * @n: number of parameters
 *
 * Return: sum of parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < 10; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);

}
