#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * Return: Always return 0, if success
 */

int print_last_digit(int n){
	int last_digit = n % 10;

	while (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar('0'+ last_digit);
	return (0);
}
