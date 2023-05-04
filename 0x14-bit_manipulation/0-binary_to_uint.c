#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: the giving string
 * Return: the length
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}

/**
 * _pow - return the value of x raised to the power of y
 * @x: the giving base
 * @y: the giving exponent
 * Return: the result of the power
 */
int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 * Return: the converted number and 0 if b is NULL or
 * there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, pow = 0, len = 0;
	int i;

	if (!b)
		return (0);

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += (b[i] - '0') * _pow(2, pow);
		pow++;
	}
	return (num);
}
