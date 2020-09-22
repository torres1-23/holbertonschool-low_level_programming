#include <stdio.h>

/**
 *main- main
 *
 *Return: 0 if success
 */

int main(void)
{
	int z = 0;
	int x;

	for (x = 0; x < 1024; x++);
	{
		if ( (x % 3 == 0) || (x % 5 == 0))
			z = z + x;
	}
	printf("%d\n", z);
	return (0);
}
