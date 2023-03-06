#include "main.h"

/**
 * _strpbrk - function locates the first
 * occurrence in the string s of any of the bytest in
 * the string accept
 * @s: string where search
 * @accept: string located
 * Retrun: pointer to the byte in s that matches
 * one of the bytes in accept, or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return s;
		}
		s++;
	}

	return ('\0');
}
