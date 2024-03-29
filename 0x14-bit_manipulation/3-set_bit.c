#include "main.h"

/**
 * set_bit - set value of a bit to 1 an index
 * @n: pointer of unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
