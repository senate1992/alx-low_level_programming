#include "main.h"

/**
 * is_prime_number - entry point
 * @n: input
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int d;

	if (n <= 1)
	return (0);
	d = 2;
	while (d < n)
	{
	if (n % d == 0)
	return (0);
	d++;
	}
	return (1);
}
