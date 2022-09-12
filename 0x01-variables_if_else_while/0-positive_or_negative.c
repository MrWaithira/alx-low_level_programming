#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print positive or negative
 *
 * Description: refer to main function
 * Return: Always 0 (then successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / z;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero \n", n);
	}
		else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
		return (0);
}
