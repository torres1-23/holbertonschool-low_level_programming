#include <stdio.h>

/**
 *main- main
 *
 *Return: 0 if success
 */

int main(void)
{
	unsigned long num2 = 0, num = 1, num1 = 2;
	int n;

	for (n = 1; n <= 98; n++)
	{
		if (n == 1)
			printf("%lu, ", num);
		else if (n == 2)
			printf("%lu, ", num1);
		else if (n < 98)
		{
			num2 = num + num1;
			num = num1;
			num1 = num2;
			printf("%lu, ", num2);
		}
		else
			printf("%lu\n", num2 + num2);
	}
	return (0);
}
