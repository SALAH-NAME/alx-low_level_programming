#include "list.h"

/**
 * list_len - number of elements in a list
 * @h: singly list
 * Return: number f elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	relem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
