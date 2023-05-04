#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *p = (char *) &x;

	return (*p == 0x10);
}
