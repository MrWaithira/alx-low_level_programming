#include <stdio.h>

int main(void)
{
	char c;
	int a;
	long at;
	long long att;
	float f;

	printf("Size of a char: %ld byte(s) \n", sizeof(c));
	printf("Size of an int: %ld byte(s) \n", sizeof(a));
	printf("Size of a long int: %ld  byte(s) \n", sizeof(at));
	printf("Size of a logn long int: %ld byte(s) \n", sizeof(att));
	printf("Size of a float: %ld byte(s) \n", sizeof(f));
	return (0);
}
