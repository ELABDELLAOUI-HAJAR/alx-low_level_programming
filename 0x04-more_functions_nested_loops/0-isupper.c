/**
 * _isupper -  checks for uppercase character
 * @c: Input character
 * Return: 1 (if c is uppercase) 0 otherwize
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
