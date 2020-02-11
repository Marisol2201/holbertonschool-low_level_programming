#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 * Description: it prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0.
 */

void print_alphabet(void)
{
char c;

c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
/*return ();*/
}
