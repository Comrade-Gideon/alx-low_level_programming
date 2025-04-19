#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 * You can only use the putchar function.
 * All your code should be in the main function
 * You can only use putchar twice in your code.
 * Return: Always return 0 (if success).
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
