#include "main.h"

/**
 * _power - returns the value of x raised to the power of y
 * @x: the giving base
 * @y: the giving exponent
 * Return: the result of the power
 */
unsigned long int _power(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _power(x, y - 1));
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the giving number
 */
void print_binary(unsigned long int n)
{
	unsigned long int power = 0;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	power = _power(2, sizeof(unsigned long int) * BITS - 1);

	while (power)
	{
		if (flag && !(n & power))
			_putchar('0');
		else if (n & power)
		{
			flag = 1;
			_putchar('1');
		}
		power >>= 1;
	}
}
