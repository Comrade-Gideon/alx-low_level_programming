#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: Always return 0, is sucess
 */

int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

