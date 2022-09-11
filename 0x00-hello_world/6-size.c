#include <stdio.h>

/**
 * main - fucntion
 *
 * Return: Always 0 (Seccessful)
 */

int main(void)
{
	char i;
	int a;
	long int la;
	long long int lla;
	float f;
	printf("Size of a char: %d byte(s)\n", sizeof(i));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d byte(s)\n", sizeof(la));
	printf("Size of a logn long int: %d byte(s)\n", sizeof(lla));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
