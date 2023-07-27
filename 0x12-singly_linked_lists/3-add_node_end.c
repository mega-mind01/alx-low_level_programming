#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node to the end of linked list
 *
 * @head: pointer to first node
 * @str: new node
 *
 * Return: pointer to new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tem = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tem->next)
		tem = tem->next;
	tem->next = new_node;

	return (new_node);
}
