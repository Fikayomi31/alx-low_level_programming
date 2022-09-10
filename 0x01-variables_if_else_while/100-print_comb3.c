#include <stdio.h>

/**
 * main - prints all possible differernt combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int start = 48; /* 0 */
	int end = 57; /* 9 */
	int current;

	/* as long as we are not at the last digit */
	while (start < end)
	{
		current = start + 1;
		while (current <= end)
		{
			putchar(start);
			putchar(current);
			if (!(start == end - 1 && current == end))
			{
				putchar(44);
				putchar(32);
			}
			current++;
		}
		start++;
											}
	putchar(10);
	return (0);
}
