#include <stdio.h>
/**
 * main - print the sum of all the natural numbers below
 * 1024 that are multiples of 3 or 5
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 3, sum = 0;

	do {
		if (number % 3 == 0 || number % 5 == 0)
		{
			sum += number;
		}
		number++;
	} while (number < 1024);
	printf("%d\n", sum);
	return (0);
}
