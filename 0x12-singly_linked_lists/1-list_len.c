#include "list.h"

/**
 * list_len - Returns number of elements
 * @h: head of a linked list
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	const list_t *ptr = NULL;

	ptr = head;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (c);
}
