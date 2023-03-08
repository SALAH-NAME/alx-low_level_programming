#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: input num
 * Return: factorail of the number
 */

int factorail(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 1;
	else
		return (n * factorial(n - 1));
}
