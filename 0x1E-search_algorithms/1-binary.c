#include "search_algos.h"

/**
 * binary_search - search array using binary search algorithms
 * @array: the array
 * @size: size of element in the array
 * @value: value to search for
 *
 * Return: index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int right, left, mid;
	int i;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
			/**
			 * print new line if i == last digit
			 * or , if it is not equal to last digit
			 */
			printf("%d%s", array[i], i == right ? "\n" : ", ");
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
