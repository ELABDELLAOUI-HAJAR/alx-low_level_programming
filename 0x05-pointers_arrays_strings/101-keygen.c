#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char password[64];
	int i, sum, n, tmp;

	srand(time(0));

	sum = 0;
	n = 2772;
	i = 0;
	while (i < 64)
	{
		if (n - sum > 126)
			tmp = rand() % 83 + 44;
		else if (n - sum < 126 && n - sum > 44)
		{
			tmp = n - sum;
			*(password + i) = tmp;
			*(password + i + 1) = '\0';
			break;
		}
		else
		{
			i = 0;
			sum = 0;
			continue;
		}
		sum = sum + tmp;
		*(password + i) = tmp;
		*(password + i + 1) = '\0';
		i++;
	}
	printf("%s", password);
	return (0);
}
