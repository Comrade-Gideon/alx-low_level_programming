#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Prototype: int _islower(int c);
 * @c: Number to pass to _islower function.
 * Return: 1 if c is lowercase
 * Returns 0 otherwise
 */

int _islower(int c)
{
	unsigned char a = 'a';

	if (c >= a && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar(a);
}
