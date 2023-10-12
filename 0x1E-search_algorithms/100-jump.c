#include "search_algos.h"
#include <math.h>

/**
 * jump_search - sorted array of integer using the jump search
 * @array: the element of the array
 * @size: number of element in array
 * @value: value to search for
 * 
 * Return: return value or NULL if value is not present, -
 */

size_t min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}


int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}

	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
