#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry pointprint the result of multiplying two
 * integers supplied as cli arguments.
 * @argc: number of length argument
 * @argv: list of array argument
 * Return: 0 is two arguments were supplied
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		/* atoi use convert int number to int value */
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
