#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function.
 * You can only use putchar twice in your code.
 * All your code should be in the main function.
 * Return: Alway return 0, if success.
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
