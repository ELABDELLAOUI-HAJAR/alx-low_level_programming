#include <stdio.h>
#include <ctype.h>
/**
 * print_line - print a line
 * @b: buffer
 * @l: line to be print
 * @n: nbr of characters to be printed
 */
void print_line(char *b, int l, int n)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		if (i > n)
			printf("  ");
		else
			printf("%02x", b[10 * l + i]);
		if (i % 2 != 0)
			putchar(' ');
	}
	for (j = 0; j <= n; j++)
	{
		if (isprint(b[10 * l + j]))
			putchar(b[10 * l + j]);
		else
			putchar('.');
	}
}
/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of bytes to print
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size > 0; i++)
	{
		/*position of the first byte of the line in hexadecimal*/
		printf("%08x: ", i * 10);
		if (i < size / 10)
			print_line(b, i, 9);
		else
			print_line(b, i, size % 10 - 1);
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}

