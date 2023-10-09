#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integer
 * using linear search algorithms
 * @array: first element of the array
 * @size: njmber of element
 * @value: value to be search for
 *
 * Return: first index where value is located or -
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
