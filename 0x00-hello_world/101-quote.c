#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly and that piece of art is useful
 * Dora Korpar, 2015-10-19,
 * Return: Your program should return 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19 \n",
			61);
	return (1);
}
