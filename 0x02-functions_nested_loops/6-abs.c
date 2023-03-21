#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: the input integer
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
