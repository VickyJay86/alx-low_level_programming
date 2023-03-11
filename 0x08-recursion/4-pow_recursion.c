/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: int type 1st char
 * @y: int type 2nd char
 *
 * Return: value of x
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
