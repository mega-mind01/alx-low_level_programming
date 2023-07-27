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
	size_t s = 0;

	if (h->str == NULL)
		printf("[0](nil)\n");
	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
