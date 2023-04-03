#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 *
 * @a: matrix of integers
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int row, index, diagsum1 = 0, diagsum2 = 0;

	for (row = 0; row < size; row++)
	{
		index = row * size + row;
		diagsum1 += a[index];

	}
	for (row = 1; row <= size; row++)
	{
		index = row * size - row;
		diagsum2 += a[index];

	}
	printf("%d, %d\n", diagsum1, diagsum2);
}
