#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print lower case alphabets with
 * new line.
 *
 * Return: Void.
 */

void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
