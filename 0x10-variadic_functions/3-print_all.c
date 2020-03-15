#include "variadic_functions.h"
#include "stdio.h"
#include <string.h>

/**
 * print_int - f that prints ints
 * @arg: type
 * Return: always 0
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_char - f that prints char
 * @arg: type
 * Return: always successful
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_float - f that prints floats
 * @arg: type
 * Return: always 0
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - function that prints string
 * @arg: type
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
	while (format[i])
	{
		j = 0;
		while (types[j].test != NULL)
		{
			if (format[i] == types[j].test[0])
			{
				types[j].printer(arg);
				separator = ", ";
				if (format[i + 1] == '\0')
					separator = "";
				printf("%s", separator);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
