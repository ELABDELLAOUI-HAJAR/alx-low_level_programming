#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: function to print all the alphabet in lower case follow
 * By new line by using putchar function twice
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
