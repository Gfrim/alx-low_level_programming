#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds node to the end of the list
 * @head: pointer to next node
 * @str: data
 *
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *ptr;
	size_t c;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		*head = newNode;
	}
	newNode->str = strdup(str);

	for (c = 0; str[c]; c++)
		;

	newNode->len = c;
	newNode->next = NULL;
	ptr = *head;

	if (ptr == NULL)
		*head = newNode;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = newNode;
	}

	return (*head);
}
