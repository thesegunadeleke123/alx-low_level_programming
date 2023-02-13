#include "main.h"

/**
 * print_last_digit - prints last digits of any number.
 * @r: input
 *
 * Return: 0.
 */

int print_last_digit(int r)
{
	int last_digit = r % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
