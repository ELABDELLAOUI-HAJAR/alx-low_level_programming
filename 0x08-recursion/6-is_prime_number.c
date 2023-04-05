/**
 * _is_prime - finds if a giving number is a prime
 *
 * @n: the giving number
 * @d: counter
 *
 * Return: 1 (if n is prime number), 0 otherwize
 */
int _is_prime(int n, int d)
{
	if (n == d)
		return (1);
	else if (n % d != 0)
		return (_is_prime(n, d + 1));
	else
		return (0);
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: the giving number
 *
 * Return: 1 (if n is prime number), 0 otherwize
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_is_prime(n, 2));
}
