#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: pointer to the head
 *
 * Return: Elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
