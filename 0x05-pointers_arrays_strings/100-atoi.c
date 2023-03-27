/**
 * _atoi -  convert a string to an integer
 * @s: string to convert
 * Return: int found or 0
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int i = 0, len = 0, signe = 1;

	while (s[i++])
		len++;

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			signe = -(signe);
		else if (s[i] >= 48 && s[i] <= 57)
			result = 10 * result + (s[i] - '0');
		else if (result != 0)
			break;
	}

	return (signe * result);
}
