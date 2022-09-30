#include <stdio.h>
/**
 * main - Entry point to print the number
 * of arguments passed into it
 * @argc: length of argument
 * @argv: array of arugument
 *
 * Return: (0)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int args = argc - 1;

	/* printing all the argument */
	printf("%d\n", args);
	return (0);
}
