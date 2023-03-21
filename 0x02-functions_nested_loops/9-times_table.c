#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: No return
 */
void times_table(void)
{
	int i, j, coff;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		coff = 1;
		while (coff <= 9)
		{
			j = coff * i;
			if (j / 10 == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			if (coff != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			coff++;
		}
		_putchar('\n');
	}
}
