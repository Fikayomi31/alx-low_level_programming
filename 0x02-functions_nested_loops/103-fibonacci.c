#include "main.h"
#include <stdio.h>
/**
 * main - fibonacci sequence of 10 terms
 * Description: @4000000 value of fibonacci
 *
 * Return: Always  0 (success)
 */
int main(void)
{
	long int total_sum, sum, first, second;

	total_sum = 0;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
		first = second;
		second = sum;
	}

	printf("%li\n", total_sum);

	return (0);
}
