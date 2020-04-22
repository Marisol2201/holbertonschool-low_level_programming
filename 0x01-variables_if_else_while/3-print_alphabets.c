#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	alphabet = 'A';
	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
