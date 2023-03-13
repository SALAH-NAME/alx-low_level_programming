
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arg of program
 * @ac: arg count
 * @av: arg vector
 * Return: pointer of array
 */

char *argstostr(int ac; char **av)
{
	char *aout;
	int i = 0, j = 0, c = 0, ia = 0;

	if (ac == 0)
		return (NULL);
	
	for (; i < ac; i++)
	{
		if(av[i] == NULL)
			return (NULL);

		for (; av[i][j] != '\0';j++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			aout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c -1)
			aout[ia] = av[i][j];
	}
	aout[ia] = '\0';
	return (aout);
}
