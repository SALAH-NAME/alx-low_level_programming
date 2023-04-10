#include "main.h"

/**
 * get_bit - revalue a bit at a given index
 * @n: unsigned long int input
 * @index: index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && index < 64)
		return (0);

	for (; i <= 63; n >>= 1, i++)
		if (index == i)
			return (n & 1);
	
	return (-1);
}
