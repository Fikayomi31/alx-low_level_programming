#include "function_pointers.h"
/**
 * int_index - function that search for an integer
 * @array: array of integer
 * @size: size of the array
 * @cmp: function to compare item in the array
 * Return: index if found, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
