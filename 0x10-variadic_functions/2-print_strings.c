#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code for Holberton School students.
 * @format: The character to print
 * The character to print
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (((i < n) - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
