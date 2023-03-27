#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int length = 0, i = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
