#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * You can only use the putchar function.
 * All your code should be in the main function.
 * You can only use putchar three times in your code
 * Return: Always return (0) if success.
 */

int main(void)
{
	int a = 0;
	char b = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (b < 'g')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
