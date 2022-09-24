#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rot13 - encode a string using rot13
 * @str: string to encode
 * Return: encode string
 */
char *rot13(char *str)
{
	int i, s;
	char index1[(13 * 4) + 1] = "abcdefghijklmnopqrstuvwxyz";
	char index2[(13 * 4) + 1] = "zyxwvutsrqponmlkjihgfedcba";

	strcat(index1, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	strcat(index2, "ZYXWVUTSRQPONMLKJIHGFEDCBA");

	for (i = 0; str[i]; i++)
		for (s = 0; index1[s]; s++)
			if (index1[s] == str[i])
			{
				str[i] = index2[s];
				break;
			}
	return (str);
}
