#include "lists.h"

/**
 * listint_loop - counts special node
 *
 * @head: pointer to list
 *
 * Return: 0 if no loops
 */

size_t listint_loop(const listint_t *head)
{
	const listint_t *new1;
	const listint_t *new2;
	size_t count;

	if (head == NULL || head->next == NULL)
		return (0);
	new1 = head->next;
	new2 = (head->next)->next;

	while (new2)
	{
		if (new1 == new2)
		{
			new1 = head;
			count = 1;
			while (new1 != new2)
			{
				count++;
				new1 = new1->next;
				new2 = new2->next;
			}
			new1 = new1->next;
			while (new1 != new2)
			{
				count++;
				new1 = new1->next;
			}
			return (count);
		}
		new1 = new1->next;
		new2 = (new2->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints list in a safe version
 *
 * @head: pointer to linked list
 *
 * Return: count of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	size_t idx;

	count = listint_loop(head);
	idx = 0;

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < count; idx++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
	}
	return (count);
}
