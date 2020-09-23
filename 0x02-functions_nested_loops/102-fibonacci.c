#include <stdio.h>

/**
 *main- main
 *
 *Return: 0 if success
 */

int main(void)
{
	long num = 0, num1 = 0, num2 = 1;
	int n;

	for (n = 1; n <= 50; n++)
	{
		num = num1 + num2;
		num1 = num2;
		num2 = num;
		if (n != 50)
			printf("%ld, ", num);
		else
			printf("%ld\n", num);
	}
	return (0);
}
