#include "lists.h"

/**
 * sum_dlistint -  the sum of all the data (n)
 * @head: the head
 * Return: the sum of all n's
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
