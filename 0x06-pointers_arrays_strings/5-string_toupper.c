#include "main.h"
#include <ctype.h>
/**
 * string_topper - change all lowercase to uppercase of a string
 * @src: string array
 * Return: string array
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		str[i] = toupper(str[i]);

	reture (str);
)
