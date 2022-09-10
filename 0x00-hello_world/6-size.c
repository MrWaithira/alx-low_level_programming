#include <stdio.h>

int main(void)
{
	char c;
	int a;
	long at;
	long long att;
	float f;

	printf("Size of char: %ld byte(s) \n", sizeof(c));
	printf("Size of int: %ld byte(s) \n", sizeof(a));
	printf("Size of long int: %ld  byte(s) \n", sizeof(at));
	printf("Size of logn long int: %ld byte(s) \n", sizeof(att));
	printf("Size of float: %ld byte(s) \n", sizeof(f));
	return 0;
}
