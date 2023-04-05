/**
 * _str_len - returns string length
 * @str: the giving string
 * Return: string length
 */
int _str_len(char *str)
{
	if (*str)
		return (1 + _str_len(str + 1));
	return (0);
}
/**
 * _is_palindrome_rec - returns 1 if a string is a palindrome
 * and 0 if not
 * @s: the giving string
 * @i: index
 * @len: string length
 * Return:  returns 1 if a string is a palindrome and 0 if not
 */
int _is_palindrome_rec(char *s, int i, int len)
{
	if (i > len / 2)
		return (1);
	else if (s[i] == s[len - 1 - i])
		return (_is_palindrome_rec(s, i + 1, len));
	else
		return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the giving string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int s_len = 0;

	s_len = _str_len(s);
	if (*s == '\0')
		return (1);
	else
		return (_is_palindrome_rec(s, 0, s_len));
}
