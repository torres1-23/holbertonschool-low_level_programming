#include <stdio.h>

/**
 *main- main
 *
 *Return: 0 if success
 */

int main(void)
{
	unsigned long num = 1, num1 = 2;
	unsigned long num2, prim, sec;
	int n;

	for (n = 1; n <= 98; n++)
	{
		if (n == 1)
			printf("%lu, ", num);
		else if (n == 2)
			printf("%lu, ", num1);
		else
		{
			num2 = num + num1;
			num = num1;
			num1 = num2;
			if (n > 50 && n <= 98)
			{
				prim = num2 / 1000000;
				sec = num2 % 1000000;
			}
			if (n <= 50 && n > 2)
			printf("%lu, ", num2);
			else if (n > 50 && n < 98)
			{
				printf("%lu%lu, ", prim, sec);
			}
			else
				printf("%lu%lu\n", prim, sec);
		}
	}
	return (0);
}
