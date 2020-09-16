#include <stdio.h>

/**
 * main - Entry point, prints the size of types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %i byte(S) \n", sizeof(char *));
	printf("Size of a int: %i byte(S) \n", sizeof(int *));
	printf("Size of a long int: %i byte(S) \n", sizeof(long int *));
	printf("Size of a float: %i byte(S) \n", sizeof(float *));
	return (0);
}
