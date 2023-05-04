#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the giving number
 * @index: the giving index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index;
	unsigned long int compare;

	max_index = sizeof(unsigned long int) * BITS - 1;

	if (index > max_index)
		return (-1);
	compare = 1 << index;
	*n = *n | compare;
	return (1);
}
