#include <stdio.h>
/**
 * main - prints the name of the program
 *
 * @argc: the count of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	printf("%s\n", *argv);
	(void) argc;
	return (0);
}
