#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input int array
 * @size: size of the array
 * @cmp: ponter to the function to be
 * used to compare val
 * Return: index of the first elem for which the cmp
 * fun doesn't return 0, if no elements mateches,
 * return -1, if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
