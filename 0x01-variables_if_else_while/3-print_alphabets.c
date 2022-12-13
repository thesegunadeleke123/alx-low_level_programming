#include <stdio.h>

/**
 * main - prints upper and lower case characters
 * followed by a new line
 *
 * Return: 0 if successful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
