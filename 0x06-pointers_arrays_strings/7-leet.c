/**
 * leet - encodes a string into 1337
 *
 * @str: input string
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	char lettre[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char correspond[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0, j;

	while (str[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == lettre[j])
			{
				str[i] = correspond[j];
			}
		}
		i++;
	}
	return (str);
}
