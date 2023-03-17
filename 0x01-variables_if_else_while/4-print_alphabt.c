#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function will print all the lower alphabet except
 * For e and q
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int lowerLetter;

	for (lowerLetter = 'a'; lowerLetter <= 'z'; lowerLetter++)
	{
		if (lowerLetter != 'e' && lowerLetter != 'q')
			putchar(lowerLetter);
	}
	putchar('\n');
	return (0);
}
