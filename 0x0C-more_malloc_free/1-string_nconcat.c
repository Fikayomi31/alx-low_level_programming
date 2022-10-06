#include "main.h"

/**
 * string_noconcat - function that concatenates two string
 * @s1: allocated string in memory
 * @s2: source string
 * @n: number of bytes from s2 to be allocated to s1
 * Return: newly created string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i;
	char *str;

	/**
	 * get length of s1
	 * if s1 is NULL treat it as an empty string
	 */
	if (s1 == NULL)
		l1 = 0;
	else
		for (l1 = 0; s1[l1]; l1++)
			continue;
	/**
	 * get length of s2
	 * if s2 is NULL, treat it as an empty string
	 */
	if (s2 == NULL)
		l2 = 0;
	else
		for (l2 = 0; s2[l2]; l2++)
			continue;
	/* if n >= l2, then use l2 as n */
	if (n > l2)
		n = l2;
	/* allocate space for s1, n bytes of s2 and the nullbyte */
	str = (char *)malloc(l1 + n + 1);
	/* was the space allocated? */
	if (str == NULL)
		return (NULL);
	/* add s1 to str */
	for (i = 0; i < l1; i++)
		str[i] = s1[i];
	/**
	 * add n bytes of s2 to str,
	 * starting from where s1 stopped
	 */
	for (i = 0; i < n; i++)
		str[l1 + i] = s2[i];
	/* return str */
	return (str);
}
