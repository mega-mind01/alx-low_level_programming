#include "lists.h"

/**
 * print_listint - prints the int elements in the given node
 *
 * @h: address of value in the node
 *
 * Return: the count of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
