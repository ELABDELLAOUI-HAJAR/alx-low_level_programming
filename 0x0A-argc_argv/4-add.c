#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positives numbers
 *
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(*(argv + i));
		}
		printf("%d\n", sum);
	}
	return (0);
}
