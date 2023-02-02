#include <stdio.h>

/**
 * main - print the largest prime factor of the number
 *
 * Description: prime number of this number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long c;
	long num = 612852475143;

	/* Looping through num of which start on 2 */
	for (c = 2; c < num; c++)
	{
		/* Checking for prime number */
		while (num % c == 0)
		{
			/* checking for largest prime number ie when num is longer divible by c*/
			num = num / c;
		}
	}
	printf("%lu\n", num);

	return (0);


}

