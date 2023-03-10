#include <stdio.h>

/**
 * main - prints its name
 * @argc: num of command line agruments
 * @argv: array that contains the program command line arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
