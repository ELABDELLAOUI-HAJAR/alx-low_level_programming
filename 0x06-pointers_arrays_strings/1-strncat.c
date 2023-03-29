/**
 * _strlen - get the string length
 * @str: input string
 * Return: String length
 */
int _strlen(char *str)
{
	int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}

/**
 * _strncat - concatenates two strings by specifying the number
 * of characters to be concatenated
 *
 * @src: first String
 * @dest: second String
 * @n: number of characters
 *
 * Return: String concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	dest_len = _strlen(dest);

	while (i < n && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (dest);
}
