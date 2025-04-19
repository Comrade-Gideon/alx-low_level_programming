#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 * You can only use the putchar function.
 * All your code should be in the main function.
 * You can only use putchar twice in your code.
 * Return: Always return (0) if sucess.
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
