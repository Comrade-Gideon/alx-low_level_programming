#include <stdio.h>

int main(void)
{
	char a = 'a';

	while (a <= 'Z')
	{
		a++;
		putchar(a);
		a++;
	}
	putchar('\n');
	return(0);
}
