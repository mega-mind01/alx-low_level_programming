#include "lists.h"

/**
 * sum_listint - adds all the data of given list
 *
 * @head: pointer to list
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *new;
	int sum;

	sum = 0;
	new = head;

	while (new != NULL)
	{
		sum = sum + new->n;
		new = new->next;
	}
	return (sum);
}
