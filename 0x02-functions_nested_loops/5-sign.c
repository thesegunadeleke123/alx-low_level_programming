#include "main.h"

/**
 * print_sign - print sign attached to a number
 * and return a particular value.
 * @n: value to be tested.
 *
 * Return: 0 if positive.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
