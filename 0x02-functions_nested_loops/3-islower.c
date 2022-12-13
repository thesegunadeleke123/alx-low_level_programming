#include "main.h"

/**
 * _islower - checks character, returns 1 if lowercase
 * or 0 if other case
 * @c: character to test if lowercase or not in ASCII
 *
 * Return: Based on character.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
