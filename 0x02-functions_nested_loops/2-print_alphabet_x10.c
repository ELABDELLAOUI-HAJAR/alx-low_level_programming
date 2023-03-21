#include "main.h"

/**
 * print_alphabet_x10 - print all the alphabet in lower
 * Case 10 times
 *
 * Return: There is no return
 */
void print_alphabet_x10(void)
{
	int time = 0;
	char lettre;

	while (time++ < 10)
	{
		lettre = 'a';
		do {
			_putchar(lettre++);
		} while (lettre <= 'z');
		_putchar('\n');

	}
}
