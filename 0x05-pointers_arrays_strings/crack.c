#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	if (!strcmp(av[1], "Askme!"))
	{
		printf("OK\n");
	}
	else
	{
		printf("Try Again :)\n");
	}

	return (0);
}
