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
	const listint_t *temp;

	if (h == NULL)
		printf("List is Empty");

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
