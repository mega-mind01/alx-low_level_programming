#include "lists.h"

/**
 * print_list - prints the data of a linked list
 *
 * @h: the node
 *
 * Return: count of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
