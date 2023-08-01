#include "lists.h"

/**
 * find_listint_loop - finds looped nodes
 *
 * @head: pointer to linked list
 *
 * Return: pointer to start of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new1;
	listint_t *new2;

	new1 = head;
	new2 = head;
	if (!head)
		return (NULL);

	while (new1 && new2 && new2->next)
	{
		new2 = new2->next->next;
		new1 = new1->next;

		if (new2 == new1)
		{
			new1 = head;
			while (new1 != new2)
			{
				new1 = new1->next;
				new2 = new2->next;
			}
			return (new2);
		}
	}
	return (NULL);
}
