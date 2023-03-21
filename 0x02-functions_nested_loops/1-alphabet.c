#include "main.h"

/**
 * print_alphabet - print lower alphabets
 *
 * Description: function to print the alphabets in lowercase
 * Following by New ligne
 *
 * Return: void (No return)
 */
void print_alphabet(void)
{
	char lettre = 'a';

	do {
		_putchar(lettre++);
	} while (lettre <= 'z');
	_putchar('\n');
}
