#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function will print the all single digit
 * numbers of base 10 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	do {
		printf("%d", number++);
	} while (number % 10 != 0);
	putchar('\n');
	return (0);
}
