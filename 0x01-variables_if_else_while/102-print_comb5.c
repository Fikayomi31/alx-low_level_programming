#include <stdio.h>
/**
 * main - print all possible combination
 * of two two digit number
 *
 * Description: two two digit number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d = 48; d < 58; d++)
				{
					if (((c + d) > (a + b) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(32);
						putchar(c);
						putchar(d);

					/* condition for , and space */
					if (a + b + c + d == 227 && a == 57) /* addtion of abcd */
					{
						break;
					}
					else
					{
						putchar(44); /* ASCII for , */
						putchar(32); /* ASCII for space */
					}
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
