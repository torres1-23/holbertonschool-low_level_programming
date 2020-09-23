#include <stdio.h>

/**
 *main- main
 *
 *Return: 0 if success
 */

int main(void)
{
	unsigned long num1 = 0, num2 = 1;
	unsigned long num, part11, part12, part21, part22, ult, prim;
	int n;

	for (n = 1; n <= 50; n++)
	{
		num = num1 + num2;
		num1 = num2;
		num2 = num;
		printf("%ld, ", num);
	}
	part11 = num1 / 10000;
	part12 = num1 % 10000;
	part21 = num2 / 10000;
	part22 = num2 % 10000;
	for (n = 1; n <= 47; n++)
	{
		ult = (part12 + part22) % 10000;
		if (ult > 9999)
			prim = part11 + part21 + 1;
		else
			prim = part11 + part21;
		part11 = part21;
		part12 = part22;
		part21 = prim;
		part22 = ult;
		if (n != 47)
			printf("%lu%lu, ", prim, ult);
		else
			printf("%lu%lu\n", prim, ult);
	}
	return (0);
}
