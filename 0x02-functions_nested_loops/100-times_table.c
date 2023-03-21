#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of times
 * Return: No return
 */
void print_times_table(int n)
{
	int i, j, coff;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n ; i++)
		{
			for (coff = 0; coff <= n; coff++)
			{
				j = coff * i;
				if (coff != 0)
				{
					if ((j / 100 == 0) && ((j % 100) / 10 == 0))
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if ((j / 100 == 0) && ((j % 100) / 10 != 0))
					{
						_putchar(' ');
						_putchar((j % 100) / 10 + '0');
					}
					else
					{
						_putchar(j / 100 + '0');
						_putchar((j % 100) / 10 + '0');
					}
				}
				_putchar((j % 100) % 10 + '0');
				if (coff != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
