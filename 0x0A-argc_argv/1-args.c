#include <stdio.h>
/**
 * main - prints the number of arguments
 *
 * @argc: the number of arguments
 * @argv: an array of pointer to the arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
