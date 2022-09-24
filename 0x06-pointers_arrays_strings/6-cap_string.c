#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	/* create a string that contains all separators */
	char *seps = ",;.!?\"(){} \t\n";
	int i, s;

	/* loop iterate through each character in the string */
	for (i = 0; str[i]; i++)
	{
		/* char to uppercase then move to next */
		if (i == 0)
		{
			str[i] = toupper(str[i]);
			continue;
		}

		for (s = 0; seps[s]; s++)
		{
			if (str[i - 1] == seps[s])
			{
				str[i] = toupper(str[i]);
				break;
			}
		}
	}
	return (str);
}
