#include <math.h>
#include <stdio.h>
#include <assert.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{
	int lrgst;		   /* largest prime factor */
	unsigned long num; /* the given number */
	int pfactor;	   /* prime factor */

	num = 61285247143;
	lrgst = 2;

	for (pfactor = 2; num % pfactor == 0;)
		num = num / pfactor;
	/* after the above step, num must be odd */
	assert(num % 2 == 1);

	for (pfactor = 3; pfactor <= sqrt(num); pfactor = pfactor + 2)
	{
		while (num % pfactor == 0)
			num = num / pfactor;
		lrgst = pfactor;
	}
	if (num > 2)
		lrgst = num;
	printf("%d\n", lrgst);
	return (0);
}
