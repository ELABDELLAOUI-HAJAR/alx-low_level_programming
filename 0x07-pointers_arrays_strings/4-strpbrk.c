#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to be scanned
 * @accept: accepted bytes
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return (NULL);
}
