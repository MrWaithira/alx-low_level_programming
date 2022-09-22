#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - code entry point
 *
 * Return: Always 0 (success, then tru)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	printf("\n");
	return (0);
}
