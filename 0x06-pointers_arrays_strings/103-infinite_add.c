/**
 * _strlen - calculate the string length
 * @str: input string
 * Return: the length of string
 */
int _strlen(char *str)
{
	int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}
/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;
	int sum, reste, i, j, k, l, tmp;

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	if (len1 > size_r || len2 > size_r)
		return (0);
	reste = 0;
	for (i = len1 - 1, j = len2 - 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		sum = reste;
		if (i >= 0)
		{
			sum += n1[i] - '0';
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
		}
		if (i < 0 && j < 0 && sum == 0)
			break;
		reste = sum / 10;
		r[k] = sum % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || reste != 0)
		return (0);
	for (l = 0; l < k / 2; l++)
	{
		tmp = r[l];
		r[l] = r[k - 1 - l];
		r[k - 1 - l] = tmp;
	}
	return (r);
}
