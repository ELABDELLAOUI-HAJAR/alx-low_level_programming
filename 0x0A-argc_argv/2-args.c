#include <stdio.h>
/**
 * main - prints all the arguments
 *
 * @argc: the number of arguments
 * @argv: an array of pointer to the arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
