#include <stdio.h>

/**
 * main - prints the num of arguments passed into it
 * @argc: num of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
	return (0);
}
