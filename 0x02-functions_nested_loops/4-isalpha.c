#include "main.h"

/**
 * _isalpha - check if character is alpha and return 1 if true.
 * @c: character to be checked in ASCII
 *
 * Return: Depends on the trueness of results. lol
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
