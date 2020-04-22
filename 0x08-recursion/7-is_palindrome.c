#include "holberton.h"

/**
 * string_length - returns 1 if a string is a palindrome and 0 if not.
 * @st: string to be parsed through
 *
 * Return: length of string, excluding null terminator
 */

int string_length(char *st)
{
	if (*st == '\0')
		return (0);
	return (string_length(++st) + 1);
}

/**
 * check_letters - resolve palidrome
 * @str: string to be checked as a palindrome
 * @i: length of string
 * @j: iteration variable, tracking distance from s
 * Return: 1 if string is palindrome, 0 if not
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
 * is_palindrome - check if palidrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = string_length(s);

	if (len < 2)
		return (1);
	return (check_letters(s, 0, --len));
}
