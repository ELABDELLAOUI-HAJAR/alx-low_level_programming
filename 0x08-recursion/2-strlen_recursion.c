/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: input string
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = 1 + _strlen_recursion(s + 1);
	}
	return (len);
}
