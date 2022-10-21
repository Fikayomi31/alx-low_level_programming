#include "lists.h"
#include <stdio.h.>
/**
 * print-list - printd all the elements of the list-t list
 * @h: pointer to head of list-t list
 * Return: the number of element in a list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);

}
