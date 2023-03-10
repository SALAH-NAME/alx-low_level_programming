#include <stdio.h>

/**
 * main - prints the num of arguments passed into it
 * @argc: num of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unsed)))
{
	printf("%d\n", argc - 1);
	return (0);
}
