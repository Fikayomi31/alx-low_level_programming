#include <stdio.h>

/**
 * main -print all single digit number of base
 * 10 starting from 0,fokkowed by a new line
 * Return: Alway 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
