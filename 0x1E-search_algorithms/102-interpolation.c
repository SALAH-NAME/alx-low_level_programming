#include "search_algos.h"

/**
 * print_value - Prints a value in the array
 *
 * @array: The array to be printed
 * @index: Index to print
 */
void print_value(int *array, size_t index)
{
	printf("Value checked array[%lu] = [%d]\n", index, array[index]);
}

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t start, end, pos;
	double tmp;

	if (!array)
		return (-1);


	start = 0;
	end = size - 1;
	while  (end >= start && value >= array[start] && value <= array[end])
	{
		tmp = (end - start) / (array[end] - array[start]);
		pos = start + (tmp * (value - array[start]));

		print_value(array, pos);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			start = pos + 1;
		else
			end = pos - 1;
	}

	if (value == array[start])
		return (start);

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
