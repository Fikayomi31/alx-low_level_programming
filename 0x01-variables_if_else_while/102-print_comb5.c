#include <stdio.h>

/**
 * main - combination of number
 *
 * Description: print all position
 * combination of two-digit number
 *
 * Return 0 (success)
 */
int main(void)
{
	int c, n, k, m;

	for (c = 48; c <= 57; c++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (m = 48; m <= 57; m++)
				{
					if (((k + m) > (c + n) && k >= c) || c < k)
					{
						putchar(c);
						putchar(n);
						putchar(' ');
						putchar(k);
						putchar(m);
					if (c + n + k + m == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
