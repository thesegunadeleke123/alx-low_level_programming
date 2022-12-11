#include <stdlib.h>
#include <time.h>

/**
 * main - function to check if number is positive
 * negative or zero
 *
 * @n: integer to be checked
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);

	return (0);
}
