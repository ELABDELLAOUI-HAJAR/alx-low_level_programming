#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the giving number
 * @index: the giving index
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_index = sizeof(unsigned long int) * BITS - 1;
	unsigned long int compare, checker;

	if (index > max_index)
		return (-1);


	compare = 1 << index;
	checker = compare & n;

	if (checker == compare)
		return (1);
	return (0);
}
