#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: length of arguments
 * @argv: array of arrays
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i;

	/* receives all argument */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
