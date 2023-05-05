#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *pass = malloc(sizeof(char) * 5);
	char c[5] = {'H', 'o', 'l', 4, '\0'}, cmd[30];
	int i;

	for (i = 0; c[i]; i++)
		pass[i] = c[i];

	pass[i] = '\0';

	sprintf(cmd, "echo %s > 101-password", pass);
	system(cmd);

	return (0);
}
