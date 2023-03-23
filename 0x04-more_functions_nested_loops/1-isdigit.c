/**
 * _isdigit -  checks for a digit
 * @c : character to check
 * Return: 1 (if c is digit) 0 otherwize
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
