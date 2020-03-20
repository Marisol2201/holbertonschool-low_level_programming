#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum.
 * @a: The character to print
 * @b: The character to print
 * Return: Always 0.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub.
 * @a: The character to print
 * @b: The character to print
 * Return: Always 0.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul.
 * @a: The character to print
 * @b: The character to print
 * Return: Always 0.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div.
 * @a: The character to print
 * @b: The character to print
 * Return: Always 0.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod -mod
 * @a: The character to print
 * @b: The character to print
 * Return: Always 0.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
