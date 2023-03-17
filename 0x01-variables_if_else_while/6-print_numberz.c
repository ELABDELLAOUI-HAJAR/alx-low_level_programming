#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function will print the all single digit
 * numbers of base 10 starting from 0 by using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	do {
		putchar(number + '0');
		number++;
	} while (number % 10 != 0);
	putchar('\n');
	return (0);
}
