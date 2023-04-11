#include <stdlib.h>
#include <stddef.h>
/**
 * _strlen - returns length of a string
 * @str: the giving string
 * Return: the length
 */
int _strlen(char *str)
{
	int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: an array of pointers to the arguments
 * Return: concatenation string
 */
char *argstostr(int ac, char **av)
{
	int concatLen = 0, i, j, k = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* find how many bytes to allocate */
	for (i = 0; i < ac; i++)
	{
		concatLen += _strlen(av[i]) + 1;
	}
	/* add 1 for \0 character */
	concatLen += 1;
	/* allocate space in memory */
	concat = malloc(sizeof(char) * concatLen);
	if (concat == NULL)
		return (NULL);
	/* concatenate arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			concat[k++] = av[i][j];
		}
		concat[k++] = '\n';
	}
	concat[k] = '\0';
	return (concat);
}
