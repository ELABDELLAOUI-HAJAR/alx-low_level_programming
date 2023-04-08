#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	int nbrCoins = 0, reste;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][0] == '-')
		printf("0\n");
	else
	{
		reste = atoi(*(argv + 1));
		nbrCoins = reste / 25;
		reste %= 25;

		nbrCoins += reste / 10;
		reste %= 10;

		nbrCoins += reste / 5;
		reste %= 5;

		nbrCoins += reste / 2;
		reste %= 2;

		nbrCoins += reste / 1;
		printf("%d\n", nbrCoins);
	}
	return (0);
}
