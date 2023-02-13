#include "main.h"

/**
 * _abs - function to return absolute value
 * of an integer.
 * @r: variable whose absolute value is to be
 * returned.
 * 
 * Return: 0 if successful
*/

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (r * (-1));
	}
	return (1);
}
