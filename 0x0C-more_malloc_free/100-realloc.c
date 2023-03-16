#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memoryblock
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of ollocated space op ptr
 * @new_size: new size of the new memory
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
