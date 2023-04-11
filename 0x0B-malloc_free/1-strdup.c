#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - returns the length od str
 * @str: the giving str
 * Return: the length
 */
int _strlen(char *str)
{
	int len = 0, i;

	while (str[i++])
		len++;
	return (len);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the giving string
 * Return: a pointer to the allocated space of memory
 */
char *_strdup(char *str)
{
	char *dup;
	int size, i;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);
	/* dynamic allocation */
	dup = malloc(sizeof(char) * size + 1);
	/* check if the allocation it fail */
	if (dup == NULL)
		return (NULL);
	/* copy the string */
	for (i = 0; i < size; i++)
	{
		*(dup + i) = *(str + i);
	}
	/* add the end of string */
	*(dup + i) = '\0';
	return (dup);
}
