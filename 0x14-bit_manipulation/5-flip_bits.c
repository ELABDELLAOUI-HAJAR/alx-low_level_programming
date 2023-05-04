#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: the first giving number
 * @m: the second giving number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int nbrFlips = 0;

	while (xor)
	{
		if (1 & xor)
			nbrFlips++;
		xor >>= 1;
	}
	return (nbrFlips);
}
