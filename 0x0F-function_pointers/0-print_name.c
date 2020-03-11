#include "function_pointers.h"

/**
 * print_name - check the code for Holberton School students.
 * @name: The character to print
 * @f: The character to print
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == ('\0') && f == ('\0'))
		return;
	f(name);
}
