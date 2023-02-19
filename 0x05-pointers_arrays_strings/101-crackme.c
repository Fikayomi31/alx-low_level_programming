#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (!strcmp(av[1], "Tadarats"))
	{
		printf("Tada! Congrats\n");
	}
	else
	{
		printf("Try Again\n");
	}
	return (0);
}
