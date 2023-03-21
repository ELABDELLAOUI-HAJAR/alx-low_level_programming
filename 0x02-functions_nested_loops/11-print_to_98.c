#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 * Return: No return
 */
void print_to_98(int n)
{

	while (n < 98)
	{
		printf("%d, ", n++);
	}
	while (n > 98)
	{
		printf("%d, ", n--);
	}
	printf("98\n");
}
