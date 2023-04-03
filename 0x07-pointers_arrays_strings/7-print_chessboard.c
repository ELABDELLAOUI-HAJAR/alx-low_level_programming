#include "main.h"
/**
 * print_chessboard -  prints the chessboard
 *
 * @a: pointer
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* loop for rows*/
	for (i = 0; i < 8; i++)
	{
		/* loop for columns */
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
