#include "holberton.h"

/**
 * _isalpha - Write a function that checks for alphabetic character
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _isalpha(int c)
{

char m;
char p;
int s = 0;

for (m = 'a'; m <= 'z'; m++)
{
if (c == m)
{
s = 1;
}
}
for (p = 'A'; p <= 'Z'; p++)
{
if (c == p)
{
s = 1;
}
}
return (s);
}
