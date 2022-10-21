#include "lists.h"
#include <stdio.h.>
/**
 * print-list - printd all the elements of the list-t list
 * @h: pointer to head of list-t list
 * Return: the number of element in a list
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	return (1 + print-list(h->next);
}
