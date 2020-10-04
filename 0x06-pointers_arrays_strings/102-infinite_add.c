#include "holberton.h"

/**
 * infinite_add -  adds two numbers
 * @n1: number to add
 * @n2: number to add
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: .
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, p = 0, desb = 0;
	int num1, num2, a, t, q, sum, sum1;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i = i - 1;
	j = j - 1;
	while (i >= 0 || j >= 0)
	{
		num1 = num2 = 0;
		if (i >= 0)
			num1 = n1[i--] - '0';
		if (j >= 0)
			num2 = n2[j--] - '0';
		sum1 = num1 + num2 + desb;
		if (sum1 >= 10)
			desb = 1;
		else
			desb = 0;
		sum = (sum1 % 10) + '0';
		r[p] = sum;
		p++;
	}
	if (i == j && sum1 >= 10)
		r[p] = '1';
	p++;
	r[p] = '\0';
	q = p;
	p = p - 1;
	for (a = 0; a <= p; a++)
	{
		t = r[p];
		r[p] = r[a];
		r[a] = t;
		p--;
	}
	if (size_r > q)
		return (r);
	else
		return (0);
}
