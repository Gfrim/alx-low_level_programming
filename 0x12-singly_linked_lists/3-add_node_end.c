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
	list_t *newNode, *last;
	size_t c;
	char *temp;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	temp = strdup(str);
	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (c = 0; str[c]; c++)
		;

	newNode->str = temp;
	newNode->len = c;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
	}

	return (*head);
}
