
/**
 * int_strlen - running a program to return the length of the string
 * @s: a string
 * Reture: the length of the string
 */
int_strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s = s + 1;
	}
	return (length);
}
