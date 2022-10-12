#include <unistd.h>
/**
 * _putchar -writes c to stdout
 *
 * Return: Always 0
 */
int _puchar(char c)
{
	return (write(1, &c, 1));
}
