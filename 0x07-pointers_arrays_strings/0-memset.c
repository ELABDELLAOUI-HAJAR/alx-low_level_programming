/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: number of memory bytes to be fill
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
