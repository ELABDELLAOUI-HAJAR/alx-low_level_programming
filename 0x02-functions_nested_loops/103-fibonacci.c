#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Description: finds and prints the sum of the even-valued
 * terms in the Fibonacci sequence whose values do not
 * exceed 4,000,000
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int nbr1 = 1, nbr2 = 2, tmp, sum = 2;

	tmp = nbr1 + nbr2;
	while (tmp <= 4000000)
	{
		if (tmp % 2 == 0)
		{
			sum += tmp;
		}
		nbr1 = nbr2;
		nbr2 = tmp;
		tmp = nbr1 + nbr2;
	}
	printf("%ld\n", sum);
	return (0);
}
