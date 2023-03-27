/**
 * _strlen - returns the length of a string.
 * @s: a pointer to a string
 * Return: the string's length
 */
int _strlen(char *s)
{
	int length = 0, i = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
