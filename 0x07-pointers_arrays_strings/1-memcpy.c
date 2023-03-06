#include "main.h"

/**
 * _memcp - copies memory area
 * @dest: destiantion memory
 * @src: source memory
 * @n: bytes filled
 * Return: pointer to dest
 */

char *_memcpy(char* dest, char* src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return dest;
}
