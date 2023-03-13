#include <stdlib.h>
#include "main.h"

/**
 * count_word - a help f() to count words
 * @s: string
 * Return: number of words
 */

int count_word(char *s)
{
	int c = 0, flag= 0, w = 0;

	for (; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - splits a string
 * @str: string
 * Return: pointer to array of strings, NULL for any error
 */

char **strtow(char *str)
{
	char *matrix, *tmp;
	int i = 0, k = 0, c = 0, len = 0, words, start, end;

	while(*(str + len))
		len++;
	
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
