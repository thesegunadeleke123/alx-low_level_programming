#include <stdio.h>
#include "main.h"

/**
 * main - call print alphabet function
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	print_alphabet();

	return (0);
}

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
