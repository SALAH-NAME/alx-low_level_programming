#include "main.h"

/**
 * _memset - fills memory with a constat byte
 * @s: memory
 * @b: constat
 * @n: bytes filled
 * Return: Pointer to dest
 */

cahr *_memset(char* s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
		*(s + i) = b;

	return s;
}
