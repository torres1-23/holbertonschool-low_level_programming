#include <stdio.h>

/**
 * main - Entry point, prints the size of types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long c;
	double d;
	float e;

	printf("Size of a char: %ld byte(S)\n", sizeof(a));
	printf("Size of a int: %ld byte(S)\n", sizeof(b));
	printf("Size of a long int: %ld byte(S)\n", sizeof(c));
	printf("Size of a long long int: %ld byte(S)\n", sizeof(d));
	printf("Size of a float: %ld byte(S)", sizeof(e));
	return (0);
}
