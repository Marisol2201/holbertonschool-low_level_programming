#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - check the code for Holberton School students.
 * @name: The character to print
 * @f: The character to print
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		return;
	f(name);
}
