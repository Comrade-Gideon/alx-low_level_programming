/**
 * _abs - computes the absolute value of an integer.
 * Prototype: int _abs(int);
 * @n: parameter
 *
 * Return: Always return 0, if success.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
