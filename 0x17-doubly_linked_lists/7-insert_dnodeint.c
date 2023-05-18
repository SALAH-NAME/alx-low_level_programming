#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head
 * @idx: the index
 * @n: n
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current && i < (idx - 1))
	{
		current = current->next;
		i++;
	}
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;

	if ((current->next))
		current->next->prev = new;
	current->next = new;
	return (new);
}
