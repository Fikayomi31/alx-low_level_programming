#include "main.h"
/**
 * _strstr - function tha locates a substring
 * @needle: substing to be located
 * @haystack: dtring to be searched
 * Return: to beginning of located substring
 * Null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return (0);
}
