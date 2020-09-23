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

	for (n = 1; n <= 97; n++)
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
			if (n > 93 && n <= 96)
			{
				prim = num2 / 10000000000;
				sec = num2 % 10000000000;
			}
			if (n == 97)
			{
				prim = num2 / 10000000000;
				sec = num2 % 100000000000;
			}
			if (n <= 93 && n > 2)
				printf("%lu, ", num2);
			else if (n > 50 && n < 97)
				printf("%lu%lu, ", prim, sec);
			else
				printf("%lu%lu\n", prim, sec);
		}
	}
	return (0);
}
