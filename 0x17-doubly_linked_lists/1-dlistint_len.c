#include "lists.h"

/**
 * dlistint_len - number of elements in a linked list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elm = 0;

	while (h)
	{
		elm++;
		h = h->next;
	}
	return (elm);
}
