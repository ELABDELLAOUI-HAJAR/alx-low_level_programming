#include "main.h"

/**
 * main - Entry point
 *
 * Description: function prints _putchar string by using
 * _putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < (int)sizeof(str) - 1)
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
	return (0);
}
