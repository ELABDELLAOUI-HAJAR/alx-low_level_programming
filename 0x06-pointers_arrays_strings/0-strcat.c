/**
 * _strlen - get the string length
 * @str: input string
 * Return: string length
 */
int _strlen(char *str)
{
	int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}


/**
 * _strcat - concatenates two strings
 * @src: first string
 * @dest: second string
 *
 * Return: the concatenation string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len, i = 0;

	dest_len = _strlen(dest);
	src_len = _strlen(src);

	while (i < src_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
