#include "main.h"
/**
 * _memcpy - function that copy memory area
 * @n: bytes to be copy
 * @src: memory area to copy from
 * @dest: destination memory
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
