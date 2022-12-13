#include <stdio.h>

/**
 * main - prints lower case alphabets followed
 * by a new line.
 *
 * Return: 0 if successful
 */

int main(void)
{
	char c;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar("\n");
	}

	return (0);
}
