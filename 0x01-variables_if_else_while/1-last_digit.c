#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point, coonditional statements and prints a string
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	if (ld == 0)
		printf("Last digitof %d is %d and is 0", n, ld);
	if (ld < 6 && ld != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ld);
	return (0);
}
