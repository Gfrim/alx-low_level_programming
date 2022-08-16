#include "lists.h"
#include <stdio.h>

/**
 * free_listp - frees a linked list
 * @head: head of list
 *
 * Return: void
 */

void free_listp(listpoint_t **head)
{
	listpoint_t *new;
	listpoint_t *curr_node;

	if (head != NULL)
	{
		curr_node = *head;
		while ((new = curr_node) != NULL)
		{
			curr_node = curr_node->next;
			free(new);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - Print a `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	listpoint_t *headptr, *new, *old;
	size_t count;

	headptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listpoint_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = headptr;
		headptr = new;
		old = headptr;

		while (old->next != NULL)
		{
			old = old->next;
			if (head == old->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&headptr);
				return (count);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	free_listp(&headptr);
	return (count);
}
