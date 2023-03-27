/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char tmp;
	int length = 0, i = 0;

	while (s[i++])
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}
