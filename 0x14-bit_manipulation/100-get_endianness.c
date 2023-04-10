#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *ch = (char *) &a;

	return ((int) *ch);
}
