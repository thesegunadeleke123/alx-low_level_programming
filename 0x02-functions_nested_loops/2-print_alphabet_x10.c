#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets in lower
 * case with a new line 10 times
 *
 * Return: Always Void (Successful)
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int n;

		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar(\n);

		i++
	}
}
