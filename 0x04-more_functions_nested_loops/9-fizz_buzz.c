#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the "Fizz-Buzz test"
 *
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			if (i != 100)
				printf("Buzz ");
			else
				printf("Buzz\n");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	return (0);
}
