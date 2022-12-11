#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to print the last digit of a random number
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d\n", n, n % 2);

	return (0);
}
