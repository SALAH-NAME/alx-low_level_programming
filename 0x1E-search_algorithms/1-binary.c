#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @start: Index to start printing from
 * @end: Index to stop printing
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i < end - 1)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 *         or -1 if value is not present in array or if array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size;
	size_t mid;

	if (!array)
		return (-1);

	while (start < end)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
		end = mid;
		else
			return (mid);
	}

	return (-1);
}

