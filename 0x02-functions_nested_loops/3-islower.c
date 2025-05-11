#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Prototype: int _islower(int c);
 * @c: Input for checking lowercase character.
 * Return: 1 if c is lowercase
 * Returns 0 otherwise
 */

int _islower(int c)
{
	unsigned char a = 'a';

	if (c >= a && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar(a);
}
