#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < size; x++)
	{
		space = size - x;
		for (y = 1; y <= size; y++)
		{
			if (y < space)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
