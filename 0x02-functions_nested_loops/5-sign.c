#include "main.h"
/**
 * print_sign -  prints the sign of a number.
 * • Prototype: int print_sign(int n);
 * @n: parameter to check the condition of n.
 * • Returns 1 and prints + if n is greater than zero
 * • Returns 0 and prints 0 if n is zero
 * • Returns -1 and prints - if n is less than zero
 * Return: Always return (0) if success.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
