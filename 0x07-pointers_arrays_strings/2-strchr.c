#include <stddef.h>
/**
 * _strlen - finds the length of a string
 * @str: input string
 *
 * Return: the string length
 */
int _strlen(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;
	return (len);
}
/**
 * _strchr - locates a character in a string
 *
 * @s: input string
 * @c: character to be located
 *
 * Return: a pointer to the first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i, len;

	len = _strlen(s);
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
