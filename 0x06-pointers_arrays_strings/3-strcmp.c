/**
 * _strcmp - compares two strings
 *
 * @s1: first String
 * @s2: second String
 *
 * Return: 0 (if s1 and s2 equal) integer < 0 (if s1 less than s2)
 * integer > 0 (if s1 greater than s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (s1[i] && s2[i])
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}
