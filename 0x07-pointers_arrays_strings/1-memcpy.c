/**
 * _memcpy -  copies memory area
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n:number of bytes
 *
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
