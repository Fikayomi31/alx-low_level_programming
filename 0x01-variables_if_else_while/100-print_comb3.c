#include <stdio.h>

/**
 * main - prints all possible differernt combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 48; /* 0 */
	int j = 48; /* 0 */

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar(10);

	return (0);
}
