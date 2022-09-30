#include <stdio.h>
/**
 * main - Entry point to print the number
 * of arguments passed into it
 * @argc: length of argument
 * @argv: array of strings of the program arugument
 *
 * Return: (0)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		/* printing all the argument */
		printf("%s\n", argv[i]);
	}
	return (0);
}
