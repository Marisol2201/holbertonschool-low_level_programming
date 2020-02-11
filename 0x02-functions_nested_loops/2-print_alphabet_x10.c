#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
  char c,d;

  c = 'a';
  while (c <= 'z')
    {
      _putchar(c);
      c++;
    }
  _putchar('\n');

  for (d = c; d < 11; d++)
    {
      putchar (d);
    }
  return (0);
}
