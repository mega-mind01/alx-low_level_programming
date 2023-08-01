#include "lists.h"

/**
 * add_nodeint - adds node to a singly linked list
 *
 * @head: pointer to list
 * @n: data to be inputed
 *
 * Return: pointer to new list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	new->next = *head;
	*head = new;
	return (*head);
}
