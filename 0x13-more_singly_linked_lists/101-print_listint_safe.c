#include "lists.h"
#include <stdio.h>

/**
 * free_listpoint - frees a linked list
 * @head: pointer to a node
 *
 * Return: void
 */

void free_listpoint(listpoint **head)
{
	listpoint *temp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
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
size_t print_listint_safe(const listpoint *head)
{
	listpoint *current, *new, *add;
	size_t count = 0;

	current = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listpoint));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = current;

		add = current;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("[%p] %d\n", (void *)head, head->p);
				free_listpoint(&current);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	free_listpoint(&current);
	return (count);
}
