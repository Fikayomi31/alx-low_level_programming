#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *  * followed by a new line
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	long int a;
	long int first, second;
	int count;

	a = 0;
	first = 0;
	second = 1;
	count = 0;

	while (count < 49)
	{
		a = first + second;
		printf("%li, ", a);
		first = second;
		second = a;
		count++;
	}
	a = first + second;
	printf("%li\n", a);

	return (0);
}
