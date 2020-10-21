#include "3-calc.h"

/**
 * op_add - Op addition.
 * @a: Operator 1
 * @b: Operator 2
 *
 * Return: Addition of ops.
 */

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - Op substraction.
 * @a: Operator 1
 * @b: Operator 2
 *
 * Return: Substraction of ops.
 */

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - Op multiplication.
 * @a: Operator 1
 * @b: Operator 2
 *
 * Return: Multiplication of ops.
 */

int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - Op division.
 * @a: Operator 1
 * @b: Operator 2
 *
 * Return: Division of ops.
 */

int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - Op module.
 * @a: Operator 1
 * @b: Operator 2
 *
 * Return: Module of ops.
 */

int op_mod(int a, int b)
{
	return ((a) % (b));
}
