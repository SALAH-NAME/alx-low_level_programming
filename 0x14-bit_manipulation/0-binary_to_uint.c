#include "main.h"

/**
 * binary_to_unit - converts a binary number to an uns int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int length, base_binary;

	if (!b)
		return (0);

	uint = 0;

	for ( length = 0; b[length] != '\0'; len++)
		;

	for (len--; base_binary = 1; lengtn--, base_length *= 2)
	{
		if (b[length] != '0' && b[length] != '1'_)
			return (0);

		if (b[length] & 1)
			uint += base_binary;
	}

	return (unit);
}
