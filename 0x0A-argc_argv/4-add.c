#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive nums
 * @argc: num of command line arguments
 * @argv: array that contains the program command line arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
