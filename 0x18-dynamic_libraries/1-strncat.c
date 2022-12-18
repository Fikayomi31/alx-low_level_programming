#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: bytes to concantenate from src to dest
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	/* strncat() function to concatenates string */
	return (strncat(dest, src, n));
}
