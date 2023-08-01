#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of the list
 *
 * @head: pointer to singly linked list
 * @n: data to be inputed
 *
 * Return: pointer to new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;

	return (new);
}
