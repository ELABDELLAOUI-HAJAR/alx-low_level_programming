#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples to numbers
 *
 * @argc: the number of arguments
 * @argv: an array of pointer to the arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
		return (0);
	}
}
