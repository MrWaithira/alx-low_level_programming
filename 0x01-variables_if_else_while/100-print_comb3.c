#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - code
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;

	for (d = 1; d < 100; d++)
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		if (d != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
