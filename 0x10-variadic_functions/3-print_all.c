#include "variadic_functions.h"
#include "stdio.h"
#include <string.h>

/**
 * print_int - f that prints ints
 * @arg: int to print
 * Return: void
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_char - f that prints char
 * @arg: char to print
 * Return: void
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_float - f that prints floats
 * @arg: float to print
 * Return: void
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - function that prints string
 * @arg: string to print
 * Return: always 0
 */
void print_string(va_list arg)
{
	char *pr;

	pr = va_arg(arg, char*);
	if (pr == NULL)
	{
		pr = "(nil)";
	}
	printf("%s", pr);
}

/**
 * print_all - f to print
 * @format: const pointer to some of the functions
 * Return: always 0
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list arg;
	char *separator;

	pt types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arg, format);

	i = 0;
	separator = "";
	while (format && format[i])
	{
		j = 0;
		while (types[j].test != NULL)
		{
			if (format[i] == types[j].test[0])
			{
				printf("%s", separator);
				types[j].printer(arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
