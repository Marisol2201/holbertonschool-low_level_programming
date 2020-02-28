#include "holberton.h"

/**
 * string_length - check the code for Holberton School students.
 * @st: The character to print
 * The character to print
 * Return: Always 0.
 */

int string_length(char *st)
{
	if (*st == '\0')
		return (0);
	return (string_length(++st) + 1);
}

/**
 * check_letters - check the code for Holberton School students.
 * @str: The character to print
 * @i: The character to print
 * @j: The character to print
 * Return: Always 0.
 */

int check_letters(char *str, int i, int j)
{
	if ((j - i) < 2)
		return (str[i] == str[j] ? 1 : 0);
	if (str[i] != str[j])
		return (0);
	return (check_letters(str, ++i, --j));
}

/**
 * is_palindrome - check the code for Holberton School students.
 * @s: The character to print
 * The character to print
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int len = string_length(s);

	if (len < 2)
		return (1);
	return (check_letters(s, 0, --len));
}
