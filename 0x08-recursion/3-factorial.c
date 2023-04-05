/**
 * factorial - returns the factorial of a given number
 *
 * @n: the given number
 *
 * Return: the factorial of n (if n > 0), 1 (if n == 0),
 * -1 (if n < 0)
 */
int factorial(int n)
{
	int fact;

	if (n > 0)
	{
		fact = n * factorial(n - 1);
	}
	else if (n == 0)
		return (1);
	else
		return (-1);
	return (fact);
}
