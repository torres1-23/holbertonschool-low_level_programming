#include <stdio.h>

/**
 * main - Entry point, prints the size of types
 *
 * Return: Always 0 (Success)
 */
char a
int b
long c
float d
int main(void)
{
	printf("Size of a char: %i byte(S) \n", sizeof(a));
	printf("Size of a int: %i byte(S) \n", sizeof(b));
	printf("Size of a long int: %i byte(S) \n", sizeof(c));
	printf("Size of a float: %i byte(S) \n", sizeof(d));
	return (0);
}
