#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long nbr1 = 1, nbr2 = 2, tmp, half1, half2;
	unsigned long nbr1_half1, nbr1_half2, nbr2_half1, nbr2_half2;
	int count = 3;

	printf("%lu, %lu, ", nbr1, nbr2);
	while (count < 93)
	{
		tmp = nbr1 + nbr2;
		printf("%lu, ", tmp);
		nbr1 = nbr2;
		nbr2 = tmp;
		count++;
	}
	nbr1_half1 = nbr1 / 10000000000;
	nbr1_half2 = nbr1 % 10000000000;
	nbr2_half1 = nbr2 / 10000000000;
	nbr2_half2 = nbr2 % 10000000000;
	while (count >= 93 && count <= 98)
	{
		half1 = nbr1_half1 + nbr2_half1;
		half2 = nbr1_half2 + nbr2_half2;
		if (half2 > 9999999999)
		{
			half1 += half2 / 10000000000;
			half2 %= 10000000000;
		}
		if (count != 98)
		{
			printf("%lu%lu, ", half1, half2);
			nbr1_half1 = nbr2_half1;
			nbr1_half2 = nbr2_half2;
			nbr2_half1 = half1;
			nbr2_half2 = half2;
		}
		else
			printf("%lu%lu\n", half1, half2);
		count++;
	}
	return (0);
}
