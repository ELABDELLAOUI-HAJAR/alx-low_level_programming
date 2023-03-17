#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This function will print the all combination of
 * Two digit without repeating the combination by using putchar
 * 01 and 10 are considerate same
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int first;
	int second;

	for (first = 0; first < 9; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (first < 8 || second < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
