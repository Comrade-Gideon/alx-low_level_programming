#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function.
 * All your code should be in the main function.
 * You can only use putchar four times maximum in your code.
 * You are not allowed to use any variable of type char.
 * Return: Always return 0, if success.
 */
int main(void)
{
	int a = 0;
	char b = ',';

	while (a < 10)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(b);
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
