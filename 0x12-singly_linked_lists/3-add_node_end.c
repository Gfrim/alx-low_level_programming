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
	list_t *newNode, *cn;
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
	cn = *head;

	if (cn == NULL)
		*head = newNode;
	else
	{
		while (cn->next != NULL)
			cn = cn->next;
		cn->next = newNode;
	}

	return (*head);
}
