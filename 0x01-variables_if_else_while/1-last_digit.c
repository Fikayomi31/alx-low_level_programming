#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints a text according number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, lasted;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasted = n % 10;

	if (lasted > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, lasted);
	}
	else if (lasted == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lasted);
	}
	else if (lasted < 6 && lasted != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", lasted);
	}

	return (0);
}
