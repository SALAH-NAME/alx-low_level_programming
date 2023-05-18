#include "lists.h"

/**
 * free_dlistint - free all memory
 * @head: the head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
