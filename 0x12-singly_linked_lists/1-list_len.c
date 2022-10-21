#include"list.h"

/**
 * list_len - find the length of linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}

