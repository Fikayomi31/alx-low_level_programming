#include "function_pointers.h"
/**
 * print_name - functions that prints a name
 * @name: name to be printed
 * @f: pointer to function that prints a name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
