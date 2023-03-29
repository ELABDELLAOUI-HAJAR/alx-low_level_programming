/**
 * rot13 - encodes a string using rot13
 *
 * @str: input string
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHJIKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j;

	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
