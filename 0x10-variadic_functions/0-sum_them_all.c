#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters or If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list numeros;

	if (n == 0)
		return (0);

	va_start(numeros, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numeros, int);
	}
	va_end(numeros);
	return (sum);
}
