#include <stdio.h>

/**
 * main - prints the alphabet in lowecase, followed
 * by a new line, except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'Z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
