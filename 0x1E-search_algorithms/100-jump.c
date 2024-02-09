#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @start: Index to start printing from
 * @end: Index to stop printing
 * @size: Number of elements in array
 */
void print_array(int *array, size_t start, size_t end, size_t size)
{
	size_t i;

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
}

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end, jump;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	for (start = 0, end = jump; end < size; start = end, end += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[end] >= value)
			break;
	}

	print_array(array, start, end, size);

	for (i = start; i <= end && i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
