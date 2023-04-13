#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: a pointer of array of integers
 */
int *array_range(int min, int max)
{
	int *array;
	int i, length = 0;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	array = malloc(length * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		*(array + i) = min++;
	return (array);
}
