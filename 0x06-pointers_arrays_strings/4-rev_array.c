#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reserse the content of an array of integers
 * @a: an array of integer
 * @n: the number of element to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int half = n / 2;
	int left, right, i;
	n -= 1;
	for (i = 0; i < half; i++)
	{
		left = a[n - i];
		right = a[i];
		a[i] = left;
		a[n - i] = right;
	}
}
