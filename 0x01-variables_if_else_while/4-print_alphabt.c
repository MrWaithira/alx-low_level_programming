#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - code
 *
 * Return: Always 0 (success, then true)
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	printf("\n");
	return (0);
}
