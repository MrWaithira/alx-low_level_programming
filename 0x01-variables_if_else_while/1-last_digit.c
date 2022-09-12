#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign random number
 *
 * Description: assign random no and print value stored
 * Return: Always 0 (if so then successful)
 */

int main(void)
{
	int n;
	int L;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	L = n % 10;

	if (L > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n, L);
	}
	else if (L == 0)
	{
		printf("Last digit of %d is 0\n", n, L);
	}
	else if (L < 6)
	{
		printf("Last digti of %d is less than 6 and not 0\n", n, L);
	}
	return (0);
}
