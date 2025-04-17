#include <stdlib.h>
#include <time.h>
/*
 *This program generates a random integer and determines whether it is positive,
 * negative, or zero. It uses the rand() function to generate a random number,
 * adjusts it to include negative values, and prints the result to the console.
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else {
		printf("%d is negative\n", n);
	}
        return (0);
}
