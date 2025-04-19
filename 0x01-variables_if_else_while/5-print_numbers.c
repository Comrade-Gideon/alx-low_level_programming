#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * All your code should be in the main function.
 * Return: Alway return 0 if success.
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d\n", num);
		num++;
	}
	return (0);
}
