#include <stdio.h>

/**
 *main- main
 *
 *Return: 0 if success
 */

int main(void)
{
	unsigned long num2 = 0;
	unsigned long num, num1;
	int n;

	for (n = 1; n <= 98; n++)
	{
		num = 1;
		num1 = 2;
		num2 = num + num1;
		if (n != 98)
			printf("%lu, ", num);
		else
			printf("%lu\n", num);
	}
	return (0);
}
