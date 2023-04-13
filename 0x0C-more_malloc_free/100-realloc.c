#include <stdlib.h>
#include <stddef.h>
/**
 * _memcpy - copy n characters from src to dest
 * @dest: destination pointer
 * @src: src pointer
 * @n: nbr of characters to be copied
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *newDest = dest;

	while (n--)
		*dest++ = *src++;
	return (newDest);
}


/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: old size of memory allocated
 * @new_size: new size of memory
 * Return: a pointer to the memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		free(ptr);
		return (newptr);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	if (new_size > old_size)
		_memcpy(newptr, ptr, old_size);
	else
		_memcpy(newptr, ptr, new_size);
	free(ptr);
	return (newptr);
}

