#include "main.h"

/**
 * is_prime_number - entry point
 * @n: input
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int prime = 1;
	int i;

	if (n <= 1)
	{
	prime = 0;
	}
	else
	{
	for (i = 2; i < n / 2; i++)
	{
	if (n % i == 0)
	{
	prime = 0;
	break;
	}
	}
	}

	return prime;
}
