/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: base value
 * @y: power value
 *
 * Return: the value of x power y, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		return (-1);
	else if (y > 0)
	{
		power = x * _pow_recursion(x, y - 1);
	}
	else
		return (1);
	return (power);
}
