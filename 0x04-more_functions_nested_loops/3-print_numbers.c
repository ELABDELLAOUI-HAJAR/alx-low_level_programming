#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to 9
 */
void print_numbers(void)
{
	int number = 48;

	do {
		_putchar(number++);
	} while (number <= 57);
	_putchar('\n');
}
