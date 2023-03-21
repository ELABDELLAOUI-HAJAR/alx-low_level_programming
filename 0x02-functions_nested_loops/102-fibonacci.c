#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting
 * with 1 and 2
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 2;
	long int nbr1 = 1, nbr2 = 2, tmp;

	printf("%ld, %ld, ", nbr1, nbr2);
	while (count < 49)
	{
		tmp = nbr1 + nbr2;
		printf("%ld, ", nbr1 + nbr2);
		nbr1 = nbr2;
		nbr2 = tmp;
		count++;
	}
	printf("%ld\n", nbr1 + nbr2);
	return (0);
}
