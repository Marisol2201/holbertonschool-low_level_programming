#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
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
