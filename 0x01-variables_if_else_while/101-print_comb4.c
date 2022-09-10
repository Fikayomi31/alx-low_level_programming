#include <stdio.h>

/**
 * main - Entry of  combination of numbers
 *
 * combination of three digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, k;

	for (a = '0'; c <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (a < b && b < k)
				{
					putchar(a);
					putchar(b);
					putchar(k);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
