#include "main.h"

/**
 * jack_bauer - Function that counts and displays all
 * minutes in a day.
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		int h;

		for (h = 0; h < 60; h++)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar('\n');
		}
	}
}
