#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - entry point
 * @n: input
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	int i, isPrime = 1;

	if (n == 2)
	isPrime = 1;
	else if (n == 1 || n % 2 == 0)
	isPrime = 0;

	for (i = 3; i <= n / 2; i += 2) {
	if (n % i == 0)
	isPrime = 0;
	}

	return isPrime;
}
