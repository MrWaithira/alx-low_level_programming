#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: ALways 0 (success)
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	
	_putchar('\n');
	}
}