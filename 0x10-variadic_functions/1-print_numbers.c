#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code for Holberton School students.
 * @separator: The character to print
 * @n: The character to print
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numeros;

	if (separator == NULL)
		separator = "";

	va_start(numeros, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numeros, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(numeros);
	printf("\n");
}
