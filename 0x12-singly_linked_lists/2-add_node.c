#include "lists.h"
#include <string.h>

/**
 * add_node - Adds node at the beginning of a list
 * @head: pointer to first node
 * @str: new data to be inserted into new node
 *
 * Return: Address (Success)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(struct list_s));
	int count;

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->str = strdup(str);

	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
		;

	ptr->len = count;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
