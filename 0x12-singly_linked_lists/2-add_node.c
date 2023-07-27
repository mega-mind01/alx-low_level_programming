#include "lists,h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node to start of linked list
 *
 * @head: double pointer to first node
 * @str:new node to be added
 *
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int l;

	while (str[l])
		l++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = l;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
