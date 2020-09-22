#include <stdio.h>

/**
 * print_to_98 - prints all the numbers from the integer to 98
 *@n: integer passed
 */

void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)
				printf("%d, ", x);
			else
				printf("98\n");
		}
	}
	else if (n == 98)
	{
		printf("98\n");
	}
	else
	{
		for (x = n; x >= 98; x--)
		{
			if (x != 98)
				printf("%d, ", x);
			else
				printf("98\n");
		}
	}
}
