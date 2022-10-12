#include "function_pointers.h"
/**
 * array_iterator - execution of function as a parameter on 
 * each element of an array
 * @array: The array
 * @size: The size of array
 * @action: function pointer
 * Return: 0
 */
void array_iterator(int *array, size-t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
