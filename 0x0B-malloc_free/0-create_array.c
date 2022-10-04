#include "main.h"
#include <stdlib.h>
/**
 * create_array - that creat an array of chars and
 * initializes it with a specific char.
 * @size: size of the array
 * @c: the specific char
 * Return: 0 NULL or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	/* using logical not for NUL return */
	if (!size)
		return (NULL);

	/* using malloc to create memory allocation */
	str = (char *)malloc(size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
