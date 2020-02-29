#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: The character to print
 * @argv: The character to print
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;
	printf("%d\n", z);
	return (0);
}
