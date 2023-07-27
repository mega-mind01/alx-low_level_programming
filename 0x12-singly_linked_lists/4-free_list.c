#include "lists.h"

/**
 * free_list - free list memory space
 *
 * @head: pointer to first node
 */

void free_list(list_t *head)
{
	list_t *tem;

	while (head)
	{
		tem = head->next;
		free(head->str);
		free(head);
		head = tem;
	}
}
