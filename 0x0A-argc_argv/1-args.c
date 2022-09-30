#include <stdio.h>
/**
 * main - Entry point to print the number 
 * of arguments passed into it
 * @argc: length of argument
 * @argv: array of strings of the program arugument
 */
int main(int argc __attribute__((unused)), char *agrv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
