#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the "Fizz-Buzz test"
 *
 * Returns: 0 if succes
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
