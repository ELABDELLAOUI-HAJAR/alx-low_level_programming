#include <stdlib.h>
#include <stddef.h>
/**
 * _memset - set a specific value in a space of memory
 * @s: a pointer to the memory
 * @c: the specific character
 * @n: size
 * Return: a pointer to the memory space
 */
char *_memset(char *s, char c, unsigned int n)
{
	char *mem = s;

	while (n--)
		*mem++ = c;
	return (mem);
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: nbr of elements
 * @size: size of element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}
