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

	for (d = 1; d < 90; d++)
	{
		putchar((d / 10) + '1');
		putchar((d % 10) + '1');
		if (d != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
