#include <stdio.h>

/**
 *main- main
 *
 *Return: 0 if success
 */

int main(void)
{
	unsigned long num = 0, num1 = 1, num2 = 2;
	int n;

	for (n = 1; n <= 98; n++)
	{
		if (n == 1)
			printf("1, ");
		else
		{
			num = num1 + num2;
			num1 = num2;
			num2 = num;
		}
		if (n != 98)
			printf("%lu, ", num);
		else
			printf("%lu\n", num);
	}
	return (0);
}
