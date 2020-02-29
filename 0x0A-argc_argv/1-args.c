#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: The character to print
 * @argv: The character to print
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
