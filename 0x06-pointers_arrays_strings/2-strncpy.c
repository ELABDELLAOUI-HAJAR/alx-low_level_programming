/**
 * _strncpy - copies a string
 *
 * @src: first string
 * @dest: second string
 * @n: length of characters
 *
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
