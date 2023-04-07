#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - The index at which key or value pair should
 * be stored in array of hash table
 * @key: key to get the index
 * @size: Size of the array of hash table
 * Description: Uses the djb2 algorithm function
 * Return: The index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
