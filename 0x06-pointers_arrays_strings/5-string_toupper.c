/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 *
 * @str: input string
 * Return: Uppercase string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
