#include <stdio.h>

/**
 *main- main
 *
 *Return: 0 if success
 */

int main(void)
{
	double num = 0, num1 = 0, num2 = 1;
	int n;

	for (n = 1; n <= 98; n++)
	{
		num = num1 + num2;
		num1 = num2;
		num2 = num;
		if (n != 98)
			printf("%0.lf, ", num);
		else
			printf("%0.lf\n", num);
	}
	return (0);
}
