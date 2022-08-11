#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: pointer to the head
 *
 * Return: Elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
		printf("List is empty\n");

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%d] (nil)\n", ptr->len);
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		c++;
	}
	return (c);
}
